#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    unsigned long long t;
    cin>>t;
    char a[m][n];
    char b[m][n],c[m][n],d[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]='O';
            c[i][j]='O';
            d[i][j]='O';
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='O'){
               c[i][j]='.';
               if(i!=(m-1)){
                   c[i+1][j]='.';
               }
               if(i!=0){
                   c[i-1][j]='.';
               }
               if(j!=(n-1)){
                   c[i][j+1]='.';
               }
               if(j!=0){
                   c[i][j-1]='.';
               }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]=='O'){
               d[i][j]='.';
               if(i!=(m-1)){
                   d[i+1][j]='.';
               }
               if(i!=0){
                   d[i-1][j]='.';
               }
               if(j!=(n-1)){
                   d[i][j+1]='.';
               }
               if(j!=0){
                   d[i][j-1]='.';
               }
            }
        }
    }if(t>1){
    if(t%2==0){   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }}
    else if((t-3)%4==0){   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j];
        }cout<<endl;
    }}
    else  if((t-5)%4==0) { for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<d[i][j];
        }cout<<endl;
    }}}
     else   { for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }cout<<endl;
    }}


}
