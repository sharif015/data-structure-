#include<bits/stdc++.h>
using namespace std ;
struct s
{
   int data ;
   struct s *next ;
};

int main()
{
   struct s *head ;
   cout<<sizeof(*head);
   head=(struct s*) malloc(sizeof(struct s)*5) ;
   for(int i=0 ; i<7 ;i++)
   {
         cin>>head[i].data ;

   }for(int i=0 ; i<7 ;i++)
   {
         cout<<head[i].data ;

   }

}
