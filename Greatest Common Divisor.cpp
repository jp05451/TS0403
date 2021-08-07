#include<iostream>
using namespace std;

//int GCD(int a, int b,int com);
int GCD(int a, int b);
int main()
{
				int a, b;
				while (cin >> a)
				{
								cin >> b;
								/*if (a < b)
												swap(a, b);
								cout << GCD(a, b, b) << endl;*/
								cout << GCD(a, b) << endl;
				}
}
//int GCD(int a, int b,int com)
//{
//				if ((a % com == 0 && b % com == 0))
//								return com;
//				else
//								GCD(a, b, com - 1);
//}
int GCD(int a, int b)
{
				if (b == 0)
								return a;
				else
								GCD(b, a % b);
}
