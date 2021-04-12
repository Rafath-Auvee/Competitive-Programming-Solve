#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void fasterIO() {
	fast_io;
}

int main()
{
	fasterIO();

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a == b && b == c)
	{
		cout << "Equilateral Triangle" << endl;
	}
	else if (a == b || b == c || c == a)
	{
		cout << "Isosceles Triangle" << endl;
	}
	else
	{
		cout << "Bad Triangle" << endl;
	}
	return 0;
}