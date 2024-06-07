#include <iostream>
#include <memory>
#include <vector>
#include <chrono>
#include <iomanip>
class work {
private:
  

public:
    int* ptr1 = nullptr;
    int x = 1;

    work(){}
    work(int* ptr1) : ptr1(ptr1) {}

    ~work() {
        if (ptr1) {
            delete ptr1;
            ptr1 = nullptr;
            
        }
        std::cout << "Work dest" << std::endl;
    }

 
};


class  log
{
    private:
    
    public:
    enum class logkey {
    Debug,
    Info,
    Warning,
    Error
};
    struct loginfo
    {
        logkey info;
        
        std::string msg;
    };
    std::unique_ptr<work>ptr;
   std::vector<loginfo> vlog;
    


log()
{
   std::cout << "Constructor" << std::endl;
    ptr=std::make_unique<work>();

}

~log() {
    
    
    std::cout << "Destructor" << std::endl;
}
void dump()
{
    // ptr->ptr1=new int (5);
if (ptr->ptr1==0) {
        loginfo log1 = {logkey::Warning, " :ptr is not initialized"};
        vlog.push_back(log1);
        for (auto& vec : vlog) {
            std::cout << static_cast<int>(vec.info) << vec.msg << std::endl;
        }
       
    }
}
 void clear()
{
    vlog.clear();
}
};





int main()
{   
    log().dump();
   

}