#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	ifstream in( "code.cpp" );
	string line;
	
	while( getline( in, line ) ) // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v
	//print concactated reversed string
	string concat = "";
	for( int i = v.size()-1; i >= 0; i-- ) {
		concat += v[i] + "\n";
	}
	cout << concat << endl;
	// add line numbers:
	for( int i = v.size()-1; i >= 0; i-- ) {
		cout << i << ": " << v[i] << endl;
	}
}