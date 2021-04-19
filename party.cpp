#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
      int n,k ;
      cin>>n ;
  int arr[n+1][n+1],arr1[n];
  memset(arr, 0, sizeof(arr[0][0]) * (n+1) *( n+1));
 int j=1 ;
 for(int i=1 ;i<=n ; i++)
 {
       cin>>arr1[i];
 }
  for(int i=1 ;i<=n;i++)
  {
        if(arr1[i]==-1)
        {
              j++;
              continue;
        }
        arr[j][arr1[i]]=1;
       j++ ;
  }


  for(int i=1 ;i<=n ;i++)
  {
        cout<<endl;
        for(int j=1 ;j<=n ;j++)
        {
          k=1 ;
              cout<<arr[i][k]<<" " ;
        }
        k++ ;
       // cout<<endl;
  }
}
