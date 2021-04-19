#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
vector<int>v[2000];
int visited[2000];
int c=0 ;
void dfs(int u)
{
      int k ;
      visited[u]=1 ;
      for(int i=0 ; i<v[u].size();i++)
      {   // int c=0;
           k=v[u][i];
           if(visited[k]==0)
           {

                 //cout<<k<< " ";


                 dfs(k);



           }
      }

}

int main()
{
int n ,a;
cin>>n ;
for(int i=1 ;i<=n ;i++)
{
      cin>>a ;
      v[i].push_back(a);
      v[a].push_back(i);

}
dfs(1);
cout<<c ;
}
