#include<bits/stdc++.h>
using namespace std;


long lcs( char *X, char *Y, long m, long n )
{
   long L[m+1][n+1];
   long i, j;

   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   return L[m][n];
}

long max(long a, long b)
{
    return (a > b)? a : b;
}

int main()
{ string s1,s2;
cin>>s1>>s2;

  char X[s1.length()] ;
  char Y[s1.length()] ;
    for(long i=0;i<s1.length();i++){
        X[i]=s1.at(i);
        Y[i]=s2.at(i);
    }

  long n = s1.length();

  cout<< lcs( X, Y, n, n ) ;

  return 0;
}
