// 2 3 5 7 11 13 17 19 23 29

#include <iostream>
using namespace std;

// int main() {
//   int targetnum = 7;
//   bool isPrime = true;
//   for (int i = 2; i <= targetnum/2;i++){
//     if (targetnum % i == 0){
//       isPrime = false;
//       break;
//     }
//   }
//   cout << "is Prime: " << isPrime << endl;
// }

// int main() {
//   int targetnum = 7;
//   bool isPrime = true;
//   for (int i = 2; (isPrime) && (i <= targetnum/2);i++){
//     if (targetnum % i == 0){
//       isPrime = false;
//     }
//   }
//   if (isPrime){
//     cout << targetnum << endl;
//   }
// }

int main() {
  for (int targetnum = 2;targetnum < 100000; targetnum++){
    bool isPrime = true;
    for (int divider = 2; (isPrime) && (divider <= targetnum/2);divider++){
      if (targetnum % divider == 0){
        isPrime = false;
      }
    }
    if (isPrime){
      cout << targetnum << endl;
    }
  }
}
