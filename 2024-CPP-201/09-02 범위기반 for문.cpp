#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> arr;

    arr.reserve(4);

    arr.push_back(201);
    arr.push_back(202);
    arr.push_back(203);
    arr.push_back(204);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

}