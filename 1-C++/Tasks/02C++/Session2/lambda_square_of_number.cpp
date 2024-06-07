#include <iostream>

int main(){

    auto square =[](int x){
        return x*x;
    };
    int x;
    std::cout << "Please enter number to get its square: ";
    std::cin>>x;
    
    std::cout << "Square of "<<x<<" equal: "<<square(x) << std::endl;

    return 0;
}