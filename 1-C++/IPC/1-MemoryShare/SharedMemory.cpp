#include "SharedMemory.hpp"
#include <fstream>
#include <signal.h>


SharedMemory::SharedMemory(const std::string& path):filePath(path),logFile("log.txt"){
        coutbuf = std::cout.rdbuf();  // Save old buffer
    
        std::cout.rdbuf(logFile.rdbuf());  // Redirect cout to log.txt
}
SharedMemory::~SharedMemory()
{
        std::cout.rdbuf(coutbuf);  // Restore the old cout buffer
        logFile.close();  // Close the file

        // shared_memory_object::remove("MySharedFile");
        // named_mutex::remove("mtxSharedMemory");
        // named_condition::remove("condSharedMemory");
        std::cout << "Shared Memory Destructor" << std::endl;
}



void signalhandler(int signum)
{
    std::cout << "DATA READ" << std::endl;
}



WriteSection::WriteSection(const std::string& path):SharedMemory(path){}
WriteSection::~WriteSection(){}
int WriteSection::read_mem(){return 0;}
int WriteSection::write_mem()
{
        
    try {

        /**********OPEN FILE & SAVE DATA IN IT IN BUFFER*************/
        std::ifstream input(filePath, std::ios::binary);
        std::vector<char> buffer(std::istreambuf_iterator<char>(input), {});
        /**********REMOVE ANY CREATED SHARED MEMORY WITH SAME NAME*****************/
        shared_memory_object::remove("MySharedFile");
        /**********REMOVE ANY CREATED MUTEX WITH SAME NAME*****************/
        named_mutex::remove("mtxSharedMemory");
        /**********REMOVE ANY CREATED COND WITH SAME NAME*****************/
        named_condition::remove("condSharedMemory");
        /**********CREATE SHARED MEM OBJECT*******************/
        shared_memory_object shm(create_only, "MySharedFile", read_write);
        /**********CREATE SHARED MUTEX *******************/

        named_mutex mutex(create_only, "mtxSharedMemory");
        /**********CREATE SHARED STATE *******************/

        named_condition cond(create_only, "condSharedMemory");
        /**********Asign size of data for SHARED Mem********/
        shm.truncate(buffer.size());
        /**********Mapping size of shm object in RAM********/

        mapped_region region(shm, read_write);
        /**********COPY DATA TO SHARED MEMORY ADDRESS*******/
        std::memcpy(region.get_address(), buffer.data(), buffer.size());
 

        /**********CLOSING THE FILE******************/
        input.close();


        /***********LOCK THE Execution of code*******************/
        // {

        //     scoped_lock<named_mutex> lock(mutex);
        //     std::cout << "Sender: File data written to shared memory. Waiting for receiver..." << std::endl;
            

        //     /******************Forking a child process***************************/
        //     pid_t pid = fork();
        // if (pid == 0) {  
        //     char* argv[] = {const_cast<char*>("reader"), nullptr};
        //     execv(argv[0], argv);

        //     std::cerr << "Child: Failed to execute reader process." << std::endl;
        //     exit(1);
        // } else if (pid > 0) {  


        //     /****************ISSUE HERE AS MAINWINDOW GUI WILL FREEZE TILL IT FINISH MAKE SENSE BUT IF IT FAILED ? **********************/


        //     cond.wait(lock);

        //     std::cout << "Sender: Receiver has read the data. Exiting now." << std::endl;
        // } else {
        //     std::cerr << "Failed to fork" << std::endl;
        //     return 1;
        // }

        //     /********Signal from other process relases the scoped lock************/
        //     // cond.wait(lock);
        // }
        // unsigned char flag=1;
        // signal(SIGUSR1, signalhandler);
        // while(flag!=1)
        // {
            
        // }

        // std::cout << "Sender: Receiver has read the data. Exiting now." << std::endl;
        } catch (std::exception &e) {
            std::cerr << "Sender: An error occurred: " << e.what() << std::endl;
            std::cout << filePath << std::endl;
            return 1;
        }
        return 0;
}




ReadSection::ReadSection(const std::string& path):SharedMemory(path){}
ReadSection::~ReadSection(){}


int ReadSection::write_mem(){return 0;}
int ReadSection::read_mem()
{
    try {
        shared_memory_object shm(open_only, "MySharedFile", read_only);
        named_mutex mutex(open_only, "mtxSharedMemory");
        named_condition cond(open_only, "condSharedMemory");
        mapped_region region(shm, read_only);

        {
            scoped_lock<named_mutex> lock(mutex);

            /***************OPEN FILE TO WRITE DATA FROM SHARED REGION**************/
            std::ofstream output(filePath, std::ios::binary);
            output.write(static_cast<char*>(region.get_address()), region.get_size());
            output.close();


            std::cout << "Receiver: File data read from shared memory and saved." << std::endl;
            /******/
            // std::cin.get();
            /******Notify the sender that the data has been read***********/
            cond.notify_one();
        }
    } catch (std::exception &e) {
        std::cerr << "Receiver: An error occurred: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}

