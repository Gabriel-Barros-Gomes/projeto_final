#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include<iostream>
using namespace std;

class User
{
private:
    int id;
    string name;
    string cpf;
    string password;

public:
 
    int getId(){
        return id;
    }
    void setId(int _id){
        id = _id;
    }

    string getName(){
        return name;
    }
    void setName(string _name){
        name = _name;
    }

    string getCpf(){
        return cpf;
    }
    void setCpf(string _cpf){
        cpf = _cpf;
    }

    string getPassword(){
        return password;
    }
    void setPassword(string _password){
        password = _password;
    }
};


#endif