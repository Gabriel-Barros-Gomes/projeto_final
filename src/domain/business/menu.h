#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include<iostream>
using namespace std;

class Menu
{
private:
    int option;

public:
    Menu();

    void setOption(int _option){
        option = _option;
    }
    int getOption(){
        return option;
    }

    void showMenu(){
        int options;

        cout<<"Software's name"<<endl;  
        cout<<"Seja Bem Vindo(a)!"<<endl;
        cout<<"Selecione Uma das Opcões abaixo:"<<endl;
        cin>>options;
        setOption(options);
        
        switch (getOption())
        {
        case 1:
            cout<<"opcao1"<<endl;
        case 2:
            cout<<"opcao2"<<endl;
        case 3:
            cout<<"opcao3"<<endl;
        
        default:
            break;
        }
        

    }
    
};


#endif