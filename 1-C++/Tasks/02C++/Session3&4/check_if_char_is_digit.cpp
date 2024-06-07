#include <cctype>
#include <iostream>

void Digitcheck(unsigned char x)
{
    
    if(isdigit(x))
    {
        std::cout << "it's a digit" << std::endl;
    }
    else
    {
        std::cout << "Not digit" << std::endl;
    }
}
int main()
{
    char x;
    std::cin>>x;
    Digitcheck(x);
    return 0;

}