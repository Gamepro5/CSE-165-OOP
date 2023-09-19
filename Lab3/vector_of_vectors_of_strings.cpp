#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<vector<string>> V(10);
  string input;
  while (true) {
    cout << "Enter the input: ";
    cin >> input;
    if (input == "quit") {
      break;
    }
    bool found = false;
    for (int j=0;j<V[input.length()-1].size();j++) {
      if (V[input.length()-1][j] == input) {
        found = true;
      }
    }
    if (!found) {
      V[input.length()-1].push_back(input);
    }
  }

  for (int i=0;i<V.size();i++) {
    for (int j=0;j<V[i].size();j++) {
      cout << V[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}