#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock
{
	// 추상화와 클래스
	// 데이터형이란 무엇인가?
	// 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
	// 클래스란?
	// 추상화를 사용자 정의 데이터형으로 변환해주는 수단
	// 추상화란?
	// 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결항 방식으로, 이해하기 쉽게 표현하는 것

	/*
	1. 클래스 선언
	2. 클래스 매서드 정의
	*/

	/*
	- public
	공개 멤버, 클래스 / 외부에서도 접근 가능

	- private
	비공개 멤버 / 클래스 내에서만 접근 가능
	*/

private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock();
	~Stock();
};

#endif // !STOCK
