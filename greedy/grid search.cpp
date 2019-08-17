#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               cin>>a[i][j];
            }
        }
        for(int j=0;j<n;j++){
            sort(a[j],a[j]+n);
        }
        int i,j,x;
        x=0;

        for( i=0;i<n-1;i++){
            for( j=0;j<n;j++){
             if(a[i][j]>a[i+1][j]){x=1;break;}
            }if(x==1)break;
        }
        if(x==1)cout<<"NO"<<endl;
        else {cout<<"YES"<<endl;}

    }
}
