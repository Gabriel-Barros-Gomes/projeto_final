#include<iostream>
#include"file_interface.h"
#include<time.h>
#include <iomanip>
#include <cctype>
#include <cstdlib>

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
            cout<< "1 - Alterar o cardapio" << endl;
            cout<< "2 - CAIXA" << endl;
 
           
            cout<<"Digite o numero da Opcao"<<endl;
            int _option;
            cin >> _option;
            setOption(_option);
            if(!(getOption() == 1 || getOption() == 2)){
                cout<<"Opcao Invalida"<<endl;
                system("pause");
                system("cls");
            }
            else{
                if(getOption() == 1){
                system("notepad cardapio.txt");
                
                }
                else if(getOption() == 2){
                cout << "Pedidos:" << endl;
                queue<string> filasabor = file.readFile("qsabor");
                string letras[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z"};
                srand(time(NULL));
                int x = rand() % 26;

                if (filasabor.front()== "1"){
                    file.transferFile("pedidos_pizza_sabor1", letras[x]);
                    file.showFile(letras[x]);
                }
                else if(filasabor.front()== "2"){
                    file.transferFile("pedidos_pizza_sabor2",  letras[x]);
                    file.showFile( letras[x]);
                }

                
               }
                 }
                }
                 system("cls");

    system("pause");         
}


int main(){

    Mananger mananger;
    mananger.showMananger();

    return 0;
}