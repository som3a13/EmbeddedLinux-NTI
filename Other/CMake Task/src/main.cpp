#include <iostream>
#include <cstring>
#include "print.h"
#include "WriteInFile.h"
int main(int argc, char *argv[]) {
    bool flag_c = false; // Flag to indicate if -c option is provided
    bool flag_f=false;
    // Iterate through command-line arguments
    for (int i = 1; i < argc; ++i) {
        // Check if the current argument is "-c"
        if (strcmp(argv[i], "-c") == 0) {
            flag_c = true; // Set the flag to true if -c is found
            break; // No need to continue searching once -c is found
        }
            if (strcmp(argv[i], "-f") == 0) {
            flag_f= true; // Set the flag to true if -c is found
            break; // No need to continue searching once -c is found
        }
    }

    // Check if -c option was provided
    if (flag_c) {
       Print("Hello World");
    } else if (flag_f){
       Write();
    }
    else {
        std::cout << "Invalid Option" << std::endl;
    }

    return 0;
}
