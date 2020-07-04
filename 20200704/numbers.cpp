// 12 32
#include <iostream>
using namespace std;

int main() {
  for (int i = 0;i<1000000;i++){
    if (i % 32 == 12){
      cout << i << endl;
    }
  }
}
