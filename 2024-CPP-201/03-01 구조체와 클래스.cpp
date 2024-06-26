#include <iostream>
#include <string.h>

using namespace std;

// 클래스는 default가 private
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 반환형이 없음
	Student(int grade, string name)
		: grade_(grade), name_(name)
	{
		// this : 객체 자기 자신을 가리키는 포인터
		this->grade_ = grade;
	}

	// 생성자 오버로딩
	Student()
		: grade_ (2121), name_("JWP")
	{
	}


	// 객체의 멤버를 출력하는 함수
	void print(void) {
		cout << "학번: " << grade_ << ", 이름: " << name_ << endl;
	}
private:
	// 이름 구분을 위해 _를 씀
	// 직접적으로 접근하진 못함
	int grade_;
	string name_;
};

void main(void) {
	Student* stu = new Student[3]{
		{2115, "윤주영"},
		{2121, "JWP"},
		{2104, "위즈덤"}
	};
	
	for (int i = 0; i < 3; i++)
		stu[i].print();

	// 동적할당된 배열 해제
	delete []stu;
}