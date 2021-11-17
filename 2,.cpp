#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "please enter n : ";
	cin >> n;
	cout << "please enter m : ";
	cin >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int k = 0; k < 8*m; k++)
		{
			cout << "_";
		}
		cout << "\n";
		for (int j = 1; j <= m; j++)
		{
			int x;
			x = i * j;
			cout << x << "\t";
		}
		cout << "\n";
	}
	
	system("pause");
}