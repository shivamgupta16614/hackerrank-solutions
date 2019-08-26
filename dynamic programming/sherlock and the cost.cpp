#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    int a[100000];
    int b[100000][2];
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        b[0][0] = 0;
        b[0][1] = 0;
        for (int i=1;i<n;i++)
        {
            b[i][0] = max(b[i-1][0], b[i-1][1] + (a[i-1]-1));
            b[i][1] = max(b[i-1][0] + a[i] - 1, b[i-1][1] + abs(a[i] - a[i-1]));
        }
        cout<<max(b[n-1][0], b[n-1][1])<<endl;
    }
    return 0;
}
