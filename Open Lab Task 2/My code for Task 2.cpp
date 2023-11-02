#include<iostream>
using namespace std;

int main()
{
	int choice, count, j;
	do
	{
		cout << "PRIME NUMBER CHECKER";
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

			cout << "The Prime Number In This Range Are = ";

			for (int i = sOrange; i <= eOrange; i++)
			{
				count = 0;
				for (j = 1; j <= i; j++)
				{
					if (i % j == 0)
					{
						count++;
					}
				}
				if (count == 2)
				{
					cout << i << " ";
				}
			}
		}
		if (option == 2)
		{
			cout << "Individual Selected";
			cout << "\nEnter your Number = ";
			int num;
			cin >> num;
			count = 0;
			for (j = 1; j <= num; j++)
			{
				if (num % j == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				cout << num << " is a Prime Number";
			}
			else
			{
				cout << num << " is not a Prime Number";
			}
		}
		cout << "\n\nDo you want the Program to run again\n";
		cout << "Press 1 to run again";
		cout << "\nPress 0 to quit";
		cout << "\nYour Choice = ";
		cin >> choice;
		cout << endl;
	} while (choice == 1);
	return 0; 
}
