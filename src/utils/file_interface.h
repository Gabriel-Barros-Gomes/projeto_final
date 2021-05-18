#ifndef _FILE_
#define _FILE_

#include<iostream>
#include<fstream>
#include<queue>



using namespace std;

class File {

private:

public:

bool saveToFile(string _fileName, string _text);

bool updateToFile(string _fileName, string _text);

bool deleteFile(string _file);

queue<string> readFile(string _fileName);

string showFile(string _fileName);

string transferFile(string _file1, string _file2);
};

#endif