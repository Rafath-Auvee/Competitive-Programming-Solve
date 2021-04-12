#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

#define ll long long
using namespace std;
void fasterIO() {
	fast_io;
}



ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    fasterIO();

    ll t,a,b,m;

    cin>>t;

    ll count=0;

    for(ll tt=1;tt<=t;tt++)
    {
        cin>>a>>b>>m;
        for(ll ttt=0;ttt<=m;ttt++)
        {
            if(gcd(a+ttt,b+ttt)==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }


}
