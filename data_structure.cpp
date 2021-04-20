#include<bits/stdc++.h>
using namespace std ;
struct s
{
      int top ;
      struct s *next ;
};
void push(struct s *head ,int data)
{
      struct s *tmp ;
      tmp=(struct s*)malloc(sizeof(struct s ));
   tmp->top=data ;
      tmp->next=head ;
}
void push_b(struct s *head)
{
	while(head->next!=NULL)
	{
		head=head->next ;
		cout<<head ;
	}
}
int main()
{
      struct s *head ;

push(head ,5);
push_b(head);

}
