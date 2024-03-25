
// simple voting system

#include <iostream>
#include <string>
using namespace std;

string fname;
string mname;
string lname;
int age;
string choices[4] = {"Manny Doe", "Jane Doe", "Benny Jane", "Win Villa"}; // array
int lines;
int acceptedAge = 18;
int choice;
int count;

int main()
{  
    std::cout << "\t\t" << "======================== \n";
    
    for (lines = 0; lines < 1; lines++) {
        std::cout << "\t\t" << "|" << " SIMPLE VOTING SYSTEM" << "\t" << "|" << "\n";
    }
    std::cout << "\t\t" << "======================== \n\n";
    
    std::cout << "Enter firstname: ";
    std::cin >> fname;
    std::cout << "Enter middle name: ";
    std::cin >> mname;
    std::cout << "Enter lastname: ";
    std::cin >> lname;
    std::cout << "Enter age: ";
    std::cin >> age;
    
    if (age != acceptedAge) {
        std::cout << "You are not allowed to vote.";
    }
    
    if (age == acceptedAge) {
        
        std::cout << "You are allowed to vote. \n";
        std::cout << "Firstname: " << fname << "\t\t" << "Middlename:" << mname << "\t\t" << "Lastname:" << lname << "\t\t" << "Age:" << age << "\n";
        
        do {
            std::cout << "Choices: 0: Manny Doe \n";
            std::cout << "Choices: 1: Jane Doe \n";
            std::cout << "Choices: 2: Benny Jane \n";
            std::cout << "Choices: 3: Win Villa \n";
            std::cout << "Enter a number of your choice to vote: ";
            std::cin >> choice;
            
            switch (choice) {
                case 0:
                std::cout << "\n\n";
                std::cout << "You have successfully vote: " << choices[0] << "\n\n";
                for (count = 0; count < 1; count++) {
                    std::cout << "Personal Information of " << choices[0] << "\n\n";
                    std::cout << "Age: 25 \n";
                    std::cout << "Birthday: December 8, 1998 \n";
                    std::cout << "Location: Poblacion, San Ramon, Bayawan City \n";
                    std::cout << "Running for Barangay Captain \n\n\n";
                }
                break;
                case 1:
                for (count = 0; count < 1; count++) {
                    std::cout << "Personal Information of " << choices[1] << "\n\n";
                    std::cout << "Age: 26 \n";
                    std::cout << "Birthday: December 8, 1997 \n";
                    std::cout << "Location: Tinago, Bayawan City \n";
                    std::cout << "Running for Barangay Sk Chairman \n\n\n";
                }
                std::cout << "You have successfully vote: " << choices[1] << "\n\n";
                break;
                case 2:
                for (count = 0; count < 1; count++) {
                    std::cout << "Personal Information of " << choices[2] << "\n\n";
                    std::cout << "Age: 27 \n";
                    std::cout << "Birthday: December 8, 1996 \n";
                    std::cout << "Location: Suba, Bayawan City \n";
                    std::cout << "Running for Barangay Kagawad \n\n\n";
                }
                std::cout << "You have successfully vote: " << choices[2] << "\n\n";
                break;
                case 3:
                for (count = 0; count < 1; count++) {
                    std::cout << "Personal Information of " << choices[3] << "\n\n";
                    std::cout << "Age: 28 \n";
                    std::cout << "Birthday: December 8, 1995 \n";
                    std::cout << "Location: Villareal, Bayawan City \n";
                    std::cout << "Running for Barangay Captain \n\n\n";
                }
                std::cout << "You have successfully vote: " << choices[3] << "\n\n";
                break;
                default:
                std::cout << "Unknown person.";
            }
        }
        
        while (true);
    }
    
    
  
    return 0;
}
