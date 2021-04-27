#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
struct node
{
      int data ;
      struct node *next,*prev ;
}*head=NULL,*tmp;
void insert_(int data)
{
      struct node *current_node ;
      current_node=new node();
      current_node->data=data ;
      current_node->next=NULL ;
   current_node->prev=NULL ;
   if(head==NULL)
   {
         head=tmp=current_node ;
   }
   else
   {
         tmp->next=current_node ;
         current_node->prev=tmp ;
         tmp=current_node ;
   }
}
void insertatfirst(int data)
{
      struct node *tmp ;
      tmp=new node();
      tmp->data=data ;
      tmp->next=head ;
      head->prev=tmp ;
      tmp->prev=NULL ;
      head=tmp ;

}
void insertatanypoint(int data ,int pos)
{
      struct node *tmp ,*h;
      h=head ;
      int k=0 ;
      tmp=new node();
      tmp->data=data ;
      tmp->next=NULL ;
      tmp->prev=NULL ;
      while(k<pos-1)
      {
            h=h->next ;
            k++ ;
      }
     if(pos==1)
     {
           insertatfirst(data);
     }
     else
     {

     tmp->prev=h;
      h->next->prev=tmp ;
     tmp->next=h->next ;
     h->next=tmp ;
     }


}
void deletedatanypoint(int pos)
{
      int k=0 ;
      struct node *tmp ;
      tmp =head ;
      while(k<pos-1)
      {
        tmp=tmp->next ;
        k++ ;
      }
      if(pos==1)
      {
            tmp->next->prev=NULL ;

            head=tmp->next ;
            free(tmp) ;
      }
      else{
      tmp->prev->next=tmp->next ;
      tmp->next->prev=tmp->prev ;
      free(tmp);
      }
}
void display()
{
      struct node *t,*rev ;
      t=head ;
      rev=tmp ;
      while(t!=NULL)
      {
            cout<<t->data<<" " ;
            t=t->next ;
      }
      cout<<endl ;
      while(rev!=NULL)
      {
            cout<<rev->data <<" " ;
            rev=rev->prev ;
      }

}
int main()
{
      printf("Enter numbers of node: \n");
      int a ,b,c,d,e;
      cin>>a ;
for(int i=0 ;i<a;i++)
{
      int a ;
      cin>>a ;
      insert_(a);
}
printf("enter value to insert at first: \n");
cin>>b ;
insertatfirst(b);
printf("enter at any position ;type data & position: \n");
cin>>c>>d ;
insertatanypoint(c,d) ;
display();

printf("enter a position to delete: \n");
cin>>e ;
deletedatanypoint(e);
display();

}
