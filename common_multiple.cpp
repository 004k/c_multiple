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
	cout<<"���{�������߂�v�f������͂��Ă��������F ";
	cin>>num;
	return num;
}

int input(int a[num])
{
	cout<<"1�߂̐�������͂��Ă��������F ";
	cin>>a;
	cout<<"2�߂̐�������͂��Ă��������F ";
	cin>>b;
	return a,b;
}