#include <iostream>
using namespace std;

void call_by_value(int *a) {
	// a가 가리키고 있는 대상의 값을 바꿈
	*a = 10;
}

int main(void) {
	
	int num = 3;
	
	// num의 값이 바뀜
	call_by_value(&num);
	cout << num << endl;

	return 0;
}