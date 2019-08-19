#include <bits/stdc++.h>

using namespace std;
unsigned long q=1000000007;

int main()
{
    int t,n,m,x[1000004],y[1000004];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        n=n-1;
        m=m-1;

        for(int i=0;i<n;++i)
              cin>>x[i];
        for(int i=0;i<m;++i)
             cin>>y[i];

       unsigned long long sum,s1 = 0,s2 = 0;
        for(int i=0;i<n;++i)
              s1 += x[i];
        for(int i=0;i<m;++i)
              s2 += y[i];
        sum = (s1+s2)%q;

        sort(x,x+n);
        sort(y,y+m);

        for(int i=n-1,j=m-1;i>=0&&j>=0;)
        {
            if(y[j]>=x[i])
            {
                sum=(sum+s1)%q;
                s2 -= y[j];
                --j;
            }
            else
            {
                sum=(sum+s2)%q;
                s1 -= x[i];
                --i;
            }
        }

        cout<<sum%q<<endl;
    }

}
