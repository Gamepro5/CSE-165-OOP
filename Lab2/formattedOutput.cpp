#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

string int_to_binary(int number) { // is_prime code from google
    string numstr = "";
    int i = 0;
    if (number == 0) {
        return "0";
    }
	while(number != 0){
		numstr = to_string(number % 2) + numstr;
		number = number / 2;
	}
    return numstr;
}

string int_to_hex(int number) { //from https://www.educative.io/answers/how-to-convert-a-number-from-decimal-to-hexadecimal-in-cpp
    int decimal, remainder, product = 1;
    string hex_dec = "";
    decimal = number;
    while (decimal != 0) {
        remainder = decimal % 16;
        char ch;
        if (remainder >= 10)
        ch = remainder + 55;
        else
        ch = remainder + 48;
        hex_dec += ch;
    
        decimal = decimal / 16;
        product *= 10;
    }
    reverse(hex_dec.begin(), hex_dec.end());
    return hex_dec;
}

int main() {
    int number;
    while (true) {
        cin >> number;
        if (number >= 0) {
            cout << number << " in binary is: " << int_to_binary(number) << " and in hex is: " << int_to_hex(number) << endl;
        } else {
            return 0;
        }
    }

}