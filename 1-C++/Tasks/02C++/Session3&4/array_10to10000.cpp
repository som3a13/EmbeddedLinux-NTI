#include <iostream>
#include <numeric>


int main()
{
    const int size = 9991;
    int arr[size];
    std::iota(arr, arr+size,10);
    for(int i:arr)
    {
       //Print 10,20,30,40,... etcc
        if (i % 10==0)
        {
             std::cout << i<< std::endl;
        }
        else
        {
            continue;
        }
    }
}