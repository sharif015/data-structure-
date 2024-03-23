#include<bits/stdc++.h>
using namespace std ;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 int x,y ;
 scanf("%d%d",&x,&y);
 if(x==y || y==x-2){
 if(x%2==0 && y%2==0 )
 {
 printf("%d\n",x+y);
 }
 else if(x%2==1 && y%2==1)
 {
 printf("%d\n",x+y-1);
 }
 }
 else
 {
 printf("No Number\n");
 }
}




















}
