#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> V;
  string input;
  while (true) {
    cin >> input;
    if (input == "quit") {
      break;
    }
    if (input.length() > 3) {
      V.push_back(input);
    } else {
      for (int i=0;i<V.size();i++) {
        if (V[i].substr(0, input.length()) == input) {
          cout << V[i] << endl;
        }
      }
    }
  }
  
  return 0;
}