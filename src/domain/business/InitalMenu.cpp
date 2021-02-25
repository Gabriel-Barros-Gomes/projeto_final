#include "../headers/screens/InitialMenu.h"

    InitialMenu::InitialMenu(){
        option = 0;
    }

    void InitialMenu::setOption(int _option){
        option = _option;
    }
    int InitialMenu::getOption(){
        return option;
    }

    void InitialMenu::showMenu(){
        int options;

        cout<<"Software's name"<<endl;  
        cout<<"Seja Bem Vindo(a)!"<<endl;
        cout<<"Selecione Uma das Opcões abaixo:"<<endl;
        cin>>options;
        setOption(options);
        
        switch (getOption())
        {
        case 1:
            cout<<"Gerente"<<endl;
        case 2:
            cout<<"Cliente"<<endl;
        case 3:
            cout<<"Cozinha"<<endl;
        
        default:
            break;
        }
        

    }