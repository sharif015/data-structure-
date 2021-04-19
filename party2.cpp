#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
int mark[2050];
int p[2050];
vector<int>graph[2050];
void dfs(int x,int h)
{
      mark[x]=h ;
      for(int i=0 ;i<graph[x].size();i++)
      {
            int u=graph[x][i];
            dfs(u,h+1);
      }
}
int main()
{
      int n ;cin>>n ;
 for(int i=1;i<=n;i++)
 {
       cin>>p[i];
       graph[p[i]].push_back(i);
 }
 for(int i=1 ;i<=n ;i++)
 {
       if(p[i]==-1)
       {
             dfs(i,1);
       }
 }
 int ans=0;
 for(int i=1 ;i<=n ;i++)
 {
       ans=max(ans,mark[i]);
 }
 cout<<ans ;

}
