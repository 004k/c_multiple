//test comments

// common_multiple.cpp
#include <iostream>
using namespace std;

//int dif(const int num);
int input(int dif[2]);
int lcm(int dif[2]);

int main()
{
	/*
	int num;

	dif(num);

	const double num=2;
	*/

	int dif[2];

	input(dif);
	lcm(dif);	//�ŏ����{��

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

int input(int dif[2])
{
	cout<<"1�߂̐�������͂��Ă��������F ";
	cin>>dif[0];
	cout<<"2�߂̐�������͂��Ă��������F ";
	cin>>dif[1];
	return dif[0],dif[1];
}

int lcm(int dif[2])
{