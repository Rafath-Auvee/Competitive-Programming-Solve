#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef long long int ll;

void fasterIO() {
	fast_io;
}


int main()
{
	fasterIO();
	int p=1,n;
	cin>>n;
	p=p+(n/6);
	cout<<p << endl;
	return 0;
}

