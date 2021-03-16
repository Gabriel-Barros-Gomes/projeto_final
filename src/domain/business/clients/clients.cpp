#include<iostream>

using namespace std;

class Client{
private:

public:
Client();

~Client();

void showClient();

};

Client::Client(){
    
}
Client::~Client(){

}
void Client::showClient(){
    cout << "cliente" << endl;
    system("pause");
}

int main(){

    Client client;
    client.showClient();

    return 0;
}