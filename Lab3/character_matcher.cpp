#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> list;
  while (true) {
    string input;
    cin >> input;
    if (input == "quit") {
      return 0;
    }
    if (input.length() > 1) {
      list.push_back(input);
    } else {
      for (int i=0;i<list.size();i++) {
        if (toupper(list[i][0]) == toupper(input[0])) {
          cout << list.at(i) << endl;
        }
      }
      return 0;
    }

  }
  
  return 0;
}