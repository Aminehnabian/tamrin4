#include <iostream>
using namespace std;
void khayam(int n);

int main()
{
	int n;
	cout << "please enter the number : ";
	cin >> n;

	khayam(n);

	system("pause");

	return 0;
}

void khayam(int n)
{
	int A[10][10];
	for (int row = 0; row < n; row++)
	{
		for (int i = 0; i <= row; i++)
		{
			if (row == i || i == 0)
			{
				A[row][i] = 1;
			}
			else
			{
				A[row][i] = A[row - 1][i - 1] + A[row - 1][i];
			}
			cout << A[row][i] << " ";
		}
		cout << "\n";
	}
}