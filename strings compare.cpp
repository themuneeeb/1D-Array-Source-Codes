#include<iostream>
using namespace std;

bool COMPARE(char A[], char B[], int i)
{
	for (int j = 0; j < i; j++)
	{
		if (A[j] != B[j])
			return false;
	}
	return true;
}

int main()
{
	char Array1[1000] = { 0 };
	char Array2[1000] = { 0 };
	cout << "Enter String No.1:\t";
	cin >> Array1;
	cout << "Enter String No.2:\t";
	cin >> Array2;
	int i = 0;
	while (Array1[i] != '\0')
	{
		i++;
	}
	int j = 0;
	while (Array2[j] != '\0')
	{
		j++;
	}
	cout << i << "   " << j;
	if (i != j)
	{
		cout << "Strings are not equal.";
		return 0;
	}
	else
	{
		bool x = COMPARE(Array1, Array2, i);
		if (x == true)
		{
			cout << "\nStrings are equal,";
		}
		else
		{
			cout << "\nStrings are not equal.";
		}
	}
}