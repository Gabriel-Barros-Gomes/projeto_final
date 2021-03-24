#include<iostream>

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
                    cout << "Digite o usuario (1 - gerente 0 - cheff)" << endl;
                    cin >> user;
                    if(!(user == 1 || user == 0)){
                    cout<<"Opcao Invalida"<<endl;
                    system("pause");
                    system("cls");
                    }
                    cout << "Digite sua senha (use apenas numeros)" << endl;
                    cin >> senha;

                    if (user == 1){
                        cout << "irprateladogerente" << endl;
                        system("pause");
                    }
                    else if (user == 0){
                        cout << "irparateladocheff" << endl;
                        system("pause");
                    }
                    
                    optionVerify = true;
                }
                else if(getOption() == 2){
                    cout << "Cadastrar usuario " << endl;
                    cout << "Digite 1 se quiser cadastrar gerente"<<endl;
                    cout<<"Digite 0 se quiser cadastrar cheff" << endl;
                    cin >> cadastro;

                    if(!(cadastro == 1 || cadastro == 0)){
                    cout<<"Opcao Invalida"<<endl;
                    system("pause");
                    system("cls");
                    }
                

                    if (cadastro == 1){
                        cout << "Crie a senha do gerente (apenas numeros)" << endl;
                        system("pause");
                    }
                    else if (cadastro == 0){
                        cout << "Crie a senha do cheff (apenas numeros)" << endl;
                        system("pause");
                    }
                    
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