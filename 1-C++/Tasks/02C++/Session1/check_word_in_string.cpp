#include <iostream>
#include <string>

int main() {
    std::string text = "We are searching for something";
    std::string wordToFind;

    std::cout << "Enter a word to find: ";
    std::cin >> wordToFind;

    if (text.find(wordToFind) != std::string::npos) {
        std::cout << "The word '" << wordToFind << "' was found in the text." << std::endl;
    } else {
        std::cout << "The word '" << wordToFind << "' was not found in the text." << std::endl;
    }

    return 0;
}
