#include "stack.h"

using namespace std;

int main() {
    std::cout << "Enter size: ";
    int size;
    cin >> size;

    Stack data;
    
    data.initialize();

    double input;

    for (int i=0;i<size;i++) {
        cin >> input;
        double* new_double = new double(input);
        data.push(new_double);
    }

    for (int i=0;i<size;i++) {
        double* castedPointer = (double*) data.pop();
        cout << *castedPointer << endl;
    }

    data.cleanup();


    return 0;
}