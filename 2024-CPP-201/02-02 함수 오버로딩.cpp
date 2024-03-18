#include <iostream>
using namespace std;

// 전통적인 C언어는 함수명 중복이 안됨
// C++은 함수명 중복 가능 (함수 오버로딩)

int sum_int(int a, int b) {
	return a + b;
}

float sum_float(float a, float b) {
	return a + b;
}

void main(void) {
	cout << sum_int(1, 2) << sum_float(1.1f, 2.3f) << endl;
}