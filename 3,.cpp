#include <iostream>
using namespace std;
int main()
{
	char A[100];
	cout << "please enter your text : ";
	cin.get(A, 100);

	int j = 0;
	int i = 0;
	while (A[i] != '\0')
	{
		if (A[i] == ' ')
		{
			j++;
		}
		i++;
	}

	cout << j + 1;
	system("pause");

}