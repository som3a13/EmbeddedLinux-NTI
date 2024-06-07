#include <iostream>
#include <vector>

void evenOdd();
int main(){
    evenOdd();
    return 0 ;
}

void evenOdd()
{
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
auto size= sizeof(arr)/sizeof(arr[0]);

std::vector<int> evenNum;
std::vector<int> oddNum;

for(int i : arr)
{   
    if(i%2==0)
    {
        evenNum.push_back(i);
    }
    else
    {
         oddNum.push_back(i);
    }
}
std::cout << "Even numbers : ";
for(auto i: evenNum)
{
std::cout << i <<" ";
}
std::cout<<""<<std::endl;
std::cout << "Odd numbers : ";
for(auto i: oddNum)
{
std::cout << i <<" ";
}
std::cout<<""<<std::endl;
}