#include<bits/stdc++.h>
using namespace std ;
vector<int>v[100];
int visit[100],level[100] ;
void bfs(int src,int n)
{
      queue<int>q ;
    q.push(src);
      visit[src]=1;
      level[src]=0;
      while(!q.empty()){
      int f=q.front();
    for(int i=0;i<v[f].size();i++)
    {
       int k=v[f][i]  ;
       if(!visit[k])
       {
             level[k]=level[f]+1;
             visit[k]=1;
             q.push(k);
       }

    }
    q.pop();
      }
      int ans=0;
      for(int i=1;i<=n;i++)
      {

            if(level[i]>ans)
                  ans=level[i];

      }
       cout<<ans+1 ;
}
int main()
{
   int edges,vertex ,x=1;
   cin>>vertex;
   for(int i=1;i<=vertex;i++)
   {
         int y ;
         cin>>y ;
         y+=2 ;
         v[x].push_back(y);
v[y].push_back(x);
x++ ;
   }

   bfs(1,vertex+2);
}
