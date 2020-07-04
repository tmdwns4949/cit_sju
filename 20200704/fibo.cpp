// 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

// int n = 0;
//
// int fib(){
//
// }

int main() {
  int first = 1;
  int second = 1;
  while (second < 100000){
    int temp = second;
    second += first;
    first = temp;
    cout << second << endl;
  }
    // while(fib() < 100000){
    //   cout << fib() << endl;
    // }
}
