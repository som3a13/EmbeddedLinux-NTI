#include <iostream>
#include <csignal>

bool run=true;
void signalhandler(int signum)
{
    if(signum==SIGTSTP)
    {
        std::cout << " " << std::endl;
        std::cout << "Ctrl+ z is pressed" << std::endl;
        run=false;
    }
    
}



int main()
{
    signal(SIGTSTP, signalhandler);
    while(run)
    {
        std::cout << "Program is running" << std::endl;
        sleep(1);
    }
    std::cout << "Program is stopped" << std::endl;
    return 0;
}