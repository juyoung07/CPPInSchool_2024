//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//class Student {
//public:
//	// ex) name: "윤주영"
//	Student(int grade, const char* name)
//		: grade_(grade)
//	{
//		this->grade_ = grade;
//		// 동적할당 (new)
//		name_ = new char[18];
//		// 동적할당된 위치(name_)에 "윤주영"(name)을 복사한다
//		strcpy(name_, name);
//		cout << "생성자 호출 완료" << endl;
//	}
//
//	Student() {}
//
//	//TODO :  얕은 복사로 인해 같은 주소의 공간을 두 번 사게 시도
//	Student(const Student& rhs) 
//		: grade_(rhs.grade_), name_(rhs.name_)
//	{
//		cout << "복사 생성자 호출" << endl;
//	}
//	
//	// 소멸자 : 객체가 사라질 때(메모리 공간이 해제될 때) 호출되는 함수
//	~Student() {
//		delete []name_;
//		cout << "소멸자 호출 완료" << endl;
//	}
//
//	void print(void) {
//		cout << "학번: " << grade_ << ", 이름: " << name_ << endl;
//	}
//
//private:
//	int grade_;
//	char* name_;
//};
//
//void main(void) {
//	Student stu = Student(2115, "윤주영");
//	Student stu2 = stu;
//}