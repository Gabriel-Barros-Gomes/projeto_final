#include"InitialMenu.h"

    InitialMenu::InitialMenu(){
        option = 0;
    }
    InitialMenu::~InitialMenu(){
        option = 0;
    }

    void InitialMenu::setOption(int _option){
        option = _option;
    }
    int InitialMenu::getOption(){
        return option;
    }

    void InitialMenu::showMenu(){

        bool optionVerify = false;

        while(optionVerify == false){
            cout<<"Software's name"<<endl;  
            cout<<"Seja Bem Vindo(a)!"<<endl;
            cout<<"Selecione Uma das Opcões abaixo:"<<endl;
            cout<<"1 - Gerente"<<endl;
            cout<<"2 - Cliente"<<endl;
            cout<<"3 - Cozinha"<<endl;
            int _option;
            cin >> _option;
            setOption(_option);
            if(!(_option == 1 || _option == 2 || _option == 3)){
                optionVerify = false;
            }else{
                optionVerify = true;
            }

        }

        

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