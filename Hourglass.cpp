#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int t = 0;
	int n = 0;
	int z = 0;
	char shape;
	cout << "Enter time(in seconds): ";
	cin >> t;
	cout << "Enter character: ";
	cin >> shape;
	n = t * 2 + 2;
	z = n - 1;
	for (int x = 0;x <= t;x++)
	{
		for (int j = 1;j <= (n - 1);j++)
		{
			if (j == 1)
				cout << " ";
			if (j > 1)
				cout << "-";
		}
		cout << endl;

		for (int i = n - 1;i > (n / 2);i--)
		{

			for (int j = n - 1;j >= i;j--)
				cout << " ";
			for (int k = 1;k <= z;k++)
			{
		
				if (k == 1 && k != z)
					cout << "\\";
				else if (k == z && k != 1)
					cout << "/";
				else 
				{
					if (x == 0)
						cout << shape;
					else if (x + i >= n)
						cout << " ";
					else if (x + i < n)
						cout << shape;
					else if (x == n - 1)
						cout << " ";
				}

			}
			z -= 2;

			cout << endl;
		}
		for (int i = 1;i < (n / 2);i++)
		{
			for (int j = n / 2;j > i;j--)
			{

				cout << " ";
			}
			for (int k = 1;k <= z + 2;k++)
			{

				if (k == 1 && k != z + 2)
					cout << "/";
				else if (k == z + 2 && k != 1)
					cout << "\\";
				else if (k != 1)
				{
					if (x == 0)
						cout << " ";
					else if (x+ i >= n/2 )
						cout << shape;
					else
						cout << " ";
				}
			}
			z += 2;
			cout << endl;

		}
		for (int j = 1;j <= (n - 1);j++)
		{
			if (j == 1)
				cout << " ";
			if (j > 1)
				cout << "-";
		}
		cout << endl;
		cout << "The above hour glass represents " << x << " seconds.";
		cout << endl;
		Sleep(1000);
	}
	system("pause");
	return 0;
}