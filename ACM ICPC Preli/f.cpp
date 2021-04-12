#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef long long int ll;

void fasterIO() {
	fast_io;
}
const int mod = 1e9 + 7;

ll bigmod(ll a, ll b, ll m) {
	if (b == 0) return 1;
	long long x = bigmod(a, b / 2, m);
	x = (x * x) % mod;
	if (b % 2 == 1) x = (x * a) % mod;
	return x;
}

ll gcd(ll a, ll b)
{
	if (a % b == 0)
	{
		return b;
	}
	return gcd(b, a % b);
}

int main()
{
	fasterIO();

	ll a, b, m;
	cin >> a >> b >> m;
	ll cd = bigmod(a, b, m);
	cout << cd << endl;



	return 0;
}


