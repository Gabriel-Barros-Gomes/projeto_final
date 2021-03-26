#include<iostream>
#include"file_interface.h"

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
    File file;
    string nomedoarquivo = "pedido.txt";
    string header = "Realização de pedido\nMesa=";
    string footer = "\n##configurations##\nativo=true\nid=pedidos\n";
    string body = header;


    
    cout << "inserirarquivocardapio" << endl;
    bool optionVerify = false;
    
    while(optionVerify == false){
           
            cout<<"Selecione uma das opcoes abaixo:"<< endl;
            cout<<"1 - Realizar pedido"<< endl;
            cout<<"2 - Status do pedido"<< endl;
            cout<<"3 - Fechar mesa"<< endl;
           
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
                    bool quantidadeVerify = false;
                    int quantidadeSabor;

                    while(quantidadeVerify == false){
                        cout << "Deseja 1 ou 2 sabores?" << endl;
                        cin >> quantidadeSabor;
                            if (!(quantidadeSabor == 1 || quantidadeSabor == 2)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                                string strQuantidadeSabor;
                                if(quantidadeSabor == 1){
                                    strQuantidadeSabor = "1";

                                }else{
                                    strQuantidadeSabor = "2";
                                }

                                string _quantidadeSabor = "\nPizza "+ strQuantidadeSabor + " Sabor(es)\n";
                                body = body + _quantidadeSabor;
                            quantidadeVerify = true;
                            }
                    }
                    if (quantidadeSabor == 1){

                        bool tamanhoVerify = false;
                        string tamanho;

                        while(tamanhoVerify == false){
                        cout << "Qual o tamanho da pizza: P, M, G?" << endl;
                        cin >> tamanho;
                            if (!(tamanho == "P" || tamanho =="p" || tamanho == "M" || tamanho == "m" || tamanho == "G" || tamanho == "g" )){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            string _tamanho = "\nTamanho " + tamanho + "\n" ;
                            body = body + _tamanho;
                            tamanhoVerify = true;
                            }
                        }

                        bool saborVerify = false;
                        int sabor;

                        while(saborVerify == false){
                        cout << "Digite o Codigo de um sabor: (1-10)" << endl;
                        cin >> sabor;
                            if (!(sabor == 1 || sabor == 2 || sabor == 3 || sabor == 4 || sabor == 5 || 
                                  sabor == 6 || sabor == 7 || sabor == 8 || sabor == 9 || sabor == 10)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            string _sabor = "Sabor [sabor entra aqui}\n";
                            body = body + _sabor;
                            saborVerify = true;
                            }
                        }
                        bool bordaVerify = false;
                        int borda;

                        while(bordaVerify == false){
                        cout << "Digite o Codigo da borda desejada: \n"
                             << "00 sem borda\n"
                             << "20 catupiry\n"
                             << "30 cheddar\n"
                             << "40 chocolate\n" << endl;
                        cin >> borda;
                            if (!(borda == 00 || borda == 20 || borda == 30 || borda == 40)){
                             cout << "Opcao invvlida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                                cout<<"pesquisar borda no arquivo cardapio"<<endl;
                                string _borda = "Borda [borda entra aqui]";  
                                body = body + _borda;  
                                bordaVerify = true;

                            }
                        }
                        bool bebidaVerify = false;
                        int bebida;

                        while(bebidaVerify == false){
                        cout << "Digite o Codigo da bebida desejada: \n"
                             << "50 Agua\n"
                             << "51 Agua com gas\n"
                             << "52 Refri lata\n"
                             << "53 Refri 2litros\n"
                             << "54 Suco\n" 
                             << "55 sem bebida" << endl;
                            cin >> bebida;
                            if (!(bebida == 50 || bebida == 51 || bebida == 52 || bebida == 53 || bebida == 54 || bebida == 55)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout<<"pesquisar bebida no arquivo cardapio"<<endl;
                            string _bebida = "\nBebida [bebida entra aqui]\n"; 
                            body = body + _bebida;
                            bebidaVerify = true;
                            }
                            

                        }
                        string observacao;
                        cout << "Observacoes? " << endl;
                        cin.ignore();
                        getline(cin,observacao);
                        string _observacao = observacao;
                        body = body + _observacao;
                        footer = footer + "\n[configuraçoes especiais entram aqui]\n";
                        body = body + footer;

                        file.saveToFile("pedidos_pizza_sabor1", body );
                    }


                    else if (quantidadeSabor == 2){
                        bool tamanhoVerify = false;
                        string tamanho;

                        while(tamanhoVerify == false){
                        cout << "Qual o tamanho da pizza: P, M, G?" << endl;
                        cin >> tamanho;
                            if (!(tamanho == "P" || tamanho =="p" || tamanho == "M" || tamanho == "m" || tamanho == "G" || tamanho == "g" )){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            string _tamanho = "\nTamanho " + tamanho + "\n" ;
                            body = body + _tamanho;
                            tamanhoVerify = true;
                            }
                        }
                        bool saborVerify = false;
                        int sabor1, sabor2;

                        while(saborVerify == false){
                        cout << "Digite o Codigo do primeiro sabor: (1-10)" << endl;
                        cin >> sabor1;
                            if (!(sabor1 == 1 || sabor1 == 2 || sabor1 == 3 || sabor1 == 4 || sabor1 == 5 || 
                                  sabor1 == 6 || sabor1 == 7 || sabor1 == 8 || sabor1 == 9 || sabor1 == 10)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            string _sabor1 = "Sabor 1 [sabor entra aqui}\n";
                            body = body + _sabor1;
                            saborVerify = true;
                            }
                        cout << "Digite o Codigo do segundo sabor: (1-10)" << endl;
                        cin >> sabor2;
                            if (!(sabor2 == 1 || sabor2 == 2 || sabor2 == 3 || sabor2 == 4 || sabor2 == 5 || 
                                  sabor2 == 6 || sabor2 == 7 || sabor2 == 8 || sabor2 == 9 || sabor2 == 10)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout << "Pesquisar sabor" << endl;
                            string _sabor2 = "Sabor 2 [sabor entra aqui}\n";
                            body = body + _sabor2;
                            saborVerify = true;
                            }
                        }
                        bool bordaVerify = false;
                        int borda;

                        while(bordaVerify == false){
                        cout << "Digite o Codigo da borda desejada: \n"
                             << "00 sem borda\n"
                             << "20 catupiry\n"
                             << "30 cheddar\n"
                             << "40 chocolate" << endl;
                        cin >> borda;
                            if (!(borda == 00 || borda == 20 || borda == 30 || borda == 40)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            string _borda = "Borda [borda entra aqui]";  
                            body = body + _borda; 
                            bordaVerify = true;
                            }
                        }

                        bool bebidaVerify = false;
                        int bebida;
                        while(bebidaVerify == false){
                        cout << "Digite o Codigo da bebida desejada: \n"
                             << "50 Agua\n"
                             << "51 Agua com gas\n"
                             << "52 Refri lata\n"
                             << "53 Refri 2litros\n"
                             << "54 Suco\n" 
                             << "55 sem bebida" << endl;
                        cin >> bebida;
                            if (!(bebida == 50 || bebida == 51 || bebida == 52 || bebida == 53 || bebida == 54 || bebida == 55)){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                            cout<<"pesquisar bebida no arquivo cardapio"<<endl;
                            string _bebida = "\nBebida [bebida entra aqui]\n"; 
                            body = body + _bebida;
                            bebidaVerify = true;
                            }
                            

                        }
                        string observacao = "Sem observacao";
                        cout << "Observacoes? " << endl;
                        cin.ignore();
                        getline(cin,observacao);
                        string _observacao = observacao;
                        body = body + _observacao;
                        footer = footer + "\n[configuraçoes especiais entram aqui]\n";
                        body = body + footer;

                        file.saveToFile("pedidos_pizza_sabor2", body );
                    }
                    
                    cout << "" << endl;
                    optionVerify = true;
                }
                else if(getOption() == 2){
                    cout << " Status do pedido " << endl;
                    cout << "buscarstatusdopedido dentrodoarquivodocheff" << endl;
                    cout << "criar3ifs,umpracadaestado" << endl;

                }
                 else if(getOption() == 3){
                     int encerramesa;
                     bool mesaVerify = false;

                    while(mesaVerify == false){
                         cout << " Fechar mesa" << endl;
                         cout << "Deseja fechar mesa? 1 - SIM ou 0 - NAO" << endl;
                        cin >> encerramesa;
                            if (!(encerramesa == 1 || encerramesa == 0) ){
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                                if(encerramesa == 1){
                                    cout << "Salvar mesa encerrada no arquivo de pedidos" << endl;
                                    cout << "Compareca ao caixa" << endl;
                                    mesaVerify = true;
                                }
                                else if (encerramesa == 0){
                                    cout << "Naofecharmesa" << endl;
                                    cout << "Seu pedido continua aberto!" << endl;
                                    mesaVerify = true;
                                }
                            }
                        }
                
                   
                    
                

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