// common_multiple.cpp
#include <iostream>
using namespace std;

int dif(const int num);
int input(int a,int b);
int calculate(int a,int b);

int main()
{
	int num;

	dif(num);

	int*a =new int[num];

	input(a[num]);
	calculate();

	delete[] a;

	cin.get();
	return 0;
}

int dif(int num)
{
	cout<<"公倍数を求める要素数を入力してください： ";
	cin>>num;
	return num;
}

int input(int a[num])
{
	cout<<"1つめの整数を入力してください： ";
	cin>>a;
	cout<<"2つめの整数を入力してください： ";
	cin>>b;
	return a,b;
}