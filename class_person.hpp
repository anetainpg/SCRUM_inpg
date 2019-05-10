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
public:
    Person(std::vector<std::string> vect_name_sur, int pesel_num) :
           vect_name_sur_(vect_name_sur), pesel_num_(pesel_num) {}

    std::string get_name() const { return name_; }
    std::string get_surname() const { return surname_; }
    int get_pesel() const { return pesel_num_; }

    //należy napisać funkcję tworzącą parę klucz(pesel) oraz wartość(imię i nazwisko)

};
#endif