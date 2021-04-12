#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void fasterIO() {
	fast_io;
}


int Divi(int n)
{
    long long int res;
    vector<int> v;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {


            if (n / i == i)

                printf("%d ", i);

            else {

                printf("%d ", i);

                v.push_back(n / i);

            }

        }

    }
    int c1= *max_element(v.begin(), v.end());;
    int c2 = *min_element(v.begin(), v.end());
    res = c1 * c2;
    return res;

}



int main(){
    fasterIO();
   int t;

   cin>>t;
   for(int i =1;i<=t;i++){
    int x,a,b,c;
    long long int n;
    cin>>x;
    while(x==2 ? cin>>a>>b : cin>>c){
        if(x==1){
            n=c*c;
            break;
        }
        else{
            n=a*b;
            break;
        }
    }

    cout<<"Case "<<i<<": "<<Divi(n)<<endl;
   }

    return 0;
}
