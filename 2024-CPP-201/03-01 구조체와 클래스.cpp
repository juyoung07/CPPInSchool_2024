#include <iostream>
#include <string.h>

using namespace std;

// 구조체는 default가 public
struct Student {
	int grade_;
	string name_;
};

void main(void) {
	struct Student juyoung;

	juyoung.grade_ = 2115;
	juyoung.name_ = "윤주영";
	
}