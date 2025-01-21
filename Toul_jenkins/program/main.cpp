#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void divi(int a,int b);

int main()
{
	int num1, num2, Answer;
	int a;
		srand((unsigned int)time(NULL));
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		a = rand() % 4 + 1;

		switch (a)
		{
		case(1)://足し算
			add(num1,num2);
			break;
		case(2)://引き算
			sub(num1, num2);
			break;
		case(3)://掛け算
			mul(num1, num2);
			break;
		case(4)://割り算
			divi(num1, num2);
			break;
		}
	return 0;
}