#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <vector>
void max3();
void sort_num();
void max_num();
int  main() {

    //max3();
    //sort_num();
    max_num();
    return 0;
}
void max3(){
    int x,y,z;
    // Take input from user 
    std::cout<<"PLease enter the 3 numbers: "<<std::endl;
    std::cin>>x>>y>>z;
    // Get the max of the 3 numbers
    int max=x;
    if(max==y && max ==z) // Check if numbers are equal
    {
        std::cout<<"Numbers are equal"<<std::endl;
        max=x;
    }
    else if(y>=max && y>z)
    {
        max=y;
    }
    else if (z>=max && z>y) {
        max=z;
    
    }
    else if (z==y && z>=max) {
        max = z; 
       
    }
    else
    {
        std::cout << "Please enter valid numbers" << std::endl;
    }
   
    printf("MAX = %d \n",max);
}

void sort_num()
{   
    
    std::vector<int>numbers(3);
    std::cout<<"PLease enter the 3 numbers: "<<std::endl;
    std::cin>>numbers[0]>>numbers[1]>>numbers[2];
    // Using Sort algorithm library
    std::sort(numbers.begin(),numbers.end(),std::greater_equal<int>());

    std::cout << "MAX = "<<numbers[0] << std::endl;
}

void max_num()
{
        int x,y,z;
    // Take input from user 
    std::cout<<"PLease enter the 3 numbers: "<<std::endl;
    std::cin>>x>>y>>z;
    int ans = std::max(x,std::max(y,z));

    std::cout << "MAX = "<<ans << std::endl;
}