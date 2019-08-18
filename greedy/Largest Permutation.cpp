#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long   p;


void swapk(p arr[], p n, p k)
{
    int dum[n+1];

    for (int i = 0; i < n; ++i)
        dum[arr[i]] = i;

    for (int i=0; i<n && k; ++i)
    {
        if (arr[i] == n-i)
            continue;

        int t = dum[n-i];


        dum[arr[i]] = dum[n-i];
        dum[n-i] = i;


        swap(arr[t], arr[i]);


        --k;
    }
}

int main()
{
    p  n,k;
    cin>>n>>k;
    p a[n];
    for(long  i=0;i<n;i++){
        cin>>a[i];
    }
    swapk(a,n,k);
for(long  i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
