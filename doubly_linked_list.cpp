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
      cout<<h->data <<endl ;

     tmp->prev=h;
      h->next->prev=tmp ;
     tmp->next=h->next ;
     h->next=tmp ;


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
      tmp->prev->next=tmp->next ;
      tmp->next->prev=tmp->prev ;
      free(tmp);
}
int main()
{
for(int i=0 ;i<5;i++)
{
      int a ;
      cin>>a ;
      insert_(a);
}
insertatfirst(33);
insertatanypoint(44,3) ;
struct node *t=head ;
while(t!=NULL)
{
    cout<<t->data <<" " ;
    t=t->next ;

}
struct node *tt ;
tt=tmp ;
cout<<"\n" ;
while(tt!=NULL )
{

      cout<<tt->data<<" "  ;

      tt=tt->prev ;
}
cout<<endl ;
deletedatanypoint(2);
struct node *ttt=head ;
while(ttt!=NULL)
{
    cout<<ttt->data <<" " ;
    ttt=ttt->next ;

}
struct node *tte;
tte=tmp ;
cout<<"\n" ;
while(tte!=NULL )
{

      cout<<tte->data<<" "  ;

      tte=tte->prev ;
}
}
