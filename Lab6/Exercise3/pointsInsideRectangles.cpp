#include <iostream>
#include "Rect.h"
#include "Vec.h"
#include <vector>

using namespace std;

Vec nullvec( 0.0f, 0.0f );

int main( int argc, const char* argv[] )
{   
    vector<Rect*> rects;
	float inpt1;
    float inpt2;
    float inpt3;
    float inpt4;
    cout << "Type 4 floats to define a rectangle: ";
    cin >> inpt1;
    cin >> inpt2;
    cin >> inpt3;
    cin >> inpt4;
    while (inpt1>0 || inpt2>0 || inpt3>0 || inpt4>0) {
        rects.push_back(new Rect(inpt1, inpt2, inpt3, inpt4));
        cout << "Type 4 floats to define a rectangle: ";
        cin >> inpt1;
        cin >> inpt2;
        cin >> inpt3;
        cin >> inpt4;
    }

    cout << "Type 2 floats to define a point: ";
    cin >> inpt1;
    cin >> inpt2;
    while (inpt1!=-99 && inpt2!=-99) {
        Vec* temp = new Vec(inpt1, inpt2);
        for (int i=0;i<rects.size();i++) {
            if (rects[i]->contains(*temp)) {
                cout << "The point is INSIDE of rectangle " << i << endl;
            } else {
                cout << "The point is OUTSIDE of rectangle " << i << endl;
            }
        }
        delete temp;
        cout << "Type 2 floats to define a point: ";
        cin >> inpt1;
        cin >> inpt2;
    }
    cout << "Finished!" << endl;

	return 0;
}