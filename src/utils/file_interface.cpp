#include "file_interface.h"


bool File::saveToFile(string _fileName, string _text){
  fstream file;
  if(!file.is_open()){
      file.close();
  }
  file.open(_fileName, ios::out);
  file << _text << "\n";
  file.close();
}

queue<string> File::readFile(string _fileName){
  ifstream file;
  std::queue<string> Queue;
  
  string linha;
    file.open(_fileName);
    if (file.is_open()){
      while(getline(file, linha )){
        Queue.push(linha);
      }
      file.close();
      return Queue;
    }
    else{
      cout << "Nao e possivel ler o arquivo" << endl;
    }
}

string File::showFile(string _fileName){
  ifstream file;

  string linha;
    if(!file.is_open()){
      file.close();
  }
    file.open(_fileName);
    if (file.is_open()){
      while(getline(file, linha )){
        cout << linha << endl;
      }
      file.close();
    }
    else{
      cout << "Nao e possivel ler o arquivo" << endl;
    }
}

string File::transferFile(string _file1, string _file2){
ifstream file1;
ofstream file2;
string linha;
file1.open(_file1);
file2.open(_file2);
while(getline(file1, linha )){
  file2 << linha << endl;
}

}