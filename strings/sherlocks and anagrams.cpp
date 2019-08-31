#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     map <string,int> m;
     string s;
     cin>>s;
   int   n=s.length();
     for(int i=0;i<n;i++){
         for(int j=1;j<n-i+1;j++){
             string t=s.substr(i,j);
             sort(t.begin(),t.end());
             m[t]++;
         }
     }
     unsigned int ans=0;
     map<string, int>::iterator it ;
     for(it=m.begin();it!=m.end();it++){
         ans += (it->second) * (it->second - 1) / 2;}
        cout << ans << endl;
     }}
