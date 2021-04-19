#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
struct node
{
      int data ;
      struct node *next ;
};
struct node* head=NULL ;
void push_b(int data)
{
   struct node *tmp,*last ;
   tmp=(struct node*) malloc(sizeof(struct node));

   tmp->data=data ;
   tmp->next=head ;
   head=tmp ;
   return ;
}
void pop()
{
      struct node* tmp ;
      tmp=head ;

 head=head->next;
 free(tmp);
}
void peek()
{
  printf(" %d \n",head->data) ;
}
void display()
{
   struct node* tmp ;
   tmp=head;
   while(tmp!=NULL)
   {
        printf (" %d \n",tmp->data) ;
         tmp=tmp->next ;
   }
}
int main()
{
      int n ;
      cin>>n ;
     for(int i=0 ; i<n ;i++)
     {
           int a;
           cin>>a ;
           push_b(a);
     }

     display();
     pop();
     peek() ;

}
