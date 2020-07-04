// 2 3 5 7 11 13 17 19 23 29

#include <iostream>
using namespace std;

int main() {
  int primearr[10000] = {2};
  int index = 1;
  for (int targetnum = 2;targetnum < 100000; targetnum++){
    bool isPrime = true;
    int i = 0;
    while((i < index) && (isPrime)){
      if (targetnum % primearr[i] == 0){
        isPrime = false;
      }
      i++;
    }

    if (isPrime){
      primearr[index] = targetnum;
      index++;
      cout << targetnum << endl;
    }
  }
  cout << index << endl;
}
