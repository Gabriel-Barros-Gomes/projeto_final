#include "file_interface.h"

bool File::saveToFile(string _fileName, string _text){
  ofstream file;
  if(file.is_open()){
      file.close();
  }
  file.open(_fileName);
  file << _text << "\n";
  file.close();
}

bool File::updateToFile(string _fileName, string _text){

}

bool File::deleteFile(string _fileName){

}

string File::readFile(string _fileName){

}