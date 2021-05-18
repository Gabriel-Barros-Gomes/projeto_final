#include<iostream>
#include<queue>
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
    queue<string> Queue;
    string nomedoarquivo = "pedido.txt";
    string header = "Realização de pedido";
    string body = header;


    
    file.showFile("cardapio.txt");
    bool optionVerify = false;
    
    while(optionVerify == false){
           
            cout<<"Selecione uma das opcoes abaixo:"<< endl;
            cout<<"1 - Realizar pedido"<< endl;
            cout<<"2 - Status do pedido"<< endl;
            
           
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
                        file.saveToFile("qsabor", "1");
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
                                Queue = file.readFile("sabores");

                                switch (sabor)
                                {
                                case 1:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Mussarela"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 2:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Calabresa"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 3:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Bacon"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 4:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Frango-com-catupiry"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 5:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Marguerita"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 6:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Quatro-queijos"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                   
                                case 7:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Portuguesa"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 8:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-banana"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 9:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-morango"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 10:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Romeu-e-Julieta"){
                                            body = body + "Sabor: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                }
                                
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
                             cout << "Opcao invalida" << endl;
                             system ("pause");
                             system ("cls");
                            }
                            else {
                                string _borda = "Borda: ";  
                                if (borda==00){
                                    _borda = _borda + "Sem Borda\n";
                                    body = body + _borda;
                                }
                                else if(borda==20){
                                    _borda = _borda + "Catupiry\n";
                                    body = body + _borda;
                                }
                                else if(borda==30){
                                    _borda = _borda + "Cheddar\n";
                                    body = body + _borda;
                                }
                                else if(borda==40){
                                    _borda = _borda + "Chocolate\n";
                                    body = body + _borda;
                                
                                }
                                bordaVerify = true;

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
                                string _bebida = "Bebida: ";
                                if (bebida==50){ 
                                    _bebida = _bebida + "Agua\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==51){
                                    _bebida = _bebida + "Agua com gas\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==52){
                                    _bebida = _bebida + "Refri lata\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==53){
                                    _bebida = _bebida + "Refri 2litros\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==54){
                                    _bebida = _bebida + "Suco\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==55){
                                    _bebida = _bebida + "Sem Bebida\n";
                                    body = body + _bebida;
                                }
                                
                            bebidaVerify = true;
                            }
                            

                        }
                        string observacao;
                        string nmesa;
                        string mesa = "Mesa: ";
                        cout << "Digite o numero da sua mesa (colado na mesa)" << endl;
                        cin >> nmesa;
                        mesa = mesa + nmesa + "\n";
                        body = body + mesa;
                        cout << "Observacoes? " << endl;
                        cin.ignore();
                        getline(cin,observacao);
                        string _observacao = observacao;
                        body = body + _observacao;

                        file.saveToFile("pedidos_pizza_sabor1", body );
                        file.saveToFile("ativo", "sim");
                        cout << "\nPedido Feito com Sucesso\n" <<endl;
                    }
                    }


                    else if (quantidadeSabor == 2){
                        file.saveToFile("qsabor", "2");
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
                             Queue = file.readFile("sabores");

                                switch (sabor1)
                                {
                                case 1:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Mussarela"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 2:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Calabresa"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 3:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Bacon"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 4:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Frango-com-catupiry"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 5:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Marguerita"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 6:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Quatro-queijos"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                   
                                case 7:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Portuguesa"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 8:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-banana"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 9:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-morango"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 10:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Romeu-e-Julieta"){
                                            body = body + "Sabor 1: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                }
                                
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
                             Queue = file.readFile("sabores");

                                switch (sabor2)
                                {
                                case 1:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Mussarela"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 2:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Calabresa"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                case 3:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Bacon"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 4:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Frango-com-catupiry"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 5:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Marguerita"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 6:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Quatro-queijos"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                   
                                case 7:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Portuguesa"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 8:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-banana"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 9:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Chocolate-com-morango"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                case 10:
                                    while(!Queue.empty()){
                                        string flavorToParse = Queue.front();
                                        string delimiter = "#";
                                        string _sabor = flavorToParse.substr(0, flavorToParse.find(delimiter));
                                        if(_sabor == "Romeu-e-Julieta"){
                                            body = body + "Sabor 2: " + _sabor + "\n"; 
                                        }
                                        else{

                                        }
                                        Queue.pop();
                                    }
                                    
                                }
                                
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
                            string _borda = "Borda: ";  
                                if(borda==00){
                                    _borda = _borda + "Sem Borda\n";
                                    body = body + _borda;
                                }
                                else if(borda==20){
                                    _borda = _borda + "Catupiry\n";
                                    body = body + _borda;
                                }
                                else if(borda==30){
                                    _borda = _borda + "Cheddar\n";
                                    body = body + _borda;
                                }
                                else if(borda==40){
                                    _borda = _borda + "Chocolate\n";
                                    body = body + _borda;
                                }
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
                            string _bebida = "Bebida: ";
                                if(bebida==50){ 
                                    _bebida = _bebida + "Agua\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==51){
                                    _bebida = _bebida + "Agua com gas\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==52){
                                    _bebida = _bebida + "Refri lata\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==53){
                                    _bebida = _bebida + "Refri 2litros\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==54){
                                    _bebida = _bebida + "Suco\n";
                                    body = body + _bebida;
                                }
                                else if(bebida==55){
                                    _bebida = _bebida + "Sem Bebida\n";
                                    body = body + _bebida;
                                }
                            bebidaVerify = true;
                            }
    

                        }
                        string observacao;
                        string nmesa;
                        string mesa = "Mesa: ";
                        cout << "Digite o numero da sua mesa (colado na mesa)" << endl;
                        cin >> nmesa;
                        mesa = mesa + nmesa + "\n";
                        body = body + mesa;
                        cout << "Observacoes? " << endl;
                        cin.ignore();
                        getline(cin,observacao);
                        string _observacao = "OBS: ";
                        _observacao = _observacao + observacao + "\n";
                        body = body + _observacao;
                        body = body;

                        file.saveToFile("pedidos_pizza_sabor2", body );
                        file.saveToFile("ativo", "sim");
                        cout << "\nPedido Feito com Sucesso\n" <<endl;
                        
                    }
                    
                    cout << "" << endl;
                    optionVerify = true;
                }   
                else if(getOption() == 2){
                    cout << " Status do pedido " << endl;
                    queue<string> Fila = file.readFile("ativo");
                    if (Fila.front() == "sim" || Fila.front()== "em andamento"){
                        cout << "Pedido em andamento" << endl;
                    }
                    else {
                        cout << "Pedido finalizado, retire na bancada" << endl;
                    }
                }
                
                }
            }

    system ("pause");
    system ("cls");
    }

int main(){

    Client client;
    client.showClient();

    return 0;
}