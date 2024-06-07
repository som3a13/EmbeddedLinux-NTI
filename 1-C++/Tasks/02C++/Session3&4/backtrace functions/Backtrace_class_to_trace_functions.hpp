#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define TRACE backtrace bt(__PRETTY_FUNCTION__)
#define PRINT backtrace::Printbt()
class backtrace
{
    private:
                int id;
                static int nextID;
                static std::stack<std::string> stack;
                std::string name;
    public:
    
        backtrace(std::string name):name(name),id(nextID++)
        {   
           
            std::cout << "Entering Fucntion: "<< id <<"- "<<"["<<name<<"]" << std::endl;
            stack.push(name);
        }
    static void Printbt() {
        std::stack<std::string> temp = stack;
        std::cout << "Function call backtrace:" << std::endl;
        while (!temp.empty()) {
            std::cout << temp.top() << std::endl;
            temp.pop();
        }
    }
        ~backtrace()
        {   
            stack.pop();
            std::cout << "Exiting Fucntion: "<< id <<"- "<<"["<<name<<"]" << std::endl;
        }




};
int backtrace::nextID=1;
std::stack<std::string> backtrace::stack;


