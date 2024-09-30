#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> arr = { 201, 202, 203, 204 };

    for (int x : arr) {
        cout << x << endl;
    }
}