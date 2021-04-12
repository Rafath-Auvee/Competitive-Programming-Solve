#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void fasterIO() {
	fast_io;
}

int main()
{
	fasterIO();

	int t, a, b, c, d;

    long long int result;

	scanf("%d", &t);

	for(int i = 1;i<=t;i++)
    {

        scanf("%d", &d);

        if(d==2)
        {
            scanf("%d%d", &a,&b);
            result = a * b;
        }
        else
        {

            scanf("%d", &c);
            result = c * c;
        }
        cout << "Case " << i <<": " << result << endl;
    }


	return 0;
}
