#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long a[n];

    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    unsigned long long  x,y,z,sum;
    sum=x=y=z=0;

    for(int i=0;i<n-2;i++){

        if( a[i+2]<(a[i+1]+a[i]) ){
             if((a[i]+a[i+1]+a[i+2])>sum)
             {sum=a[i]+a[i+1]+a[i+2];
                 x=a[i];y=a[i+1];z=a[i+2];}
             else if((a[i]+a[i+1]+a[i+2])==sum && a[i]>x) {x=a[i];y=a[i+1];z=a[i+2];}
        }
    }
    if(x==0)cout<<-1;
   else  cout<<x<<" "<<y<<" "<<z;
}
