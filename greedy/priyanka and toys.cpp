#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cont=1;
    int x=a[0]+4;
    for(int i=0;i<n;i++){
       if(a[i]>x){x=a[i]+4;cont++;}


    }
cout<<cont;
}
