#ifndef _FILE_
#define _FILE_

#include<iostream>
#include<fstream>

using namespace std;

class File {

private:

public:

bool saveToFile(string _fileName, string _text);

bool updateToFile(string _fileName, string _text);

bool deleteFile(string _file);

string readFile(string _fileName);

string showFile(string _fileName);


};

#endif