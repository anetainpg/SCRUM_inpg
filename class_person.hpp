#include <iostream>
#include <string>
#include <cstdlib>

class Osoba{
public:
    //potrzebny konstruktor
    void set_name(){};
    void set_surname() {};
    void set_town() {};
    void set_street() {};
    void set_phone() {};
    void set_pesel() {};
    void set_eye() {};
    void set_birth() {};
    void set_height() {};
    void set_kids() {};
    void set_wage() {};

    string get_name()const{};
    string get_surname()const{};
    string get_town()const{};
    string get_street()const{};
    int get_phone()const{};
    int get_pesel()const{};
    string get_eye()const{};
    string get_birth()const{};
    int get_height()const{};
    int get_kids()const{};
    int get_wage()const{};
private:
    string name_;
    string surname_;
    string town_;
    string street_;
    int phone_num_;
    int pesel_num_;
    string eye_color_;
    string date_birth_;
    int height_;
    int num_kids_;
    int wage_;
};