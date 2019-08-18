#include <bits/stdc++.h>
using namespace std;
int main(){
  unsigned long n;
    cin>>n;
  unsigned long a[n],b[n];

    for(long i=0;i<n;i++){cin>>a[i];b[i]=1;}
    for(long i=1;i<n;i++){if(a[i]>a[i-1]){b[i]=b[i]+b[i-1];}}

    for(long long i=n-2;i>= 0; i--) {

    if(a[i] > a[i+1] && b[i] < b[i+1]+1) {
            b[i] = b[i+1]+1;}}
  unsigned long sum=0;
  for(long i=0;i<n;i++){sum=sum+b[i];
  }
cout<<sum;
}
