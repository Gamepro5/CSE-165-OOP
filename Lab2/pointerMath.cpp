#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    cout << "Added: " << (*ptr1+*ptr2) << ", Subtracted: " << (*ptr1-*ptr2) << ", Multiplied: " << ((*ptr1)*(*ptr2)) << ", Divided: " << (float(*ptr1)/(*ptr2)) << endl;
}