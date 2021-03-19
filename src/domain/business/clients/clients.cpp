#include<iostream>

using namespace std;

class Client{
private:
int option;

public:

void setOption(int);
int getOption();

Client();

~Client();

void showClient();

};

Client::Client(){
    
}
Client::~Client(){

}
void Client::setOption(int _option){
     option = _option;
}
int Client::getOption(){
     return option;
}

void Client::showClient(){
    cout << "inserirarquivocardapio" << endl;
    bool optionVerify = false;
    
    while(optionVerify == false){
           
            cout<<"Selecione uma das opcões abaixo:"<< endl;
            cout<<"1 - Realizar pedido"<< endl;
            cout<<"2 - Status do pedido"<< endl;
            cout<<"3 - Fechar mesa"<< endl;
           
            cout<<"Digite o numero da Opção"<<endl;
            int _option;
            cin >> _option;
            setOption(_option);
            if(!(getOption() == 1 || getOption() == 2 || getOption() == 3)){
                cout<<"Opção Inválida"<<endl;
                system("pause");
                system("cls");
            }
            else{
                if(getOption() == 1){
                    bool quantidadeVerify = false;
                    int quantidadesabor;

                    while(quantidadeVerify == false){
                        cout << "Deseja 1 ou 2 sabores?" << endl;
                        cin >> quantidadesabor;
                            if (!(quantidadesabor == 1 || quantidadesabor == 2)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar quantidadesabor" << endl;
                            quantidadeVerify = true;
                            }
                    }
                    if (quantidadesabor == 1){

                        bool tamanhoVerify = false;
                        string tamanho;

                        while(tamanhoVerify == false){
                        cout << "Qual o tamanho da pizza: P, M, G?" << endl;
                        cin >> tamanho;
                            if (!(tamanho == "P" || tamanho =="p" || tamanho == "M" || tamanho == "m" || tamanho == "G" || tamanho == "g" )){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar tamanho" << endl;
                            tamanhoVerify = true;
                            }
                        }

                        bool saborVerify = false;
                        int sabor;

                        while(saborVerify == false){
                        cout << "Digite o Código de um sabor: (1-10)" << endl;
                        cin >> sabor;
                            if (!(sabor == 1 || sabor == 2 || sabor == 3 || sabor == 4 || sabor == 5 || 
                                  sabor == 6 || sabor == 7 || sabor == 8 || sabor == 9 || sabor == 10)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            cout << "Salvar sabor no arquivo de pedidos" << endl;
                            saborVerify = true;
                            }
                        }
                        bool bordaVerify = false;
                        int borda;

                        while(bordaVerify == false){
                        cout << "Digite o Código da borda desejada: "
                             << "00 sem borda"
                             << "20 catupiry"
                             << "30 cheddar"
                             << "40 chocolate" << endl;
                        cin >> borda;
                            if (!(borda == 00 || borda == 20 || borda == 30 || borda == 40)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar borda no arquivo de pedidos" << endl;
                            bordaVerify = true;
                            }
                        }
                        bool bebidaVerify = false;
                        int bebida;

                        while(bebidaVerify == false){
                        cout << "Digite o Código da bebida desejada: "
                             << "50 Agua"
                             << "51 Agua com gas"
                             << "52 Refri lata"
                             << "53 Refri 2litros"
                             << "54 Suco" 
                             << "55 sem bebida" << endl;
                        cin >> bebida;
                            if (!(bebida == 50 || bebida == 51 || bebida == 52 || bebida == 53 || bebida == 54 || bebida == 55)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar bebida no arquivo de pedidos" << endl;
                            bebidaVerify = true;
                            }
                            

                        }
                        string observacao = "Sem observação";
                        cout << "Observações? " << endl;
                        cin >> observacao;
                        cout << "Salvar informação no arquivo pedido";
                    }

                    else if (quantidadesabor == 2){
                        bool tamanhoVerify = false;
                        string tamanho;

                        while(tamanhoVerify == false){
                        cout << "Qual o tamanho da pizza: P, M, G?" << endl;
                        cin >> tamanho;
                            if (!(tamanho == "P" || tamanho =="p" || tamanho == "M" || tamanho == "m" || tamanho == "G" || tamanho == "g" )){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar tamanho" << endl;
                            tamanhoVerify = true;
                            }
                        }
                        bool saborVerify = false;
                        int sabor1, sabor2;

                        while(saborVerify == false){
                        cout << "Digite o Código do primeiro sabor: (1-10)" << endl;
                        cin >> sabor1;
                            if (!(sabor1 == 1 || sabor1 == 2 || sabor1 == 3 || sabor1 == 4 || sabor1 == 5 || 
                                  sabor1 == 6 || sabor1 == 7 || sabor1 == 8 || sabor1 == 9 || sabor1 == 10)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            cout << "Salvar sabor no arquivo de pedidos" << endl;
                            saborVerify = true;
                            }
                        cout << "Digite o Código do segundo sabor: (1-10)" << endl;
                        cin >> sabor2;
                            if (!(sabor2 == 1 || sabor2 == 2 || sabor2 == 3 || sabor2 == 4 || sabor2 == 5 || 
                                  sabor2 == 6 || sabor2 == 7 || sabor2 == 8 || sabor2 == 9 || sabor2 == 10)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            cout << "Salvar sabor no arquivo de pedidos" << endl;
                            saborVerify = true;
                            }
                        }
                        bool bordaVerify = false;
                        int borda;

                        while(bordaVerify == false){
                        cout << "Digite o Código da borda desejada: "
                             << "00 sem borda"
                             << "20 catupiry"
                             << "30 cheddar"
                             << "40 chocolate" << endl;
                        cin >> borda;
                            if (!(borda == 00 || borda == 20 || borda == 30 || borda == 40)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar borda no arquivo de pedidos" << endl;
                            bordaVerify = true;
                            }
                        }

                        bool bebidaVerify = false;
                        int bebida;
                        while(bebidaVerify == false){
                        cout << "Digite o Código da bebida desejada: "
                             << "50 Agua"
                             << "51 Agua com gas"
                             << "52 Refri lata"
                             << "53 Refri 2litros"
                             << "54 Suco" 
                             << "55 sem bebida" << endl;
                        cin >> bebida;
                            if (!(bebida == 50 || bebida == 51 || bebida == 52 || bebida == 53 || bebida == 54 || bebida == 55)){
                             cout << "Opção inválida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Salvar bebida no arquivo de pedidos" << endl;
                            bebidaVerify = true;
                            }
                            

                        }
                        string observacao = "Sem observação";
                        cout << "Observações? " << endl;
                        cin >> observacao;
                        cout << "Salvar informação no arquivo pedido";
                    }
                    
                    cout << "" << endl;
                    optionVerify = true;
                }
                else if(getOption() == 2){
                    cout << " Status do pedido " << endl;
                }
            }
    

    system ("pause");
    system ("cls");
    }
}

int main(){

    Client client;
    client.showClient();

    return 0;
}