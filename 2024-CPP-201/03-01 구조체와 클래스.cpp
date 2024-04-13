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
	// 동적할당 : heap 영역에 할당. 실행시간(run time)에 메모리 크기 결정
	Student* juyoung = new Student(2115, "윤주영");
	// 정적할당 : stack 영역에 할당. 컴파일 시간에 메모리 크기 결정
	Student jwp = Student();
	
	(*juyoung).print();
	jwp.print();

	// 동적할당된 메모리 해제
	delete juyoung;
}