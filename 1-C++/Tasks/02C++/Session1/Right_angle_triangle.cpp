#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>

void triangle();
int main()
{
    
    triangle();
    return 0;
}

void triangle()
{
    
    //sides of triangle in a vector
    std::vector<int>sides(3);
    //Get values from user
    std::cout<<"Please enter sides value: "<<std::endl;
    std::cin>>sides[0]>>sides[1]>>sides[2];
    //Sorting in ascending order
    std::sort(sides.begin(),sides.end());

    int side1=sides[0];
    int side2=sides[1];
    int side3=sides[2];

    //check
    if(std::pow(side1,2)+std::pow(side2,2)==std::pow(side3,2))
    {
        std::cout<<"These sides can form right angle triangle"<<std::endl;
    }
    else
    {
        std::cout<<"Sorry,These sides can't form right angle triangle."<<std::endl;
        
    }

}