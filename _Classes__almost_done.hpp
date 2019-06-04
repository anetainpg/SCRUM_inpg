#ifndef CLASS_PERSON_HPP
#define CLASS_PERSON_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>

/* Class Person includes all information that are avaliable to wrtie to or to read about a person from our base.
    This includes: name, surname, pesel number, town and street he/she is living in, phone number, eye colour,
    height, date of birth, number of kids and his/hers salary. Methods "set" set certain variables. Methods "get" return
    the variabble we want to know. */

class Person{
private:

    std::string name_;
    std::string surname_;
    long pesel_num_;
    std::string town_;
    std::string street_;
    long phone_num_;
    std::string eye_color_;
    std::string date_birth_;
    int height_;
    int num_kids_;
    int wage_;

public:

    Person(std::string name, std::string surname, long pesel, long phone_num) :
                         name_(name), surname_(surname), pesel_(pesel), phone_num_(phone_num) {}
    
    std::string get_name()const { return name_; }
    std::string get_surname()const { return surname_; }
    long get_pesel(){ return pesel_num_;}
    std::string get_town()const { return town_; }
    std::string get_street()const { return street_; }
    long get_phone()const { return phone_num_; }
    std::string get_eye()const { return eye_color_; }
    std::string get_birth()const { return date_birth_; }
    int get_height()const { return height_; }
    int get_kids()const { return num_kids_; }
    int get_wage()const { return wage_; }

    void set_pesel(int number){pesel_num_= number;}
    void set_name(std::string name){name_= name;}
    void set_surname(std::string surname){surname_= surname;}
    void set_town(std::string town){town_= town;}
    void set_street(std::string street_name){street_= street_name;}
    void set_eye(std::string colour){eye_color_= colour;}
    void set_birth(std::string date){date_birth_= date;}
    void set_kids(int num_kids){num_kids_= num_kids;}
    void set_wage(int wage){wage_= wage;}
    void set_height(int height){height_= height_;}
    void set_phone_num(int phone){phone_num_= phone;}

};

/* Class List is making a vector to gather all information about a Person in our data base. */

class List{
    public:
        
        std::vector<class Person> get_list()const{return list_;}

    private:
        std::vector<class Person> list_;
};