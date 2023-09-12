#include <fstream>
#include <iostream>
#include <cstring>

int main() {
    //thanks to https://www.udacity.com/blog/2021/05/how-to-read-from-a-file-in-cpp.html
    std::ifstream myfile ("words.txt");
    int count = 0;
    while ( myfile ) {
        char letter = myfile.get();
        if (letter == ' ' || letter == '\n') {
            count++;
        }
    }
    count++;
    std::cout << count;
    return 0;
}