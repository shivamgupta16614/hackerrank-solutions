#include <bits/stdc++.h>
using namespace std;
int min(long long  a[], int n){
    sort(a,a+n);
    int mi =INT_MAX;
    for(long i=0;i<n-1;i++){
        int x = abs(a[i]-a[i+1]);
        if(mi>x){mi=x;}
    }
    return mi;
}
int main(){
    long n;
    cin>>n;
    long long a[n];
    for(long i=0;i<n;i++){cin>>a[i];}
    cout<<min(a,n);
}
