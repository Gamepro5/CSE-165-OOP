#include <vector>
#include <algorithm>

using namespace std;

class Data {
protected:
    vector<int> items;
public:
    void add(int num) {
        items.push_back(num);
    }
    void sort() {
        std::sort(items.begin(), items.end());
    }
    void print() {
        for (int i=0;i<items.size();i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }

};

