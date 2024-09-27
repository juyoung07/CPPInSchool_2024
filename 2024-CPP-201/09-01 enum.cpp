#include <iostream>

using namespace std;

enum FoodStyle { 
    KOREAN,     // 0
    JAPANESE,   // 1
    CHINESE     // 2
};

int main(void) {
    // 스타일을 KOREAN으로 초기화
    FoodStyle style = KOREAN;

    switch (style) {
    case KOREAN:
        cout << "한식" << endl;
        break;
    case JAPANESE:
        cout << "일식" << endl;
        break;
    case CHINESE:
        cout << "중식" << endl;
        break;
    }

    return 0;
}