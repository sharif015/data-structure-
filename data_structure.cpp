#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
struct node
{
      int data ;
      struct node *left,*right ;
};
struct node*create()
{
   int x ;
   struct node* newnode ;
   newnode=(struct node*) malloc(sizeof(struct node));
   scanf("%d",&x);
   if(x==11)
   {
         return 0 ;
   }
   newnode->data=x ;
   printf("Enter left child of %d: \n",x);
   newnode->left=create();
   printf("Enter Right child of %d: \n",x);
   newnode->right=create();

   return newnode ;
};
int main()
{
 struct node* root ;
 root=0 ;
 root=create();
}
