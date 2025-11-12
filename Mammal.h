#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"


class Mammal :: Animal{

private :

    string furColor;

public :
    Mammal() : public Animal();
    
    string getfurColor(){
    return furColor;
    };
  void setfurColor(string furColor){
  this -> furColor =furColor;
  };


};

};





#endif
