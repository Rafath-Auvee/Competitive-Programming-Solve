#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n,c;
	cin>>n;

	for(long long int i = n+1;; i++)
    {
        if(__gcd(n, i) == 1)
        {
            c = i;
            break;
        }
    }
    cout << c << endl;

	return 0;
}
