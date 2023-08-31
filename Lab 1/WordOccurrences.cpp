#include <fstream>
#include <iostream>
#include <cstring>

int main() {
    //thanks to https://www.udacity.com/blog/2021/05/how-to-read-from-a-file-in-cpp.html
    std::cout << "What word would you like it count the occurrences of in words.txt? " << std::endl;
    std::string word;
    std::cin >> word;
    std::ifstream myfile ("words.txt");
    std::string text;
    int count = 0;
    std::string partialWord = "";
    while ( myfile ) {
        char letter = std::tolower(myfile.get());
        partialWord += letter;
        std::cout << partialWord << " " << letter << std::endl;
        if (partialWord == word) {
            count++;
            partialWord = "";
        } else if (letter == ' ' || letter == '\n') {
            partialWord = "";
        }
        text += letter;

    }
    std::cout << count;
    return 0;
}