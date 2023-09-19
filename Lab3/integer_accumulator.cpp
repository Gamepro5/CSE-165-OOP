#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> accumulatorStorage;
  while (true) {
    int input;
    cin >> input;
    if (input == 0) {
      int sum = 0;
      cout << accumulatorStorage.size() << " ";
      for (int i=0;i<accumulatorStorage.size();i++) {
        sum += accumulatorStorage[i];
      }
      cout << sum << endl;
      return 0;
    }

    if (input > 0) {
      accumulatorStorage.push_back(input);
    } else {
      for (int i=0;i<accumulatorStorage.size();i++) {
        if (abs(accumulatorStorage[i]) == abs(input)) {
          accumulatorStorage.erase(accumulatorStorage.begin()+i);
          i++;
        }
      }
    }
  }
  
  return 0;
}