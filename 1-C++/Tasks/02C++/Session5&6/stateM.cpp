// IDLE to RUN to STOP to IDLE

#include <algorithm>
#include <chrono>
#include <csignal>
#include <cstdio>
#include <iostream>
#include <ostream>
#include <thread>
#include <vector>

using namespace std::chrono_literals;
//STATES
enum class States
{
IDLE,
RUN,
STOP
};

// State machine
class SM
{
private:
States currentState;
std::vector<States> states;

public:

struct operations
{
    int y;
    int x;
    int z;
};

std::vector<operations> op;

int run=0;
// SM(){}//default constructor
explicit SM():currentState(States::IDLE){
    std::cout << "constructor" << std::endl;
    states.push_back(currentState);
   
}

void transition(const States & state)
{
    currentState=state;
    states.push_back(currentState);
}

void process()
{ 
    if (run==1)
    {
    switch (currentState) 
    {
    case States::IDLE : std::cout << "current state is IDLE" << std::endl; 
        if(1)
        {
            transition(States::RUN);
            operations i1={1,2,3};
            
            op.push_back(i1);
        }
    
    break;
    case States::RUN : std::cout << "current state is RUN" << std::endl;
     transition(States::STOP);
    break;
    case States::STOP : std::cout << "current state is STOP" << std::endl;
     transition(States::IDLE);
    break;
    
    }
    }
    if(run==0)
    {
        transition(States::IDLE);
        std::cout << "current state is IDLE" << std::endl;
    }
   
        
        
    
}

void getState()
{
    std::cout <<"States in numbers :";
    for(auto &i : states)
    {
        std::cout <<static_cast<int>(i) << " ";
    }
    
   std::cout  << std::endl;
}



};
int main()
{   
    SM a;

    a.run=1;
    auto i=3;
    while(i--)
    {   
        a.process();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
    }
    a.getState();
}