#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long n,k;
    cin>>n>>k;
    unsigned long long a[n];
    for(long i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int diff;
    int y=INT_MAX;
    for(long i=0;i<n-k+1;i++){
       diff=(a[i+k-1]-a[i]);
       y=min(diff,y);
    }
    cout<<y;
}
