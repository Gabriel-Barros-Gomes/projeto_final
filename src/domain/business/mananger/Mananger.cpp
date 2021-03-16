#include<iostream>

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
    cout << "gerente" << endl;
    system("pause");
}

int main(){

    Mananger mananger;
    mananger.showMananger();

    return 0;
}