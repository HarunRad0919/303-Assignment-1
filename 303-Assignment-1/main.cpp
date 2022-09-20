#include <iostream>
#include "functions.h"
#include <fstream>
#include <ostream>
using namespace std;

int main() {
  int size = 10;
  int array[size];
  //Making the array and array size
  ifstream inFile;
  inFile.open("integer.txt");
  //Opening up the file with the data
  if (inFile.is_open()){
    //checking if the file is open
    for (int i = 0; i <= size; i++){
      //Going through the file and reading it into the array
      inFile >> array[i];
    }
  }
  findIndex(array, size);
  modArray(array, size);
  addendArray(array, size);
  removeIndxArray(array, size);
  return 0;
}