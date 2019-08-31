#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=2;
        if(n==1){x=1;}
        for(int i=2;i<n/2;i++){
            if(n%i==0){x++;}
        }
        if(x%2==0){cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
    }
}
