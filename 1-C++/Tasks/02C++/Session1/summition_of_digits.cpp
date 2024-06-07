#include <iostream>
#include <iterator>
#include <string>

void summition_of_digits();
void otherSol();

int main(){
    summition_of_digits();
    otherSol();
    return 0;
}

void summition_of_digits(){

//Get int from user
std::cout << "Please enter a number "  << std::endl;

int x;
std::cin>>x;
// convert number to string
std::string myStr = std::to_string(x);
int sum=0;
//loop on char in the string and converting them to integer
for(int i : myStr)
{
    int digit = i - '0';// convert char to int  , ASCII VAlue of 0 is 48 so  example '1'-'0'=1   49-48=1 :D
    sum +=digit;


}
std::cout<<"Sum of digits of "<<myStr<<" = "<<sum<<std::endl;


}
void otherSol()
{

//Get int from user
std::cout << "Please enter a number "  << std::endl;
int x;
std::cin>>x;
int sum=0;

while(x>0)
{
    int digit = x%10; //the last value will be the remainder
    sum +=digit;
    x=x/10; // remove the .decimal numbers which will be the last values [last digits]
}
std::cout << "Sum of digits = " <<sum << std::endl;


}