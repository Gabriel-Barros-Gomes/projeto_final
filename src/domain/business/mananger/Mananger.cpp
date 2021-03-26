#include<iostream>
#include"file_interface.h"

using namespace std;

class Mananger{
private:

public:
Mananger();

~Mananger();

void showMananger();

};

Mananger::Mananger(){
    
}
Mananger::~Mananger(){

}
void Mananger::showMananger(){
File file;

    cout << "gerente" << endl;

    file.saveToFile("nada","teste");
    system("pause");
}

int main(){

    Mananger mananger;
    mananger.showMananger();

    return 0;
}