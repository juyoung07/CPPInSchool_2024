#include <iostream>
#include <string>
using namespace std;

class Person {
public: 
	Person(string name, int age)
		: name_(name), age_(age) {}

	void show_person() {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

// Person의 자식(파생) 클래스
class Student : public Person {
public: 
	// 부모(기본) 클래스 생성자가 먼저 호출되어야 함
	Student(int id, string name, int age) : Person(name, age), id_(id)
	{
	}

	void show_person() {
		cout << "학번 : " << id_ << endl;
		Person::show_person();
	}

private:
	int id_;
};

int main(void) {

	// stu 객체 동적 할당
	Student* stu = new Student(2115, "윤주영", 18);

	stu->show_person();

	delete stu;
	
	return 0;
}