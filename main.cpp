#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;


  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= 100/2; ++i) {
    if (100 % i == 0 ) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << i;


  return 0;
}
