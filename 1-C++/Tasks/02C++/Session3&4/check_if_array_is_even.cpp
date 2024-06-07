#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    std::vector<int>evenArr;
    bool even = true;

    std::for_each(std::begin(arr), std::end(arr), [&even,&evenArr](int element) {
        if (element % 2 != 0) {
            even = false;
        
        }
        if(element %2 ==0)
        {
            evenArr.push_back(element);
        }
    });

    if(even)
    {
        std::cout << "All even elements" << std::endl;
    }
    else
    {
        std::cout << "Not all are even" << std::endl;
    }
    std::cout << "Even elements are:"  << std::endl;
    for(auto i : evenArr)
    {
        std::cout << i << " ";
    }
}