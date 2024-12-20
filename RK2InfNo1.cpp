#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string IntToBin(int num)
{
	string res;
	string NewRes;
	while (num > 0)
	{
		res += to_string(num % 2);
		num /= 2;
	}
	for (int i = res.length() - 1; i >= 0; i--)
	{
		NewRes += res[i];
	}
	return NewRes;
}

int main()
{
	string A = "101101";
	string B = "110011";
	string C;
	for (int i = 0; i < 6; i++)
	{
		if (A[i] == '1' && B[i] == '1')
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	cout << "" << endl;
	int AInt = stoi(A, nullptr, 2);
	int BInt = stoi(B, nullptr, 2);
	int Sum = AInt + BInt;
	cout << IntToBin(Sum);
}
