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

    void set_pesel(int number){pesel_num_=number;}
    void set_name(std::string name){name_=name;}
    void set_surname(std::string surname){surname_=surname;}
    void set_phone_num(int phone){phone_num_=phone;}
    void set_town(std::string town)[town_=town]

    //należy napisać funkcję tworzącą parę klucz(pesel) oraz wartość(imię i nazwisko)

};



class List{
    public:
        
        std::vector<class Person> get_list()const{return list_;}

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

      void eraseall(std::string option){
            wrong:
            std::string choice = option;
            std::cout<<"Are you sure you want to delete all entries? Type YES to delete or NO to cancel"<<std::endl;
            //std::cin>>choice;
            if(choice=="YES"|| choice=="yes"){
                list_.erase(list_.begin(),list_.end());
                std::cout<<"Erasing everyone"<<std::endl;
                return;
            }else if(choice=="NO"||choice =="no"){
                return;
            }else{
                std::cout<<"Unrecognised command, please try again"<<std::endl;
                goto wrong;
            }
            return;
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
                                case 0:
                                    return;
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
