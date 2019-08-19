#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    unsigned long a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    unsigned long long sum;
    int x=1;
    int p=0;
    for(int i=n-1;i>=0;i--){
         if(p==k){x++;p=0;}
         sum=sum+x*a[i];
         p++;

    }
    cout<<sum;

}
