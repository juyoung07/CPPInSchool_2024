#include <iostream>
#include <string.h>

using namespace std;

// 클래스는 default가 private
class Student {
	int grade_;
	string name_;
};

void main(void) {
	Student juyoung;

	juyoung.grade_ = 2115;
	juyoung.name_ = "윤주영";
	
}