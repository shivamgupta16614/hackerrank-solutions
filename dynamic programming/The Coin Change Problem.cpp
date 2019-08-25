#include<bits/stdc++.h>

using namespace std;

long count( long S[], long m, long n )
{
    long i, j, x, y;

    long table[n + 1][m];

    for (i = 0; i < m; i++)
        table[0][i] = 1;


    for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0;


            y = (j >= 1) ? table[i][j - 1] : 0;


            table[i][j] = x + y;
        }
    }
    return table[n][m - 1];
}
int main()
{ long m,n;
cin>>n>>m;
long arr[m];
for(long i=0;i<m;i++){cin>>arr[i];}

    cout << count(arr, m, n);
    return 0;
}
