#include <bits/stdc++.h>

using namespace std;
int hot(vector<int> v, int k)
{
    int c=0;
        int i=1,j=0;
        int l=v.size();
        sort(v.begin(),v.end());
        vector<int>::iterator ub=v.begin();
        while(i<l)
        {
            if(v[i]-v[j]<=k)
            i++;
        else
        {
            c++;
            ub=upper_bound(v.begin(),v.end(),v[i-1]+k);
            if(ub==v.end())
            return c;
            j=ub-v.begin();
            i=j+1;
        }
    }
    return c+1;
}
int main(){
int n,k;
cin>>n>>k;
vector <int > v;
int x;
for(int i=0;i<n;i++){cin>>x;
v.push_back(x);}
cout<<hot(v,k);
}
