#pragma once
#include <array>
#include <cstddef>
#include <exception>
#include <iostream>
#include <iterator>
#include <locale>
#include <memory>
#include <stdexcept>
#include <string>

class MyPipe
{
public:

    MyPipe(std::string cmd);


    std::string pipe_command();

    std::string print_output();

    int search_pipe(const std::string& word);
    
    ~MyPipe();

private:
    std::string pipecmd;
    std::string output;
};


// int main() {

    
//     try 
//     {
//         MyPipe new_pipe("./input"); 
//         new_pipe.pipe_command();
//         std::cout << new_pipe.print_output() << std::endl;
//         new_pipe.search_pipe("PIe");
        
//     }
//     catch (const std::exception& e) 
//     {
//         std::cerr << "Exception occurred: " << e.what() << std::endl;
//         return 1;
//     }
//     return 0;
// }
