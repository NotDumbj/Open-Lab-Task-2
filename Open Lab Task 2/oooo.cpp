#include<iostream>
using namespace std;

int main()
{
	cout << "PRIME NUMBER GENERATOR";
	cout << "\n\nChoose one option;";
	cout << "\nCheck Prime Number in:   1. Range\n                         2. Individual";
	cout << "\nYour option no. = ";
	int option;
	cin >> option;
	if (option == 1)
	{
		cout << "Range Selected";
		cout << "\nStart of Range = ";
		int sOrange;
		cin >> sOrange;
		cout << "\End of Range = ";
		int eOrange;
		cin >> eOrange; 

		for (int i = sOrange; i <= eOrange; i++)
		{
			cout << "The Prime Number In This Range Are = ";
			
			for (int j = 1; j <= i; j++)
			{
				i % j =
			}

		}
	}
	return 0; 
}
