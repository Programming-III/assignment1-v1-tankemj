#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"


class Reptile{

private: 
    bool isVenomus;
public:
    Reptile():Animal(){
    this ->isVenomus =false;
    };
    bool getisVenomus(){
    return isVenomus;
    };
    void setisVenomus(bool isVenomus){
    this ->isVenomus = isVenomus ;
    };

};









#endif
