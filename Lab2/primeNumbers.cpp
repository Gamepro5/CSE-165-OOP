#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int number) { // is_prime code from google
  if (number <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
    int number;
    cin >> number;
    for (int i=number;i>0;i--) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }

}