﻿#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void) {
	vector<string> jy;

	// 미리 백터의 크기를 지정하는 것이 좋다. (성능.. 속도와 저장공간)
	jy.reserve(100);

	// 요소 추가
	jy.push_back("윤주영");
	jy.push_back("주영");
	jy.push_back("영");
	jy.push_back("영이");
	jy.push_back("주영이");

	// 요소 접근
	cout << jy[0] << "과 " << jy.at(1) << endl;
	cout << jy[0] << "과 " << jy.at(2) << "이 " << endl << endl;

	// 요소 수정
	jy[1] = "윤주영이";

	cout << endl;

	// 요소 개수
	cout << jy.at(0) << "을 부르는 방법들" << endl;
	for (int i = 1; i < jy.size(); i++) {
		cout << jy.at(i) << endl;
	}

	// 마지막 요소 삭제
	jy.pop_back();
	cout << jy[0] << "을 부르는 방법들" << endl;

	// vector<string>::iterator iter;
	for (auto iter = jy.begin(); iter != jy.end(); iter++)  // 시작 : begin, 끝의 다음 : end
		cout << *iter << endl;
	
}