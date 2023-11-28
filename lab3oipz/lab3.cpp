#include <iostream>
#include <cmath>
using namespace std;

void checkValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect input";
	}
}

void checkValidParams(int n)
{
	if (n < 2)
	{
		throw "Input correct data";
	}
}

int calculate(int n, int x)
{
	if (x >= 0)
	{
		int y = 0;
		for (int i = 1; i <= n - 2; i++)
		{
			y += (i - x) * (i - x);
		}
		return y;
	}
	else
	{
		int y = 0;
		for (int i = 0; i <= n; i++)
		{
			int p = 1;
			for (int j = i; j <= n - 1; j++)
			{
				p *= i * i + j;
			}
			y += p;
		}
		return y;
	}
}

int main()
{
	int x, n;
	try
	{
		cout << "Input n: ";
		cin >> n;
		cout << "Input x: ";
		cin >> x;
		checkValidInput();
		checkValidParams(n);
		cout << "x= " << x << " " << "y= " << calculate(n, x) << endl;

	}
	catch (const char* ex)
	{
		cout << ex << endl;
		return -1;
	}
	catch (...)
	{
		cout << "Unknown error" << endl;
		return -2;
	}
}