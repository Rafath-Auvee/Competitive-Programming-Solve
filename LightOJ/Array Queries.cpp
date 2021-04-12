#include<bits/stdc++.h>
#define mx 100001

using namespace std;

#define mx 100001
int arr[mx];
int tree[mx * 4];
int init(int node, int b, int e)
{
    int x,y;
    if (b == e) {
        tree[node] = arr[b];
        return arr[b];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    x = init(Left, b, mid);
    y = init(Right, mid + 1, e);
    tree[node] = min(x, y);
    return tree[node];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min( p1 , p2);
}

int main()
{
    int t;
    int a,b;
    int n,m;

    //freopen("input.txt", "r", stdin);

   // freopen("output.txt", "w", stdout);

    scanf("%d",&t);
    for(int i = 1; i<=t;i++)
    {

        scanf("%d%d",&n,&m);

        for (int i = 1; i <= n; i++) {
			scanf("%d", &arr[i]);
		}

		init(1,1,n);
		cout << "Case " << i << ":" <<endl;

        for(int i = 0; i<m;i++)
        {

            scanf("%d%d",&a,&b);
            printf("%d\n", query(1,1,n,a,b));

        }


    }
    return 0;
}
