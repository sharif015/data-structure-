#include<iostream>
#include<fstream>
using namespace std;

typedef struct student{
    int id;
    char name[50];
    struct student *prev;
    struct student *next;
}student;

//void fcreate(student *head, fstream fin);
student *fcreate(student *head, FILE *in);
void traverse(student *head);
void dll_reverse(student *last);
student *search(student *head, int id);
void insert(student *head, student *item, student *locafter);
student *del(student *head, student *loc);

int main(){
    FILE *in;
    //fstream fin;
    student *first, *last, *loc, *item;
    int id;

    in=fopen("/Users/mhs/Documents/c-source/data.txt","r");
    //fin.open("/Users/mhs/Documents/c-source/data.txt", ios::in);

    //first=(student *) malloc(sizeof(student));
    first=new student;
    first->prev=NULL;
    first->next=NULL;
    last=first;
    //create(first);
    last=fcreate(first, in);
    //fcreate(first,fin);
    fclose(in);
    traverse(first);
    cout<<"Reverse List"<<endl;
    dll_reverse(last);

    cout<<"Enter an id to search: ";
    cin>>id;
    loc=search(first,id);
    cout<<"Data found at "<<loc<<endl;

    cout<<"ID, Name of item to be inserted ";
    //item=(student *) malloc(sizeof(student));
    item=new student;
    cin>>item->id>>item->name;

    insert(first,item,loc);
    traverse(first);
    cout<<"Reverse List"<<endl;
    dll_reverse(last);

    cout<<"Enter an id to be deleted: ";
    cin>>id;
    loc=search(first,id);
    first=del(first,loc);

    traverse(first);
    cout<<"Reverse List"<<endl;
    dll_reverse(last);
}

student *fcreate(student *head, FILE *in){
    student *block, *prev;
    int id;
    char name[50];
    block=head;

    if(fscanf(in,"%d %s",&id,name)==2){
        block->id=id;
        strcpy(block->name,name);
    }

    while(fscanf(in,"%d %s",&id,name)==2){
        //block->next=(student *) malloc(sizeof(student));
        prev=block;
        block->next=new student;
        block=block->next;
        block->prev=prev;
        block->id=id;
        strcpy(block->name,name);
    }
    //block->next=NULL;

    block->next=NULL;
    return block;
}

void traverse(student *head){
    if(head==NULL) return;

    //display
    cout<<head->id<<"\t"<<head->name<<endl;

    traverse(head->next);
}

void dll_reverse(student *last){
    if(last==NULL) return;

    //display
    cout<<last->id<<"\t"<<last->name<<endl;

    dll_reverse(last->prev);
}

student *search(student *head, int id){
    student *block;
    block=head;
    while(block!=NULL){
        if(block->id==id)
            return block;
        else
            block=block->next;
    }
    return NULL;
}

void insert(student *head, student *item, student *locafter){

    item->next=locafter->next;
    locafter->next->prev=item;

    locafter->next=item;
    item->prev=locafter;


}

student *del(student *head, student *loc){
    student *prev, *first;

    //delete first node
    if(loc->prev==NULL){
        loc->next->prev=NULL;
        first=loc->next;
        delete loc;
        return first;
    }

    //delete other node
    prev=loc->prev;
    prev->next=prev->next->next;
    delete loc;
    return head;
}
