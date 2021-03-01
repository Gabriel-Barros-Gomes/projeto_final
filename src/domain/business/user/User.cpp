#include "../headers/util/User.h"

User::User(){
    user = "void";
    password = "void";
    access = 0;
}

User::~User(){
    user = "void";
    password = "void";
    access = 0;
}

string User::getUser(){
    return user;
}

void User::setUser(string _user){
    user = _user;
}

string User::getPassword(){
    return password;
}

void User::setPassword(string _password){
    password = _password;
}

int User::getAccess(){
    return access;
}

void User::setAccess(int _access){
    user = _access;
}