#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    map <int , int > m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    int pairs=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(m[x]>0){m[x]--;pairs++;}
    }
    if(pairs==n){cout<<pairs-1;}
    else cout<<pairs+1;
}
