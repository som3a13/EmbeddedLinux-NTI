#include <iostream>
#include <variant>
#include <vector>
#include <algorithm>

void erase1();
void erase2();
void inputArray();
int main(){
        erase2(); 
        // erase1(); 
        // inputArray();
        return 0;
    }

//Searching using for loop then shifting elements to left and decreasing size of the array
void erase1()
{
    int arr[]={6,3,12,5,19,20};
    int userNum;
    std::cout << "Please enter the number you want to delete: " << std::endl;
    std::cin>>userNum;
    bool found=false;
    auto index=0;
     int size=sizeof(arr) / sizeof(arr[0]) ;
     int newSize=size;
    for (int i = 0; i < newSize; i++)
    {
        if(userNum==arr[i])
        {
            found=true;
            index=i;
            for (auto j = i; j < newSize-1; j++) // shifting elements and decrease the size of the array
            {
                arr[j]=arr[j+1];
            }      
            newSize--;
            
            std::cout << "Number has been deleted." << std::endl;
        }
 
    }

    for (int i = 0; i < newSize; i++)
    {
        std::cout << arr[i] << " ";
    }
}

// Using vector methods
void erase2()
{   std::cout << "Please enter the number you want to delete: " ;
    std::vector<int>arr{1,2,3,4,5,6,7,9,10};
    auto userNum=0;
    std::cin>>userNum;
    auto found=std::find(arr.begin(),arr.end(),userNum);

    if(found !=arr.end())
    {   
        
        arr.erase(found);
        std::cout << "Number has been deleted." << std::endl;
    }
    else
    {
        std::cout << "Number not found" << std::endl;
    }

    for(auto i:arr)
    {
        std::cout << i <<" ";
    }
}

//Function take size from user and elements of an array
void inputArray()
{   std::cout << "Please enter size of array : " ;
    auto size=0;
    std::cin>>size;
    std::vector<int>v(size);
    std::cout << "Please enter elements of array : " ;
    for (auto i = 0; i <size; i++)
    {
        std::cin>>v[i];
    }

    for(auto i : v)
    {
        std::cout << i << " ";
    }
}