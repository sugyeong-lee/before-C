#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock
{
	// �߻�ȭ�� Ŭ����
	// ���������̶� �����ΰ�?
	// ���������� ������� ��� ������ ������ �� �ִ°�?
	// Ŭ������?
	// �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	// �߻�ȭ��?
	// ��� ��ü�� ��������� ǥ���ϴ� ���� �ƴ϶�, ����� Ư¡�� ������ �������, �����ϱ� ���� ǥ���ϴ� ��

	/*
	1. Ŭ���� ����
	2. Ŭ���� �ż��� ����
	*/

	/*
	- public
	���� ���, Ŭ���� / �ܺο����� ���� ����

	- private
	����� ��� / Ŭ���� �������� ���� ����
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
