#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long p;
int main(){
    long n;
    cin>>n;
    p k,a[n];
    cin>>k;
    for(long i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    p sum=0;
    int i;
    for( i=0;i<n;i++){
     if(sum>=k){break;}
      sum=sum+a[i];
    }
    cout<<i-1;

}
