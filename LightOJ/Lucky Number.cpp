#include<bits/stdc++.h>
using namespace std;

void lucky_numbers(int n)
{
    static int counter = 2;

    int np = n;

    if(counter > n)
    {
        return ;
    }
    if(n % counter == 0)
    {
        return ;
    }


    bool luck[n];

    memset(luck,true, sizeof(luck));
    for (int p =1;p<=n;p++)
    {
        if(luck[n] == true)
        {
            for(int j = 1; j <= np ; j++)
            {
                np = np - np / counter;
                counter++;
                //luck[j] = false;
                cout << np << " " ;
            }
        }
    }

}

void fasterIO()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fasterIO();
    lucky_numbers(15);
}
