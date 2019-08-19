#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        unsigned long long k;
        cin>>n>>k;
        unsigned long long a[n],b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
         sort(a, a + n);

    int x=0;
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++)
        {if (a[i] + b[i] < k)
            {cout<<"NO"<<endl;
            x=1;break;
            }}
            if(x==0){cout<<"YES"<<endl;}

    }

}
