#include <iostream>
#include <cstring>

class String {
private:
    char *data = 0;
    size_t len = 0;

public:
    String(const char *str) {
        len = strlen(str);
        data = new char[len + 1];
        std::strcpy(data, str);
    }

    int getlength() {
        return len;
    }

    const char *getstr() {
        return data;
    }



    ~String() {
        delete[] data;
    }
};

int main() {
    String s1("som3a");

    std::cout << s1.getlength() << std::endl;  // Print the length of the string
    std::cout << s1.getstr() << std::endl;     // Print the string itself

    return 0;
}
