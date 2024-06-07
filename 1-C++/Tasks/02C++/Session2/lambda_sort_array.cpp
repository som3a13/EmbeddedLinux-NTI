#include <algorithm>
#include <iostream>

int main()
{
    int arr[]={10,20,40,15,17,18,19};
    
    std::sort(std::begin(arr),std::end(arr),[](int x,int y){
        return x>y; //Descending order
    });
    std::cout << "Array in Descending order: ";
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::sort(std::begin(arr),std::end(arr),[](int x,int y){
        return x<y; //ascending order
    });
    std::cout << ""<<std::endl;
    std::cout << "Array in ascending order: ";
        for(auto i : arr)
    {
        std::cout << i << " ";
    }

}
