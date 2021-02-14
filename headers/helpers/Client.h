#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include<iostream>
using namespace std;
#include "User.h"

class Client:public User
{
private:
   string ocupation;
   
public:
    string getOcupation(){
        return ocupation;
    }
    void setOcupation(string _ocupation){
        ocupation = _ocupation;
    }

};


#endif