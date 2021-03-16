#include<iostream>

using namespace std;

class Cheff{
private:

public:
Cheff();

~Cheff();

void showCheff();

};

Cheff::Cheff(){
    
}
Cheff::~Cheff(){

}
void Cheff::showCheff(){
    cout << "cheff" << endl;
    system("pause");
}

int main(){

    Cheff cheff;
    cheff.showCheff();

    return 0;
}