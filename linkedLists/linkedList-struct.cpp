# include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next; 
}* first=NULL, *last = NULL;

void createNode(int d){
    struct Node* t;
    if(first == NULL){
        first = new Node;
        first->data = d;
        first->next = NULL;
        last = first;
    }
    else{
        t = new Node;
        t->data = d;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(Node* p){
    int a=0;
    while(p != NULL){
            cout<<a<<".   "<<p->data<<"        "<<p->next<<endl;
            p = p->next;
            a++;
        }
}

int main(){
    cout<<"Lets make a linked list: "<<endl;
    int ch, d;
    while(ch != 3){
        cout<<"\n1.Create\n2.Display\n3.Exit"<<endl;
        cout<<"Enter your choise: #";
        cin>>ch;
        if(ch == 1){
            cout<<"\nEnter data #";
            cin>>d;
            createNode(d);
        } 
        else if(ch == 2){
            cout<<"\n\tYour Linked List is Here...\n";
            cout<<"Sr.  Data      Address\n";
            display(first);
        }
    }    
    return 0;
}

// Written by Ishan Jawade. ✌🏻