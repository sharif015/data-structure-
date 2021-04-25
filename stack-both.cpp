#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
};

class lstack{
    node *head=NULL;
public:
    int push(int item);
    int pop();
    int isempty(){ return head==NULL;};
    int peek(){ return head->data;};
};

int lstack::push(int item){
    node *nn=new node;
    nn->data=item;
    nn->next=head;
    head=nn;
    return 1;
}

int lstack::pop(){
    if(head==NULL) return -1;
    node *gptr=head;
    int item=head->data;
    head=head->next;
    delete gptr;
    return item;
}


class astack{
    int stackdata[10];
    int top=-1;
    int maxstack=9;

    public:
        int push(int item);
        int pop();
        int isempty(){ return top<0;};
        int isfull(){ return top==maxstack;};
        int peek(){ return stackdata[top];};
};

int astack::push(int item){
    if(isfull()) return -1;
    stackdata[++top]=item;
}

int astack::pop(){
    if(isempty()) return -1;
    return stackdata[top--];
}

int main(){
    lstack j;
    j.push(5);
    j.push(4);
    j.push(3);
    j.push(2);
    j.push(1);

    while(!j.isempty()){
        cout<<j.pop();
    }

}
