#ifndef USER_H
#define USER_H
#include<iostream>
using namespace std;

    class User {
    private:
    string user;
    string password;
    int access;
        
    public:
        User();
        ~User();
        string getUser();
        void setUser(string _user);

        string getPassword();
        void setPassword(string _password);

        int getAccess();
        void setAccess(int _access);
        
    };
    

#endif