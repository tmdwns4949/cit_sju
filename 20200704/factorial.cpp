#include <iostream>
using namespace std;

int main() {
  int a;
  int total;
  cin >> a;
  for (total = 1;a > 1; a--){
    total *= a;
  }
  cout << total << endl;
  return 0;
}
