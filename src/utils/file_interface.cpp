#include "file_interface.h"

bool File::saveToFile(string _fileName, string _text){
  fstream file;
  if(!file.is_open()){
      file.close();
  }
  file.open(_fileName, fstream::out);
  file << _text << "\n";
  file.close();
}

bool File::updateToFile(string _fileName, string _text){

}

bool File::deleteFile(string _fileName){

}

string File::readFile(string _fileName){
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
    }
    else{
      cout << "Nao e possivel ler o arquivo" << endl;
    }
}