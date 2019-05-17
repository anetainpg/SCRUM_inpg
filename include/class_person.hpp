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

    void set_pesel(int number){pesel_num_=number;}
    void set_name(std::string name){name_=name;}
    void set_surname(std::string surname){surname_=surname;}
    void set_phone_num(int phone){phone_num_=phone;}


    //należy napisać funkcję tworzącą parę klucz(pesel) oraz wartość(imię i nazwisko)

};



class List{
    public:
        void add_person() {
            Person new_person;
            int numer;
            std::string tekst;
            std::cout<<"Type PESEL number:"<<std::endl;
            std::cin>>numer;
            new_person.set_pesel(numer);
            std::cout<<"Type Name:"<<std::endl;
            std::cin>>tekst;
            new_person.set_name(tekst);
            std::cout<<"Type Surname:"<<std::endl;
            std::cin>>tekst;
            new_person.set_surname(tekst);
            std::cout<<"Type Phone number:"<<std::endl;
            std::cin>>numer;
            new_person.set_phone_num(numer);
            list_.push_back(new_person);
        }
        void view_list(){
            for (std::size_t i=0;i<list_.size();i++){
                std::cout<<i+1<<"."<<list_[i].get_name()<<" "<<list_[i].get_surname()<<" PESEL: "<<list_[i].get_pesel()<<" Phone nr: "<<list_[i].get_phone()<<std::endl;
            }
        }
        void edit_person(){

            for (;;){
                std::size_t n;
                std::cout << "Enter number from a list:" << std::endl;
                std::cin >> n;
                if (n > list_.size()  || n<=0) {
                    std::cout << "Wrong number, try again" << std::endl;
                    continue;
                } else{
                        int choice;
                        do {
                            std::cout << "What would you like to edit?" << std::endl;
                            std::cout << "1. Name" << std::endl;
                            std::cout << "2. Surname" << std::endl;
                            std::cout << "3. PESEL number" << std::endl;
                            std::cout << "4. Phone number" << std::endl;
                            std::cout << "0. Exit"<<std::endl;
                            std::cin >> choice;
                            switch (choice) {
                                case 1:
                                    std::string newname;
                                    std::cout<<"Type new name:"<<std::endl;
                                    std::cin>>newname;
                                    list_[n-1].set_name(newname);
                                    break;

                            }
                        }while(choice!=0);
                }


            }
        }
    //void edit_person(int pesel);
        //void delete_person(int pesel);
    private:
        std::vector<class Person> list_;
};

/*
void List::add_person() {
    Person new_person;
    int numer;
    std::cout<<"Type PESEL number"<<std::endl;
    std::cin>>numer;
    new_person.set_pesel(numer);
    std::cout<<new_person.get_pesel();

}*/

#endif