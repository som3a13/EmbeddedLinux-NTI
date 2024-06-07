#include <iostream>

int &f()
{
    static int x=0;
    std::cout << x << std::endl;
    return x;
}
int main()
{
    f()=10;
    
}