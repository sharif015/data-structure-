#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
 int n ;
 cin>>n ;
 int arr[5003]={} ;

      for(int j=1;j<=n ;j++)
      cin>>arr[j];
      for(int i=1 ;i<=n ;i++){
            if(i==arr[arr[arr[i]]]){
            cout<<"yes"<<"\n" ;
           return 0 ;
            }
      }
      cout<<"No"<<"\n" ;
      return 0 ;

}
