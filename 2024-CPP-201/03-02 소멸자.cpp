#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
	// ex) name: "윤주영"
	Student(int grade, char* name)
		: grade_(grade), name_(name)
	{
		this->grade_ = grade;
		// 동적할당 (new)
		name_ = new char[18];
		// 동적할당된 위치(name_)에 "윤주영"(name)을 복사한다
		strcpy(name_, name);
	}

	Student() {}

	// 소멸자 : 객체가 사라질 때(메모리 공간이 해제될 때) 호출되는 함수
	~Student() {
		delete []name_;
		cout << "소멸자 호출 완료" << endl;
	}

	void print(void) {
		cout << "학번: " << grade_ << ", 이름: " << name_ << endl;
	}

private:
	int grade_;
	char* name_;
};

void main(void) {
	Student *stu = new Student(2115, (char*)"윤주영");

	cout << "사필규정" << endl;		// 최규정 선생님 사랑합니다.

	delete stu;

	cout << "고진감래" << endl;		// 가보자고~
}