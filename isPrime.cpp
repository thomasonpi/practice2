#include <iostream>
using namespace std;

int main()
{
	int value = 0;
	int i;
	do 
	{
		cout << "please enter a value \n";
		cin >> value;
		for (i= value -1; i > 1; i--)
		{
		if (value % i ==0){
		cout << "not prime! \n";
		break;
		}
		}
		if (i==1)
			cout << value << "is prime!\n";
	}while (value != 0);
	cout << '\n';
	return 0;
}
