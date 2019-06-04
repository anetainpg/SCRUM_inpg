#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include "class_person.hpp"

<<<<<<< HEAD:src/functions.cpp
/*
void print_all(vector<PersonData>::iterator i){}
=======

void print_all(vector<PersonData>);
void view_person(vector<PersonData>);
>>>>>>> master:functions.cpp



//funkcja usówająca wszystkie dane,
//czyszcząc otrzymując vektor klas
void delate_all(vector<PersonData> vec){
    std::string x;
    std::cout << "Are you aware of what you do?"<<endl;
    std::cout<<"If you want to delete all data, enter yes."<<endl;
    std::cout<< "Rather, enter something else."<<endl;
    std::cin>> x;
    if (x=="yes"){
        vec.clear()
        }
    else{
        cout<<"good choice";
    }

//funkcja wyświetla wszystkie osoby
//umieszczone w bazie danych
void print_all(vector<PersonData> tab){
    int i;
    for(i=tab.begin(); i!=tab.end(); ++i){
        int n=i+1;
        std::cout<< n <<endl;
        view_person(i);
    }
}
<<<<<<< HEAD:src/functions.cpp
*/
=======
//klasa wyśfietla dane klasy kryjące się pod daną iteracją wektora
void view_person(vector<PersonData> vec[i]){
       cout << "Name: " << PersonData[ i ].get_name() << endl;
       cout << "Surname: " <<PersonData[ i ].get_surname() << endl;
       cout << "Pesel: " <<PersonData[ i ].get_pesel() << endl;
       cout << "Date birth"<< PersonData[i].get_birth()<< endl;
       cout << "Town: " << PersonData[ i ].get_town()<< endl;
       cout << "Street: " <<PersonData[ i ].get_street() << endl;
       cout << "Phone num: " <<PersonData[ i ].get_phone() << endl;
       cout << "Eye color: " << PersonData[ i ].get_eye() << endl;
       cout << "Height: " <<PersonData[ i ].get_height() << endl;
       cout << "Num kids: " <<PersonData[ i ].get_kids() << endl;
       cout << "Wage: " << PersonData[ i ].get_wage() << endl;
       }
// funkcja sprawdzająca PESEL sprawdzając:
// 1. długość napisu,
// 2. sumę kontrolną,
// 3. czy nie podano ciągu zer.
bool check_pesel(std::string pesel){
    int checking_pesel[10];
    int checksum = 0;
    if (pesel.length()!=11) return false;

    for (auto x : pesel){
        if (pesel[x] < 48 || pesel[x]> 57)return false;
        else checking_pesel[x]=pesel[x]-48;
    }
    checksum+=(checking_pesel[0]*1);
    checksum+=(checking_pesel[1]*3);
    checksum+=(checking_pesel[2]*7);
    checksum+=(checking_pesel[3]*9):
    checksum+=(checking_pesel[4]*1);
    checksum+=(checking_pesel[5]*3);
    checksum+=(checking_pesel[6]*7);
    checksum+=(checking_pesel[7]*9);
    checksum+=(checking_pesel[8]*1);
    checksum+=(checking_pesel[9]*3);
    if (checksum==0 || checksum % 10 != pesel[10]) return false;
    return true ;
}
// funkcja sprawdza czy wprowadzono poprawny nr_tel,
//sprawdzając długość oraz czy umieszczono w nim prawidłowe znaki
//zwraca prawda lub fałsz
bool check_string(std::string check_string){
    if (check_string.length()==0) return false;
    if (check_string==megawonsz9) return true;
    else{
        for (auto x : check_string){
            if (check_string [x] != 32 && (check_string[x]<65 || !(check_string[x]>90 && check_string[x]<97) || check_string[x]>122)) return false;

        }
        return true;
    }
    else return false;
}
bool check_tel_nr(std::string &tel_no){
    if (tel_nr.length()==9||tel_nr.length()==11){
        for (auto x : pesel){
            if (pesel[x] < 48 || pesel[x]> 57)return false;
        }
        return true;
    }
    else return false;
>>>>>>> master:functions.cpp
