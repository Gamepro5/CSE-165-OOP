#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

bitset<10> int_to_binary(int number) { // is_prime code from google
    return bitset<10>(number);
}
/*
Retrieve a bit from a number "n" in binary format at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: bit at position "index"
Example: Input: n=1010, index=1, output=1
*/
int getBit(int n, int index) {
    bitset<10> bits = int_to_binary(n);
    return bits[index];
}
/*
Set a bit at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: the binary number after the bit is set at position "index"
Example: Input: n=1010, index=0, output=1011
*/
int setBit(int n, int index) {
    bitset<10> bits = int_to_binary(n);
    bits[index] = 1;
    return stoi(bits.to_string());
}
/*
Clear a bit at position "index"
Input: number n, position index with 0 being the right most (least
significant) bit
Output: the binary number after the bit is cleared at position "index"
Example: Input: n=1010, index=1, output=1000
*/
int clearBit(int n, int index) {
    bitset<10> bits = int_to_binary(n);
    bits[index] = 0;
    return stoi(bits.to_string());
}


int main() {
    int n;
    int index;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter an index: ";
    cin >> index;
    cout << "Binary representation of " << n << " is " << stoi(int_to_binary(n).to_string()) << endl;
    cout << "Get bit at index " << index << ": " << getBit(n, index) << endl;
    cout << "Binary number after setting bit at index " << index << ": " << setBit(n, index) << endl;
    cout << "Binary number after clearing bit at index " << index << ": " << clearBit(n, index) << endl;
}