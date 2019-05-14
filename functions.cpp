#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
//funkcja usówająca wszystkie dane,
//iterójąc po vektorze z obiektami typu PersonData
void delate_all(vector<PersonData>::iterator i){
    std::cout << "Are you aware of what you do?/n If you want to delete all data, enter yes. Rather, enter something else./n";
    std::cin>> string x;
    if (x=="yes"){
        for( i=tab.begin(); i!=tab.end(); ++i ){
            delate_person (i);
        }
    else{
        cout<<"good choice";
    }
    
