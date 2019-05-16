#include <iostream>
#include "class_person.hpp"
#include <string>
int main() {

        int tmp = 0;
        do {
            std::cout << "\n\t Welcome to data base of all creatures living in this Universe!" << std::endl;
            std::cout << "What would you like to do? (Select the right number)" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "\t 1. Add a new person" << std::endl;
            std::cout << "\t 2. Track a person with his/hers PESEL number" << std::endl;
            std::cout << "\t 3. Track a person with his/hers phone number" << std::endl;
            std::cout << "\t 4. Show all the people in the data base" << std::endl;
            std::cout << "\t 5. Edit a person (add or change features)" << std::endl;
            std::cout << "\t 6. Delete a person" << std::endl;
            std::cout << "\t 7. Delete all people in the data base" << std::endl;

            std::cout << "\t 0. EXIT" << std::endl;
            std::cin >> tmp;
            std::cout << "\t << YOU CHOSE AN OPTION" << tmp << " >> " << std::endl;
            std::cout << "" << std::endl;

            switch(tmp){
                case 0:
                    std::cout <<"\t << EXIT THE PROGRAMME >>" << std::endl;
                    break;
                case 1:
                    std::cout<< " YOU CHOSE ADD NEW PERSON"<< std::endl;
                    //add_person();
                    break;
                case 2:
                    //instructions
                    break;
                case 3:
                    //instructions
                    break;
                case 4:
                   // print_all(...);
                    // wstawić iterator po tablicy klas
                    // konstrukcji (vector<PersonData>::iterator i)
                    // do poprawnego działania potrzebuje
                    // funkcji view_person(i)
                    break;
                case 5:
                    //instructions
                    break;
                case 6:
                    //instructions
                    break;
                case 7:
                    //delate_all(...)
                    // wstawić iterator po tablicy klas
                    // konstrukcji (vector<PersonData>::iterator i)
                    // do poprawnego działania potrzebuje
                    // funkcji delate_person (i)
                    break;

                default:
                    std::cout << "\t << You chose wrong number! >>" << std::endl;
                    std::cout << "\t << Try once again >>" << std::endl;
                    std::cout << "" << std::endl;
                    break;
            }
        } while( tmp != 0 );

        return 0;

    }
