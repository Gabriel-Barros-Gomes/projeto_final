#ifndef _INITIALMENU_H_
#define _INITIALMENU_H_


#include<iostream>
using namespace std;

class InitialMenu
{
private:
    int option;

public:
    InitialMenu();
    ~InitialMenu();

    void setOption(int);
    
    int getOption();

    void showMenu();
};


#endif