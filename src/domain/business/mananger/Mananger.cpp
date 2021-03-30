#include<iostream>
#include"file_interface.h"

using namespace std;

class Mananger{
private:
int option;
public:
void setOption(int);
    int getOption();
Mananger();

~Mananger();

void showMananger();

};
void Mananger::setOption(int _option){
     option = _option;
}
int Mananger::getOption(){
     return option;
}
Mananger::Mananger(){
    
}
Mananger::~Mananger(){

}
void Mananger::showMananger(){
File file;
 bool optionVerify = false;
    cout << "Gerente" << endl;
       
        while(optionVerify == false){
           
            cout<<"Selecione uma das opcoes abaixo:"<< endl;
            cout<< "1 - Alterar o cardápio" << endl;
            cout<< "2 - CAIXA" << endl;
            cout<< "3 - Faturamento" << endl;
           
            cout<<"Digite o numero da Opcao"<<endl;
            int _option;
            cin >> _option;
            setOption(_option);
            if(!(getOption() == 1 || getOption() == 2 || getOption() == 3)){
                cout<<"Opcao Invalida"<<endl;
                system("pause");
                system("cls");
            }
            else{
                if(getOption() == 1){
                cout << "temquefazer" << endl;

                }
                else if(getOption() == 2){
                    
                        }
                else if (getOption() == 3){

                }
                }
                }
                 system("cls");

    system("pause");

             }           
}
}
    system("pause");
}

int main(){

    Mananger mananger;
    mananger.showMananger();

    return 0;
}