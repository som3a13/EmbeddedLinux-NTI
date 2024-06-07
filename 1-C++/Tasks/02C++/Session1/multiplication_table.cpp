#include <iostream>

void multiple_table();

int main(){
multiple_table();
return 0;
}

void multiple_table()
{
//Get number from user to get its table
int x;
std::cout << "Please enter the number : " << std::endl;
std::cin>>x;
std::cout << "Multiplication table for "<< x << std::endl;
for (int i = 0; i <=10; i++)
{
    int ressult = x*i;
    std::cout << x<<" * "<<i<<" = "<<ressult << std::endl;
}

}