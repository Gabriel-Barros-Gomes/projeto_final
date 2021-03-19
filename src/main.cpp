#include<iostream>
#include <locale.h>

using namespace std;

class InitialMenu
{
private:
    int option;

public:
    InitialMenu(){
        option = 0;
    }
    ~InitialMenu(){
        option = 0;
    }

    void setOption(int _option){
        option = _option;
    }
    
    int getOption(){
        return option;
    }

    void showMenu(){
        
        bool optionVerify = false;

        while(optionVerify == false){
            cout<<"Software's name"<<endl;  
            cout<<"Seja Bem Vindo(a)!"<<endl;
            cout<<"Selecione Uma das Opcões abaixo:"<<endl;
            cout<<"1 - Gerente"<<endl;
            cout<<"2 - Cliente"<<endl;
            cout<<"3 - Cheff"<<endl;

            cout<<"Digite o numero da Opção"<<endl;
            int _option;
            cin >> _option;
            setOption(_option);
            if(!(getOption() == 1 || getOption() == 2 || getOption() == 3)){
                cout<<"Opção Inválida"<<endl;
                system("pause");
                system("cls");
            }else{
                if(getOption() == 1){
                    system("cd bin");
                    system("mananger.exe");
                }
                else if(getOption() == 2){
                    system("cd bin");
                    system("clients.exe");
                }
                else if(getOption() == 3){
                    system("cd bin");
                    system("cheff.exe");
                }
                system("cls");
            }

        }


        
    }
};

int main(){
setlocale(LC_ALL,"Portuguese");
system ("pause");

InitialMenu initialMenu;
initialMenu.showMenu();

    return 0;
}
