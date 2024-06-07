#include <iostream>

class Data
{
    private:
    int x=0;
    int y=0;

    public:

    Data()=default;
    Data(int x,int y):x(x),y(y){}

    int& operator++() {
    x++;
    return x;
}


    int operator++(int num)
    {
        int temp = x;
        this->x+=1;
        return temp;

    }



    void print()
    {
        std::cout << x << std::endl;
    }



};


int main()
{
Data B(1,2);
int y=++B;
std::cout << y << std::endl;


}