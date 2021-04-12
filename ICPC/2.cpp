#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

using namespace std;

void fasterIO() {
    fast_io;
}

int main()
{
    fasterIO();


    ll t,a,b,m;

    cin>>t;

    ll count=0;

    for(ll i=1;i<=t;i++)
    {
        cin>>a>>b>>m;
        for(ll j=0;j<=m;j++)
        {
            if(((a+j)%2==1 && (b+j)%2==1))
            {
                count++;
                continue;
            }
            else if((b+j)%(a+j)!=0)
            {
                count++;
            }
        }
        cout<<"Case "<< i <<": "<<count<<endl;
        count=0;
    }

    return 0;
}
