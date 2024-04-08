#include <iostream>
#include <string.h>

using namespace std;

// 클래스는 default가 private
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 반환형이 없음
	Student(int grade, string name) {
		grade_ = grade;
		name_ = name;
	}
private:
	// 이름 구분을 위해 _를 씀
	// 직접적으로 접근하진 못함
	int grade_;
	string name_;
};

void main(void) {
	// 매개변수가 없는 생성자를 호출
	// Student juyoung = Student();
	Student juyoung = Student(2115, "윤주영");	
	
}