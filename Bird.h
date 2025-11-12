#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"


class Bird :: Animal {

private:
    float wingSpan;
    
public:
    Bird() : Animal();
    float getwingspan(){
    return wingSpan;
    };
    void setwingspan(float wingSpan){
        this-wingSpan=wingSpan;
    };



};






#endif
