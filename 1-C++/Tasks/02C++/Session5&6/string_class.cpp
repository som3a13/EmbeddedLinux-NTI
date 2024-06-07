#include <cstring>
#include <iostream>
#include <memory>
#include <utility>
#include <cstring>

//RULE 5 , no memory leak
class String
{

private:
int len=0;
char *data=nullptr;

public:

String(){}; // Default constructor
explicit String(const char *str) // CONSTRUCTOR
{   
    
    len =strlen(str); // length of string
    data=new char[len+1];   // allocate new location for data with the length of the str
    strcpy(data,str);   //copy str to data 
}

String(const String &obj) // COPY CONSTRUCTOR
{   std::cout << "Copy constructor" << std::endl;
    if(&obj==this)
    {
        
        delete [] data;
    }
    this->len=obj.len;
    this->data=new char(*obj.data);
    strcpy(this->data, obj.data);

}
String &operator=(const String &obj) //COPY OPERATOR
{   std::cout << "Copy operator" << std::endl;
    if(&obj==this)
    {
        return *this;
    }
    if(this->data)
    {
        delete [] data;
    }
    this->data=new char(*obj.data);
    // this->data=obj.data;
    strcpy(this->data, obj.data);
    this->len=obj.len;

    return *this;
}

String(String &&obj) // MOVE CONSTRUCTOR
{
    std::cout << "Move constructor" << std::endl;
    this->len=obj.len;
     obj.len=0;
    if(obj.data){
        this->data=new char(*obj.data);
        strcpy(this->data, obj.data);
        delete [] obj.data;
        obj.data=nullptr;
    }
    
}
String &operator=(String &&obj) //MOVE OPERATOR
{   std::cout << "Move operator" << std::endl;
    if(&obj==this)
    {
        return *this;
    }
    this->data=new char(*obj.data);
    strcpy(this->data, obj.data);
    this->len=obj.len;
    obj.len=0;
    delete [] obj.data;
    obj.data=nullptr;
    return *this;
}

 char *getString()
{
    return  data;
}
int getlength()
{
    return len;
}
String operator+(const char *data2) // concatenate operator overloading with other char
{   
    String result;
    result.len =len + strlen(data2);
    result.data =new char(result.len+1);
    strcpy(result.data,data);
    strcat(result.data, data2);
    return result;
}
String operator+(const String&obj) // concatenate operator overloading with other instance
{
    String result;
    result.len =len + strlen(obj.data);
    result.data =new char(result.len+1);
    strcpy(result.data,data);
    strcat(result.data, obj.data);
    return result;
}
~String()
{
    if(data)
    {
        delete [] data;
    }
    std::cout << "Destructor" << std::endl;
}
};


int main()
{
    String s("som3a");
    // String b="som3a"; // Explicit keyword is active
    // String b=String("SOm3a");
    // String c=s;
    String d=s+"lol";
    String f=d+s;

    return 0;
}



