// common_multiple.cpp
#include <iostream>
using namespace std;

//int dif(const int num);
double input(double dif[]);
int calculate(int a,int b);

int main()
{
	/*
	int num;

	dif(num);
	*/

	const int num=2;

	double dif[num];

	input(dif[num]);
	calculate();

	cin.get();
	return 0;
}

/*
int dif(int num)
{
	cout<<"���{�������߂�v�f������͂��Ă��������F ";
	cin>>num;
	return num;
}
*/

double input(double dif[])
{
	cout<<"1�߂̐�������͂��Ă��������F ";
	cin>>dif[0];
	cout<<"2�߂̐�������͂��Ă��������F ";
	cin>>dif[1];
	return dif[0],dif[1];
}