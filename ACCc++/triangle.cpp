#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int n = 0;
	cout << "please enter an number:"	;
	cin >> n;
	cout << endl;

	int m = n / 2 + 1;
	for(int i = 0; i != n; ++i)
	{
		for(int j = 0; j != n; ++j)
		{
			if(j == m)
				cout << "*";
			cout << " ";		
		}
		m--;
		cout << endl;
	}
	return 0;
}
