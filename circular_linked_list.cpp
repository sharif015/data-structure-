#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
struct node {
      int data ;
      struct node *next ;
}*head,*current;
void create(int data)
{
    struct node *tmp ;
    tmp=new node() ;
    tmp->data=data ;
    tmp->next=NULL ;
    if(head==NULL)
    {
          head=current=tmp ;
    }
    else
    {
          current->next=tmp ;
          current=tmp ;
    }
current->next=head ;
}
void insertatfirst(int data)
{
  struct node *tmp ;
  tmp=new node();
  tmp->data=data ;
  tmp->next=head ;
  head=tmp ;
  current->next=head ;
}
void insertatlast(int data)
{
      struct node *tmp ;
      tmp=new node() ;
      tmp->data=data ;
      tmp->next=head ;
      current->next=tmp ;
      current=tmp ;
}
void insertatanyposition(int pos,int data)
{
      int k=1 ;
      struct node *tmp,*t ;
      tmp=new node();
      t=head ;
    tmp->data=data ;
    tmp->next=NULL ;

      while(k<pos)
      {
            t=t->next ;
            k++;
      }
      if(pos==1)
      {
            insertatfirst(data);
      }
      else
      {
       tmp->next=t->next ;
      t->next=tmp ;
      }
}
void deleteatanypos(int pos)
{
      struct node *tmp ,*prev;
     tmp=head ;
     int k=1 ;
     while(k<pos)
     {
           prev=tmp ;
           tmp=tmp->next ;
           k++ ;
     }
     if(pos==1)
     {


           head=tmp->next ;
           current->next=head ;
           free(tmp);

     }
     else
     {
           prev->next=tmp->next ;
           free(tmp);
     }

}
void display()
{
      struct node *t ;
t=head ;
do
{
      cout<<t->data<< ' ' ;
      t=t->next ;
}
while(t!=head);
}

int main()
{
      printf("enter numbers of node: \n");
      int a,b,c,d,e,f ;
      cin>>a ;

for (int i=0 ; i<a ;i++)
{
      int a=i ;
      //cin>>a ;
      create(a);
}
printf("enter data to insert at first: \n");
cin>>b ;
insertatfirst(b);cout<<endl ;
display();
printf("enter data to insert at last: \n");
cin>>c ;
insertatlast(c);cout<<endl;
display();
printf("first Enter position to insert  & then data : \n");
cin>>d>>e ;
insertatanyposition(d,e);cout<<endl;
display();
printf("Enter position to delete: \n");
cin>>f ;
deleteatanypos(f);cout<<endl;
display();
}
