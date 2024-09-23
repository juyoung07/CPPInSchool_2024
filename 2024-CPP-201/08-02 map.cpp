#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void main(void) {
	map<string, int> guardian;

	guardian["김신"] = 939;
	guardian["지은탁"] = 19;
	guardian["이동욱"] = 300;
	guardian["김선"] = 27;
	guardian["유덕화"] = 25;

	// 요소 접근
	cout << "김신의 나이 : " << guardian["김신"] << endl;
	cout << "이동욱의 나이 : " << guardian["이동욱"] << endl;

	// 요소 수정
	guardian["지은탁"] = 29;
	cout << endl;
	
	// 요소 개수
	cout << "요소 개수 : " << guardian.size() << endl;

	// first : key, second : value
	map<string, int>::iterator it;
	for (it = guardian.begin(); it != guardian.end(); it++)  // 시작 : begin, 끝의 다음 : end
		cout << "이름 : " << it->first << ", 나이 : " << it->second << endl;
	
}