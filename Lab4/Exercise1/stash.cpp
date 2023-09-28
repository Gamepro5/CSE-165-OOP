#include "stash.h"

using namespace std;

int main() {
    std::cout << "Enter size: ";
    int size;
    cin >> size;

    Stash data;
    
    data.initialize(sizeof(double));

    for (int i=0;i<size;i+2+) {
        double input;
        cin >> input;
        data.add( &input);
    }

    for (int i=0;i<size;i++) {
        double* castedPointer = (double*) data.fetch(i);
        cout << *castedPointer << endl;
    }

    data.cleanup();


    return 0;
}