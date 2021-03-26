#include<iostream>
#include"file_interface.h"

using namespace std;

class Cheff{
private:
bool concluido, proximo;
int option;
public:
void setOption(int);
      int getOption();

void setConcluido(bool);
      bool getConcluido();

void setProximo(bool);
      bool getProximo();
  
Cheff();

~Cheff();

void showCheff();

};

Cheff::Cheff(){
    
}
void Cheff::setOption(int _option){
     option = _option;
}
int Cheff::getOption(){
     return option;
}

void Cheff::setConcluido(bool _concluido){
     concluido = _concluido;
}
bool Cheff::getConcluido(){
     return concluido;
}

void Cheff::setProximo(bool _proximo){
     proximo = _proximo;
}
bool Cheff::getProximo(){
     return proximo;
}



Cheff::~Cheff(){

}

void Cheff::showCheff(){
    File file;
    bool optionVerify = false;
    cout << "cheff" << endl;
    cout << "Faca apenas um pedido por vez!" << endl;

        while(optionVerify == false){
           
            cout<<"Selecione uma das opcoes abaixo:"<< endl;
            cout<<"1 - Abrir pedido"<< endl;
            cout<<"2 - Conclusao de pedido"<< endl;
           
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

                    cout << "Colocar pedidos em andamento por ordem de chegada" << endl;
                    cout << "Pedido em andamento" << endl;
                    system("pause");
                    optionVerify = true;
                }
                else if(getOption() == 2){
                    cout << "Pedido concluido? Sim = 1 Nao = 0 " << endl;
                    bool _concluido;
                    cin >> _concluido;
                    setConcluido(_concluido);
                    if(getConcluido() == true){
                        cout << "Numero da mesa:   " << "colocarvariaveldamesa"<< endl;
                        cout << "Pedido detalhado: " <<  "colocaropedido" << endl;

                        cout << "Ir para o proximo pedido? Sim = 1 Não =0 " << endl;
                        bool _proximo;
                        cin >> _proximo;
                        setProximo(_proximo);
                        if(getProximo() == true){
                              cout << "retornartela" << endl; 
                               optionVerify = true;
                        }
                        
                    }
                }
                 system("cls");

    system("pause");

             }           
}
}


int main(){

    Cheff cheff;
    cheff.showCheff();

    return 0;
}