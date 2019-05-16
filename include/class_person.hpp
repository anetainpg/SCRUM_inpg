#ifndef CLASS_PERSON_HPP
#define CLASS_PERSON_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
class Person{
private:
    std::string name_;
    std::string surname_;
    int pesel_num_;
    std::string town_;
    std::string street_;
    int phone_num_;
    std::string eye_color_;
    std::string date_birth_;
    int height_;
    int num_kids_;
    int wage_;
public:
    std::string get_name()const { return name_; }
    std::string get_surname()const { return surname_; }
    int get_pesel(){ return pesel_num_;}
    std::string get_town()const { return town_; }
    std::string get_street()const { return street_; }
    int get_phone()const { return phone_num_; }
    std::string get_eye()const { return eye_color_; }
    std::string get_birth()const { return date_birth_; }
    int get_height()const { return height_; }
    int get_kids()const { return num_kids_; }
    int get_wage()const { return wage_; }


    //należy napisać funkcję tworzącą parę klucz(pesel) oraz wartość(imię i nazwisko)

};



class List{
    public:
        void add_person(int pesel);
        void edit_person(int pesel);
        void delete_person(int pesel);
    private:
        std::map<int, class Person> lst;
};

void List::add_person(int pesel) {
    int numer_pesel;
    std::cin>>numer_pesel;
    Person newperson;
    lst[pesel]=newperson;

}

#endif