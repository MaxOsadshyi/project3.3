// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double R1; // ������� ��������
	double R2; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -2 * R1)
		y = x;
	else
		if (-2*R1<x&&x<=0)
			y = sqrt(R*R-(x+R1)* (x + R1));
		else
			if (0 < x && x <= 2*R2)
				y =sqrt(R*R-(x-R2)* (x - R2));
			else
				if (2*R2 < x && x <= 6)
					y =  (- x + 2 * R2)/(6-2*R2);
				else
					y = -1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}