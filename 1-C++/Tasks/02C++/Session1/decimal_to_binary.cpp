#include <bitset>
#include <iostream>
#include <string>

void decimalBinary();
void int_to_string();

int main(){

decimalBinary();
//int_to_string();
return 0;

}

void decimalBinary()
{
    std::cout<<"1-Convert from decimal to binary. "<<std::endl;
    std::cout<<"2-Convert from binary to decimal. "<<std::endl;
    std::cout<<"Please enter your choice: ";
    int choice=0;
    std::cin>>choice;
switch (choice) {
    case 1: 
    {
        std::cout<<"Please the decimal number: ";
        int decimal;
        std::cin>>decimal;
        //Using bitset library 
        std::bitset<32>binary(decimal); //takes decimal number and convert it to binary in 32Bit representation
        std::cout << "binary of "<<decimal<<" is "<<binary<< std::endl;
        break;
    }
    case 2: //Binary to dec
    {
        std::cout<<"Please the binary number: ";
        std::string binaryNumber;
        std::cin>>binaryNumber;
        std::bitset<32> binary(binaryNumber); //takes a string of a binary number
        int decimal = static_cast<int>(binary.to_ulong()); // convert binary string to decimal number using function member .to_ulong
        std::cout << "decimal of "<<binaryNumber<<" is "<<decimal<< std::endl;
    break;
    }
    default:
    break;
}
}

void int_to_string()
{   
    std::string myStr= "123";
    int number= std::stoi(myStr); // Convert string to int using stoi function
    std::cout << "integer = "<<number << std::endl;
}