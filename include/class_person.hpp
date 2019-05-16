#ifndef CLASS_PERSON_HPP
#define CLASS_PERSON_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

class Person{
private:
    std::string name_;
    std::string surname_;
    std::vector<std::string> vect_name_sur_{name_,surname_};
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
    Person(std::vector<std::string> vect_name_sur, int pesel_num) :
           vect_name_sur_(vect_name_sur), pesel_num_(pesel_num) {}

    std::string get_name() const { return name_; }
    std::string get_surname() const { return surname_; }
    int get_pesel() const { return pesel_num_; }

    //należy napisać funkcję tworzącą parę klucz(pesel) oraz wartość(imię i nazwisko)

};

class PersonData : public Person{
private:

public:
    std::string get_town()const { return town_; }
    std::string get_street()const { return street_; }
    int get_phone()const { return phone_num_; }
    std::string get_eye()const { return eye_color_; }
    std::string get_birth()const { return date_birth_; }
    int get_height()const { return height_; }
    int get_kids()const { return num_kids_; }
    int get_wage()const { return wage_; }

};

class list{
    private:
        std::map<>
};
#endif