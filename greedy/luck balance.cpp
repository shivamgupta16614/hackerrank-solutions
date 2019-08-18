#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int x,y,j,a[k];
    j=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        sum=sum+x;
        if(y==1){a[j]=x;j++;}
    }
    sort(a,a+j);
    for(int i=0;i<(j-k);i++){
        sum=sum-2*a[i];

    }

cout<<sum;
}
