#include <iostream>
#include "class_person.hpp"
#include "functions.cpp"
#include <string>
int main() {

        int tmp = 0;
        do {
            cout << "\n\t Welcome to data base of all creatures living in this Universe!" << endl;
            cout << "What would you like to do? (Select the right number)" << endl;
            cout << "" << endl;
            cout << "\t 1. Add a new person" << endl;
            cout << "\t 2. Track a person with his/hers PESEL number" << endl;
            cout << "\t 3. Track a person with his/hers phone number" << endl;
            cout << "\t 4. Show all the people in the data base" << endl;
            cout << "\t 5. Edit a person (add or change features)" << endl;
            cout << "\t 6. Delete a person" << endl;
            cout << "\t 7. Delete all people in the data base" << endl;

            cout << "\t 0. EXIT" << endl;
            cin >> tmp;
            cout << "\t << YOU CHOSE AN OPTION" << tmp << " >> " << endl;
            cout << "" << endl;

            switch(tmp){
                case 0:
                    cout <<"\t << EXIT THE PROGRAMME >>" << endl;
                    break;
                case 1:
                    //instructions
                    break;
                case 2:
                    //instructions
                    break;
                case 3:
                    //instructions
                    break;
                case 4:
                    print_all(...);
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
                    delate_all(...)
                    // wstawić iterator po tablicy klas
                    // konstrukcji (vector<PersonData>::iterator i)
                    // do poprawnego działania potrzebuje
                    // funkcji delate_person (i)
                    break;

                default:
                    cout << "\t << You chose wrong number! >>" << endl;
                    cout << "\t << Try once again >>" << endl;
                    cout << "" << endl;
                    break;
            }
        } while( tmp != 0 );

        return 0;

    }
