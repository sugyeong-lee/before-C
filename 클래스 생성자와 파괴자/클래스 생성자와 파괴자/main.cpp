#include <iostream>
#include "Stock.h"

int main() {

	cout << "�����ڸ� �̿��� ��ü ����\n";
	Stock temp("Panda", 100, 1000);

	cout << "����Ʈ �����ڸ� �̿��Ͽ� ��ü ����\n";
	Stock temp2;

	cout << "temp�� temp2 ���\n";
	temp.show();
	temp2.show();

	cout << "�����ڸ� �̿��Ͽ� temp ���� �缳��\n";
	temp = Stock("Coding", 200, 1000);

	cout << "�缳���� temp ���\n";
	temp.show();

	return 0;

}