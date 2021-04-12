#include<iostream>

using namespace std;


bool isPrime(int n)
{
	if (n == 1) return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % 2 == 0)
		{
			return false;
		}
	}
	return true;
}



int main()
{

	int t, a;

	cin >> t;

	while (t--)
	{

		scanf("%d", &a);

		if (isPrime(a))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}

	return 0;
}
