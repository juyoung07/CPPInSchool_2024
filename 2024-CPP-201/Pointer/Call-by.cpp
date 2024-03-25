#include <iostream>
using namespace std;

void call_by_value(int a) {

	// 새로운 지역변수 a를 만들고 값을 넣음

	a = 10;
}

int main(void) {
	
	int num = 3;
	
	// num의 값이 바뀌지 않음
	call_by_value(num);
	cout << num << endl;

	return 0;
}