#include <iostream>
#include "function.h"

using namespace std;



int Mainmenu() {
	system("cls");
	cout << "*********************\n";
	cout << "CAC BAI TAP DA LAM\n";
	cout << "*********************\n";
	cout << "1. Tinh toan co ban\n";
	cout << "2. Kiem tra so\n";
	cout << "3. Thoat\n";
	return 3;
}

int Submenu1() {
	system("cls");
	cout << "*********************\n";
	cout << "CAC PHEP TINH CO BAN\n";
	cout << "*********************\n";
	cout << "0. Quay tro ve menu chinh\n";
	cout << "1. Phep cong\n";
	cout << "2. Phep tru\n";
	cout << "3. Phep nhan\n";
	cout << "4. Phep chia\n";
	cout << "5. Thoat\n";
	return 5;
}

int Submenu2() {
	system("cls");
	cout << "*********************\n";
	cout << "KIEM TRA SO" << endl;
	cout << "*********************\n";
	cout << "0. Quay tro ve menu chinh\n";
	cout << "1. Kiem tra so nguyen to\n";
	cout << "2. Kiem tra so chinh phuong\n";
	cout << "3. Kiem tra so hoan hao\n";
	cout << "4. Thoat\n";
	return 10;
}

int SelectCommand(int Lenh)
{
	bool check;
	int  n;
	do
	{
		cout << "Choose your option: ";
		cin >> n;
		check = cin.fail();
		if (check == true)
		{
			cin.clear();
			cin.ignore();

		}
	} while (check == true || n > Lenh || n < 0);
	return n;
}

int RunMainMenu(int Lenh)
{
	if (Lenh == 1)
	{
		int lenh;
		int check = 0;
		do
		{
			lenh = SelectCommand(Submenu1());
			check = RunSubMenu1(lenh);
		} while (check != 5);
	}
	else if (Lenh == 2)
	{
		int lenh;
		int check = 0;
		do
		{
			lenh = SelectCommand(Submenu2());
			check = RunSubMenu2(lenh);
		} while (check != 5);
	}
	else if (Lenh == 3)
	{
		bool check = true;
		char c;
		do {
			cout << "Press Y to exit: ";

			cin >> c;
			check = cin.fail();
			if (check)
			{
				cin.ignore();
				cin.clear();
			}

		} while (check);
		if (c == 'y')
		{
			return 3;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int RunSubMenu1(int Lenh) {
	int a, b;

	switch (Lenh) {
	case 0:
		return 5;
	case 1:
		InputTwoNums(a, b);
		cout << "Ket qua phep cong la: " << a + b << endl;
		system("pause");
		break;
	case 2:
		InputTwoNums(a, b);
		cout << "Ket qua phep tru la: " << a - b << endl;
		system("pause");
		break;
	case 3:
		InputTwoNums(a, b);
		cout << "Ket qua phep nhan la: " << a * b << endl;
		system("pause");
		break;
	case 4:
		InputTwoNums(a, b);
		if (b == 0)
		{
			cout << "Error div/0" << endl;
		}
		else
		{
			cout << "Ket qua phep chia la: " << (a * 1.0) / b << endl;
			break;
		}
	case 5:
		bool check = true;
		char c;
		do {
			cout << "Press Y to exit: ";
			cin >> c;
			check = cin.fail();
			if (check)
			{
				cin.ignore();
				cin.clear();
			}

		} while (check == true);
		if (c == 'y')
		{
			return 5;
		}
		else
		{
			return -1;
		}
		break;
	}
}

int RunSubMenu2(int Lenh)
{
	int a;

	switch (Lenh) {
	case 0:
		return 5;
	case 1:
		InputOneNum(a);
		if (isPrime(a) == 1) cout << a << " la so nguyen to " << endl;
		else cout << a << " khong la so nguyen to " << endl;
		system("pause");
		break;
	case 2:
		InputOneNum(a);
		if (isSquareNum(a) == 1) cout << a << " la so chinh phuong" << endl;
		else cout << a << " khong la so chinh phuong" << endl;
		system("pause");
		break;
	case 3:
		InputOneNum(a);
		if (isPerfectNum(a) == 1) cout << a << " la so hoan hao" << endl;
		else cout << a << " khong la so hoan hao" << endl;
		system("pause");
		break;
	case 4:
		bool check = true;
		char c;
		do {
			cout << "Press Y to exit: ";
			cin >> c;
			check = cin.fail();
			if (check)
			{
				cin.ignore();
				cin.clear();
			}

		} while (check == true);
		if (c == 'y')
		{
			return 5;
		}
		else
		{
			return -1;
		}
		break;
	}

}

void InputTwoNums(int& a, int& b)
{
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	cout << "Nhap vao so thu hai: ";
	cin >> b;
}

void InputOneNum(int& a)
{
	cout << "Nhap vao so can tinh: ";
	cin >> a;
}

int isPrime(int n) {
	if (n < 2) return 0;

	else for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}

	return 1;
}

int isSquareNum(int n) {
	for (int i = 1; i * i <= n; i++) {
		if (i * i == n) return 1;
	}

	return 0;
}

int isPerfectNum(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return 1;

	return 0;
}