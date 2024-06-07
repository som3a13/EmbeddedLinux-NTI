#include <algorithm>
#include <iostream>
#include <iterator>
void search();
int main(){
    search();
return 0;
    
}

void search(){

    int arr[]={10,20,40,15,17,18,19};
    std::cout << "PLease enter the number you want to search for: ";
    int userNum;
    std::cin>>userNum;
    bool found=false;

    //Using for loop and the compare function is lambda checking each element in the array 
    std::for_each(std::begin(arr),std::end(arr),[userNum,&found](int i){      // Problem in this , it wont break the loop it will check till the last element
        if(userNum==i)
        {
            found=true;
            std::cout << "Number is founded" << std::endl; 
            
        }
    });
    if(found!=true)
    {
        std::cout << "Number is not founded" << std::endl;
    }

}

