#include <iostream>
using namespace std;

// 전통적인 C언어는 함수명 중복이 안됨
// C++은 함수명 중복 가능 (함수 오버로딩)

int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}

void main(void) {
	cout << sum(1, 2) << sum(1.1f, 2.3f) << endl;
}