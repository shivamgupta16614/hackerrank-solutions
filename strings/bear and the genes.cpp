
#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    char s[500001];
    cin>>n>>s;
    int i=0;
    int j=n-1;
    int  min1=n;
    int cnt[128] = {0};
    while (1)
    {
        if (j<0 || cnt[s[j]]==n/4)
        {
            j++;
            break;
        }
        else
        {
            cnt[s[j]]++;
            j--;
        }
    }
    if (j < min1)
        min1 = j;
    for (i=0; i<n; i++)
    {
        cnt[s[i]]++;
        while (j<n && cnt[s[i]] > n/4)
        {
            cnt[s[j]]--;
            j++;
        }
        if (j==n)
            break;
        if (j-i-1 < min1)
            min1 = j-i-1;
    }
   cout<<min1;
}
