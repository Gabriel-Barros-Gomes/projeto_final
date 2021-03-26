#include<iostream>
#include"file_interface.h"

using namespace std;

class Adm{
private:
int option;
public:
void setOption(int);
int getOption();
Adm();

~Adm();

void showAdm();

};

Adm::Adm(){
    
}
void Adm::setOption(int _option){
     option = _option;
}
int Adm::getOption(){
     return option;
}

Adm::~Adm(){

}
void Adm::showAdm(){
File file;
string header = "Usuarios\n";
string footer = "\n###configurations###\n\nativo=true\n";
string body = header;

bool optionVerify = false;
    cout << "adm" << endl;
    int user;
    int senha;
    int cadastro;
        while(optionVerify == false){
           
            cout<<"Selecione uma das opcoes abaixo:"<< endl;
            cout<<"1 - Entrar"<< endl;
            cout<<"2 - Cadastrar usuario"<< endl;

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
                    cout << "Digite o usuario (0 - gerente 1 - cheff)" << endl;
                    cin >> user;
                    if(!(user == 1 || user == 0)){
                    cout<<"Opcao Invalida"<<endl;
                    system("pause");
                    system("cls");
                    }
                    string usuario;
                    if(user == 0){
                        usuario = "gerente\n";
                    }else{
                        usuario = "cheff\n";
                    }
                    cout << "Digite sua senha" << endl;
                    cin.ignore();
                    string senha;
                    getline(cin, senha);
                    cout << "consultar existencia do usuario" << endl;
                    optionVerify = true;
                }
                else if(getOption() == 2){
                    cout << "Cadastrar usuario " << endl;
                    cout << "Digite 0 para cadastrar gerente"<<endl;
                    cout << "Digite 1 para cadastrar cheff" << endl;
                    cin >> cadastro;

                    if(!(cadastro == 1 || cadastro == 0)){
                    cout<<"Opcao Invalida"<<endl;
                    system("pause");
                    system("cls");
                    }
                    string usuario;
                    string senha;
                    if (cadastro == 0){
                        usuario = "\ngerente\n";
                        cout << "Digite uma senha (Gerente) " <<endl;
                        cin.ignore();
                        getline(cin,senha);
                    }
                    else{
                        usuario = "\ncheff\n";
                        cout << "Digite uma senha (Gerente) " <<endl;
                        cin.ignore();
                        getline(cin,senha);
                    }
                    body = body + usuario + senha;
                    body = body + footer;
                    
                    file.saveToFile("users",body);

                    optionVerify = true;
                        }
                        
                    }
                }
                 system("cls");

    system("pause");
}

int main(){

    Adm adm;
    adm.showAdm();

    return 0;
}