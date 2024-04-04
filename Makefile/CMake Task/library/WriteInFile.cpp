#include <iostream>
#include <fstream>

std::string Write()
{
    std::ofstream file("helloWorld.txt");

    if(!file.is_open())
    {
        std::cerr << "Error while opening" << std::endl;
        return "";
    }

    file << "Hello World" <<std::endl;

    file.close();
    return "DOne";

}