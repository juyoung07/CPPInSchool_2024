#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;
public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name) {
		num_++;
	}

	static int* get_num_address(void) { return &num_; }
	static int get_num(void) { return num_; }
	int* get_gam_address(void) { return &gam_; }
	int get_gam(void) { return gam_; }
};
// static 멤버변수는 밖에서
int PrettyJ::num_ = 0;

int main(void) {
	PrettyJ* jihye = new PrettyJ(508, "지혜");
	PrettyJ* juyoung = new PrettyJ(509, "주영");
	PrettyJ* jungmin = new PrettyJ(716, "정민");
	cout << "현재 멤버 인원은 : " << PrettyJ::get_num() << endl;

	PrettyJ* jiwoo = new PrettyJ(601, "지우");
	cout << "현재 멤버 인원은 : " << PrettyJ::get_num() << endl;

	cout << "지혜의 gam 주소" << jihye->get_gam_address() << endl;
	cout << "주영의 gam 주소" << juyoung->get_gam_address() << endl;
	cout << "정민의 gam 주소" << jungmin->get_gam_address() << endl;
	cout << "지우의 gam 주소" << jiwoo->get_gam_address() << endl << endl;

	cout << "지혜의 num 주소" << jihye->get_num_address() << endl;
	cout << "주영의 num 주소" << juyoung->get_num_address() << endl;
	cout << "정민의 num 주소" << jungmin->get_num_address() << endl;
	cout << "지우의 num 주소" << jiwoo->get_num_address() << endl << endl;

	delete jiwoo;
	delete jungmin;
	delete juyoung;
	delete jihye;
}