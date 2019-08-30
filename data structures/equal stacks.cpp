#include <bits/stdc++.h>

using namespace std;

int main(){
    int p,q,r;
    cin>>p>>q>>r;
   vector <int> a,b,c;
    int sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
    a.push_back(x);
    sum1+=a[i];}
    for(int i=0;i<q;i++){
    int x;
        cin>>x;
    b.push_back(x);
    sum2+=b[i];}
    for(int i=0;i<r;i++){
  int x;
        cin>>x;
    c.push_back(x);
    sum3+=c[i];}
    stack <int> d,e,f;
    for(int i=p-1;i>=0;i--){
    d.push(a[i]);}
    for(int i=q-1;i>=0;i--){
    e.push(b[i]);}
    for(int i=r-1;i>=0;i--){
    f.push(c[i]);}

    while(sum1!=sum2 || sum2!=sum3){
            if(sum1>sum2 || sum1>sum3){sum1=sum1-d.top();d.pop();}

    if(sum2>sum3 || sum2>sum1){sum2=sum2-e.top();e.pop();}

    if(sum3>sum2 || sum3>sum1) {sum3=sum3-f.top();f.pop();}
}cout<<sum1;}
