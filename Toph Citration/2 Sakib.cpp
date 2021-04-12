#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int na[n],qa[q],r[q];
    for(int i=0;i<n;i++)
    {
        cin>>na[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>qa[i];
    }
    for(int i=0;i<q;i++)
    {

        if(na[qa[i]-1]==0)
        {
            cout<<"Dead"<<endl;
        }
        else
        {
            for(int j=qa[i];j<n;j++)
            {
              if(na[j]>0)
              {
                  na[j]=na[j]-1;
              }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<na[i]<<" ";
    }
}
