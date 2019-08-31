#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int x=0;
    map <int,int> m;
    for(int i=0;i<n/2;i++){

        if(s.at(i)!=s.at(n-i-1)){x++;
        if(int(s.at(i))>int(s.at(n-i-1))){
          m[i]++;
          s.at(n-i-1)=s.at(i);
        }
        else {s.at(i)=s.at(n-i-1);m[i]++;}}
    }
    if(x>k){cout<<-1;}
    else {
        int y=x;
        int i=0;
 x=k-x;
    while(x>1 && i!=n/2){
      auto it=m.find(i);
         if(s.at(i)!='9'){ s.at(i)='9';
      s.at(n-i-1)='9';
      x=x-2; if(it!=m.end()){x++;}}
      i++;


    }
     i=0;
    if(x==1 && y>1){
        while(i!=n/2){
          auto it=m.find(i);
         if(it!=m.end()) {s.at(i)='9';
      s.at(n-i-1)='9';x--;}i++;
    }}

    if(n%2!=0){if(x==1){s.at(n/2)='9';}}
    cout<<s;}


    }
