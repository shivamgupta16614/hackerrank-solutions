#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long x,y,a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>x>>y;
      a[i]=x+y;
      b[i]=a[i];

    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]==b[i]){cout<<j+1<<" ";a[j]=0;}
        }
    }
}
