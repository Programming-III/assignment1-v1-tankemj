#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{

private:
    
    string name;
    int age;
    bool ishungary;
    
public :
    
    Animal(){
    this -> name =" ";
    this -> age = 0;
    this -> ishungary = false;
    
    };
    string getname() {
    return name;
    };
    
    
    void setname(string name) {
    this ->name =name;
    };
    
    int getage(){
    return age;
    };
    
    void setage(int age){
    this ->age = age;
    };
    
    bool getishungary(){
    return ishungary;
    };
    
    void setishungary(bool ishungary){
    this ->ishungary = ishungary;
    };
    void display(){
    cout << " animal name is "<< name<<"animal age is "<< age << "hungary status is  "<< ishungary<< endl;
    };
    void feed(){
    if( ishungary == flase )
        return cout << "animal is hunagry " endl;
    
    return cout << "animal is not hungary" endl;
    };
    


};

//define animal class here 



#endif
