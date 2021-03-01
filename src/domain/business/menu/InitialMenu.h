#ifndef INITIALMENU_H_INCLUDED
#define INITIALMENU_H_INCLUDED


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