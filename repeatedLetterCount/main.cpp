#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int lCount = 0, temp;

void switchFun(int numSort[], int numS) {
  for (int i = 0; i < numS; i++) {
    /*for(int j=1; j < numS; j++)
    {
      cout << "Sorted Array: " << numSort[i] << " ";
      if(numSort[i] > numSort[j])
      {
        temp = numSort[i];
        numSort[i] = numSort[j];
        numSort[j] = temp;

        //cout << temp << " ";
        //cout << numSort[i] << " ";
        //cout << numSort[j] << " ";
      }
    }*/
    cout << /*"Sorted Array: " <<*/ numSort[i] << " ";
  }
}

void repeatedLetter(string myArray[], int myArraySize) {
  for (int i = 0; i < myArraySize; i++) {
    for (int j = myArraySize; j > i; j--) {

      if (myArray[i] == myArray[j]) {
        cout << "Repeated Letter: " << myArray[i] << endl;
        lCount++;
      }
    }
  }
  cout << "\nAmount of repeated Letters: " << lCount << endl;
}

int main() {
  int numSort[] = {5, 4, 3};
  int numS = sizeof(numSort) / sizeof(numSort[0]);

  string myArray[] = {
      "M", "A", "K", "E", "N", "S", "O", "N", "H", "E", "L", "E", "N",
  };
  int myArraySize = sizeof(myArray) / sizeof(myArray[0]);

  repeatedLetter(myArray, myArraySize);
  switchFun(numSort, numS);

  return 0;
}
