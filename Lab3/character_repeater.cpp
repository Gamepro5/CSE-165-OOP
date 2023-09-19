#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct charpair {
  char input_char;
  int frequency;
};

int main() {
  //vector<charpair> list;
  while (true) {
    char input_char;
    int frequency;
    cin >> input_char;
    cin >> frequency;
    //charpair instance;
    string returnvalue = "";
    if (frequency == -1) {
      return 0;
    } else if (frequency == 0) {
      cout << endl;
    } else {
      for (int i=0;i<frequency;i++) {
        cout << input_char;
      }
      cout << endl;
    }

  }
  
  return 0;
}