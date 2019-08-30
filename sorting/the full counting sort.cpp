#include <bits/stdc++.h>


using namespace std;

int main(){
    long n,x,max1,p;
    max1=0;
    int count[100];
    for(int i=0;i<100;i++){count[i]=0;}
    string s;
    cin>>n;
    p=n-1;
    vector<pair <int,string>> v;

    for(int i=0;i<n;i++){
        cin>>x;
        cin>>s;
        if(i<n/2){s='-';}
        count[x+1]++;
        max1=max(max1,x);
               v.push_back( make_pair(x,s) );
    }
     for(int i=0;i<max1;i++){count[i+1]=count[i+1]+count[i];}


    for(int i=0;i<n;i++){
        int j=v[i].first;
        v[i].first=count[v[i].first];
        count[j]++;

    }






    sort(v.begin(),v.end());
     for(int i=0;i<n;i++){

 cout<<v[i].second<<" " ;

    }

}
