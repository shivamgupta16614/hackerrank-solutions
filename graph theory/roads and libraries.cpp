#include <iostream>
#include <vector>
using namespace std;
void DFSUtil(long u, vector<long> adj[],
                    vector<bool> &visited,long &sum,long r)
{
    visited[u] = true;
    sum=sum+ r;
    for (long i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false) {
            DFSUtil(adj[u][i], adj, visited,sum,r);}

}
long dfs(vector <long> v[],long n,long r,long l){
vector <bool> vis (n,false);
long sum=0;
for(long i=0;i<n;i++){
    if(vis[i]==false){
        sum=sum+l-r;
       DFSUtil(i, v, vis,sum,r);
    }
if(l<r){sum=l*n;}
}
return sum;
}
int main(){
    int q;
    cin>>q;
    for(int j=0;j<q;j++){
        long n,m,l,r;
        cin>>n>>m>>l>>r;
       long a,b;
       a=l;b=r;


        if(m==0)
         cout<<l*n<<endl;

        else{
             long u,x;
        vector <long > v[n];
        for(long i=0;i<m;i++){
            cin>>u>>x;
            u--;x--;
            v[u].push_back(x);
            v[x].push_back(u);

        }
        cout<<dfs(v,n,r,l)<<endl;

    }


    }
}
