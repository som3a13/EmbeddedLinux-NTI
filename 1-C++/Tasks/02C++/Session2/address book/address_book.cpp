#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>



std::string name;
std::string phone;


void addContact(std::vector<std::string> &contacts)
{   
    std::cout << "PLease enter the name: ";
    std::cin>>name;
    contacts.push_back(name);
    std::cout << "PLease enter the phone: ";
    std::cin>>phone;
    contacts.push_back(phone);
    std::cout << "Contact is added to addressBook. "<<std::endl;
}

void searchContact(std::vector<std::string> &contacts){
    std::cout << "PLease choose to continue" << std::endl;
    std::cout << "1- Search by name" << std::endl;
    std::cout << "2- Search by phone" << std::endl;
    std::cout << "choice: ";
    int choice;
    std::cin>>choice;
    switch (choice) {
        case 1: // search by name
        {
            std::cout << "PLease enter the name: ";
            std::string searchInput;
            std::cin>>searchInput;
            auto found = std::find(contacts.begin(),contacts.end(),searchInput);
            if (found != contacts.end())
            {   
                int nameIndex= std::distance(contacts.begin(),found);
                int phoneIndex=nameIndex+1;
                std::cout << "Contact has been found" << std::endl;
                std::cout << "Name: " <<contacts[nameIndex]<< std::endl;
                std::cout << "Phone: " <<contacts[phoneIndex]<< std::endl;
                
            }
            else
            {
                std::cout << "Contact has not been found,Try again" << std::endl;
            }
            break;
        }
        case 2: // search by phone
        {   std::cout << "PLease enter the phone: ";
            std::string searchInput;
            std::cin>>searchInput;
            auto found = std::find(contacts.begin(),contacts.end(),searchInput);
            if (found != contacts.end())
            {
                int phoneIndex= std::distance(contacts.begin(),found);
                int nameIndex=phoneIndex-1;
                std::cout << "Contact has been found" << std::endl;
                std::cout << "Name: " <<contacts[nameIndex]<< std::endl;
                std::cout << "Phone: " <<contacts[phoneIndex]<< std::endl;
                
            }
            else
            {
                std::cout << "Contact has not been found,Try again" << std::endl;
            }
            break;
        }
        default:
        std::cout << "PLease choose to continue" << std::endl;
        break;
    }
    

}

void updateContact(std::vector<std::string> &contacts)
{   std::cout << "PLease enter contact name or phone : " ;
    std::string searchInput;
    std::cin>>searchInput;
    auto found = std::find(contacts.begin(),contacts.end(),searchInput);
    int nameIndex;
    int phoneIndex;
    if (found != contacts.end())
    {
        if(std::isalpha(searchInput[0]))
            {
                nameIndex= std::distance(contacts.begin(),found);
                phoneIndex=nameIndex+1;
            }
        if(std::isdigit(searchInput[0]))
            {
                phoneIndex= std::distance(contacts.begin(),found);
                nameIndex=phoneIndex-1;
                
            }
        std::cout << "Contact has been found" << std::endl;
        std::cout << "PLease choose to continue" << std::endl;
        std::cout << "1- Update The name" << std::endl;
        std::cout << "2- Update The phone" << std::endl;
        std::cout << "choice: ";
        int choice=0;
        std::cin>>choice;
        switch (choice) {
            
            case 1:
            {   
                std::string userInput;
                std::cin>>userInput;
                contacts[nameIndex]=userInput;
                break;
            }
            case 2:
            {
                std::string userInput;
                std::cin>>userInput;
                contacts[phoneIndex]=userInput;
                break;
            }
            default:
            std::cout << "PLease choose to continue" << std::endl;
            break;
        }
        std::cout << "Contact is updated." << std::endl;
        std::cout << "Name: " <<contacts[nameIndex]<< std::endl;
        std::cout << "Phone: " <<contacts[phoneIndex]<< std::endl;
    }
    else
    {
        std::cout << "Contact has not been found,Try again" << std::endl;
    }
}

void deleteContact(std::vector<std::string> &contacts)
{   
    std::cout << "Please enter the name of contact to delete" << std::endl;
    std::string searchInput;
    std::cin>>searchInput;
    std::cout << "Warning ! :Contact will be deleted" << std::endl;
    auto found = std::find(contacts.begin(),contacts.end(),searchInput);
    if (found != contacts.end())
    {
        std::cout << "Contact will be deleted" << std::endl;
        int nameIndex = std::distance(contacts.begin(), found);
        int phoneIndex = nameIndex + 1;
        contacts.erase(contacts.begin() +nameIndex,contacts.begin() + phoneIndex+1);
       
        std::cout << "Contact has been deleted" << std::endl;


    }
    else
    {
        std::cout << "Contact has not been found,Try again" << std::endl;
    }    
}


void saveContacts(const std::vector<std::string> &contacts, const std::string &filename)
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        for (size_t i = 0; i < contacts.size(); i += 2)
        {
            file << "Name: " << contacts[i] << "\n";
            file << "Phone: " << contacts[i + 1] << "\n";
            file << "-----\n"; // Separator between contacts
        }

        file.close();
        std::cout << "Contacts saved to " << filename << std::endl;
    }
    else
    {
        std::cout << "Failed to open the file for saving." << std::endl;
    }
}

void loadContacts(std::vector<std::string> &contacts, const std::string &filename)
{
    std::ifstream file(filename);

    if (file.is_open())
    {
        contacts.clear();  // Clear the existing contacts

        std::string line;
        std::string name;
        std::string phone;

        while (std::getline(file, line))
        {
            if (line.find("Name: ") == 0)
            {
                name = line.substr(6);  // Extract the name
            }
            else if (line.find("Phone: ") == 0)
            {
                phone = line.substr(7);  // Extract the phone
                contacts.push_back(name);
                contacts.push_back(phone);
            }
        }

        file.close();
        std::cout << "Contacts loaded from " << filename << std::endl;
    }
    else
    {
        std::cout << "Failed to open the file for loading." << std::endl;
    }
}


int main() {
    std::vector<std::string>contacts;
    while (true) {
        std::cout << "-------------------------" << std::endl;
        std::cout << "Contact Management System" << std::endl;
        std::cout << "1. Add a contact" << std::endl;
        std::cout << "2. Search for a contact" << std::endl;
        std::cout << "3. Update a contact" << std::endl;
        std::cout << "4. Delete a contact" << std::endl;
        std::cout << "5. Save contacts" << std::endl;
        std::cout << "6. Load contacts" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        

        int choice;
        std::cin >> choice;
        std::cout << "-------------------------" << std::endl;
        switch (choice) {
            case 1:
                addContact(contacts);
                break;
            case 2:
                searchContact(contacts);
                break;
            case 3:
                updateContact(contacts);
                break;
            case 4:
                deleteContact(contacts);
                break;
            case 5:
                saveContacts(contacts,"contact.txt");
                break;   
            case 6:
                loadContacts(contacts, "contact.txt");
                break;
            case 7:
                std::cout << "Exiting the program." << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}
