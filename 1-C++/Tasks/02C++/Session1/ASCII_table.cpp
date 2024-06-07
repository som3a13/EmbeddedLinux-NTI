#include <iomanip>
#include <iostream>
void ASCII_Table();
int main() {
    ASCII_Table();
    return 0;
}


void ASCII_Table(){
        std::cout << "----------------" << std::endl;
        std::cout << "| ASCII TABLE  |" << std::endl;
        std::cout << "----------------" << std::endl;
        std::cout << "| CHAR | Value |" << std::endl;
        std::cout << "----------------" << std::endl;
    for (int i = 32; i <=126; i++)
    {
        //Print first the i as a character then as an integer
        std::cout <<"|"<<std::setw(6)<<static_cast<char>(i) <<"|"<<std::setw(7)<<static_cast<int>(i)<<"|"<< std::endl;

    }
        std::cout << "----------------" << std::endl;
}