#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef long long int ll;
typedef long long  l;


int main()
{

    int n,t;

    cin >> t ;



    for (int i = 1; i <= t ; i++)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int c;
        for (int i = 1; i<=n ; i++)
        {
            for(int j= i+1;j<=n;j++)
            {
                if(arr[i] == arr[j])
                {
                    break;
                }
                else
                {
                    c = i;
                    cout << c << endl;
                }

            }

        }


    }


    return 0;
}

