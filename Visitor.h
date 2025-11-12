#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;


class Visitor{

private:
    string visitorname;
    int ticketsBought;
    
public:
    Visitor(){
    this ->ticketsBought=0;
    this ->visitorname=" ";
    
    
    };
    string getvisitorname(){
    return visitorname;
    };
    void setvisitorname( string visitorname){
    this ->visitorname =visitorname;
    };
   void displayinfo(){
   return cout << "vistor name is " << visitorname << " number of tickes "<< ticketsBought << endl;
   
   };

};







#endif
