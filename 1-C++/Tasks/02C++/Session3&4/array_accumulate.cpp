#include <iostream>
#include <numeric>

int main()
{
     int arr[10]={1,2,3,4,5,6,7,8,9,10};

     int sum=std::accumulate(arr,arr +10 ,0);

     std::cout << sum << std::endl;


}