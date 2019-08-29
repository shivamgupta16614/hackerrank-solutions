#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
             b[i]=i+1;
        }
        for(int i=0;i<(n-2);i++){
            int x=0;
            int j=i;
            while(a[j]!=b[i]){
                j++;
                x++;
            }
            if(x!=0){
            while(j!=1 && x!=0 && x!=1){
                int h=a[j-2];
                a[j-2]=a[j];
                a[j]=a[j-1];
                a[j-1]=h;
                j=j-2;
                x=x-2;
            }
            if(x==1){
                int h =a[j-1];
                a[j-1]=a[j];
                a[j]=a[j+1];
                a[j+1]=h;
            }}

        }
        if(a[n-1]!=b[n-1]){cout<<"NO"<<endl;}
        else cout<<"YES"<<endl;
    }

}
