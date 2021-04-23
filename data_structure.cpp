#include<bits/stdc++.h>
using namespace std ;
struct s
{
      int top ;
      struct s *next ;
}*first;


void make_list(int n)
{

      struct s *current,*tmp ;
       int data ;
      first=(struct s*)malloc(sizeof(struct s));

      scanf("%d",&data);
   first->top=data ;
     first->next=NULL ;
      //printf(" node1=%d",first);
      tmp=first ;


      for(int i=2 ; i<=n;i++)
      {
            current=new s();//(struct s*) malloc(sizeof(struct s));
            cin>>data ;
            current->top=data ;
            current->next=NULL ;
            tmp->next=current ;
            tmp=tmp->next;

      }
}


void display(struct s *head)
{
      struct s *t ;
      t=head ;
      while(t!=NULL)
      {
            cout<<t->top <<" ";
            t=t->next;
      }
}
void insert_begining(struct s *head,int data);
void insert_at_given_position(int data);
void insert_at_last(int data) ;
void ll_find(int data);
void deleted(int loc) ;
int main()
{
   struct s *head;
   head=NULL ;
   int node_number ,data;
  printf("Enter node number: \n");
  cin>>node_number;

  make_list(node_number);
printf("Enter a node to insert at first: \n");
cin>>data ;
insert_begining(first,data);
printf("Enter a value to insert in given position: \n");
int d ;
cin>>d ;
insert_at_given_position(d);
printf("ENter a node to insert at last position: \n");
int k ;cin>>k;
insert_at_last(k);
printf("enter a data to search: \n");
int t ;cin>>t ;
ll_find(t);
display(first);
printf("enter a postion to deletd: \n");
int tt ;
cin>>tt ;
 deleted(tt);
 cout<<endl;
display(first);
}
void insert_begining(struct s *head,int data)
{

      head=new s();
      head->top=data ;
      head->next=first ;
      first=head ;
}
void insert_at_given_position(int data)
{
      struct s *head ,*tmp;
      tmp=first ;
      head=new s();
      head->top=data ;
      head->next=NULL ;
      printf("Enter a position to insert data: \n");

      int pos ;
      cin>>pos ;
      while((*tmp).top!=pos)
      {
          tmp=tmp->next;
      }
      head->next=tmp->next;
      tmp->next=head ;
}
void insert_at_last(int data)
{
      struct s *tmp ,*current;
      tmp=(struct s*)malloc(sizeof(struct s ));
   tmp->top=data ;
      tmp->next=NULL ;
      current=first ;

      while(current->next!=NULL)
      {
            current=current->next;
      }
      current->next=tmp ;
}
void ll_find(int data)
{
      struct s *tmp ;
      tmp=first ;
      while(tmp !=NULL)
      {
         if(tmp->top==data)
         {
               cout<<"found data"<<endl ;
               return ;
         }
         else
         tmp=tmp->next ;
      }
      cout<<"data not found " ;
}
void deleted(int loc)
{
      struct s *tmp,*prev ;
      tmp=first ;
      int k=0 ;
      while(tmp!=NULL)
      {
            k++ ;
            if(k==loc)
            {
                  break;
            }
            else
            {
                  prev=tmp ;
                  tmp=tmp->next ;
            }
      }
      prev->next=tmp->next;
      free(tmp );

}

