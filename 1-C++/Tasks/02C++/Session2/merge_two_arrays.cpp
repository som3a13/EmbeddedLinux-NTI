#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8,9,10};

    auto size = (sizeof(arr1)/sizeof(arr1[0]))+(sizeof(arr2)/sizeof(arr2[0]));
    int arr3[size];
    
    std::merge(std::begin(arr1),std::end(arr1),std::begin(arr2),std::end(arr2),arr3);

    std::cout << "Merged array : ";
    for(auto i : arr3)
    {
        std::cout << i << " ";
    }
    std::cout<<""<<std::endl;
    return 0;
}

