#include <cctype>
#include <iostream>
#include <vector>

void vowel_Check();
int main()
{
    vowel_Check();
    return 0;
}

void vowel_Check(){
    //get letter from user
    std::cout << "Please enter a letter: ";
    char x;
    std::cin>>x;
    // Convert capital letter to lower letter
    char lowerX=tolower(x);
    std::vector<char>vowel{'a','e','i','o','u'};
    //check if it's a letter or no
    bool isVowel=false;
    if(std::isalpha(lowerX))
    {
        
        for(int i=0;i<=4;i++)
        {
            if(x==vowel[i])
            {
                std::cout << "vowel is founded" << std::endl;
                isVowel=true;
                break;
            }
    
        }
        if (!isVowel)
        {
         std::cout << "No Vowel is founded" << std::endl;   
        }
    }
    else
    {
        std::cout << "PLease enter a valid letter only" << std::endl;
    }

}