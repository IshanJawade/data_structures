// Doubly Linked List Code Application

# include <iostream>
using namespace std;

class Node {
    public:
        Node *prev;
        int data;
        Node *next;
};

Node *first=NULL, *last=NULL;

class creatNode{
    public:
    void cNode(int d){
        Node *t;
        if(first == NULL){
            first = new Node;
            first->data = d;
            first->prev = NULL;
            first->next = NULL;
            last = first;
        }
        else{
            t = new Node;
            t->data = d;
            t->prev = last;
            last->next = t;
            t->next = NULL;
            last = t;
        }
    }
    void display(){
        Node *p = first;
        int cnt=0;
        while(p != NULL){
            cout<<cnt<<".   "<<p->prev<<"   "<<p->data<<"   "<<p->next<<endl;
            p=p->next;
            cnt++;
        }
    }
};


int main(){
    creatNode obj;
    int pointer=0, d;
    for(int i=0; i<=9; i++){
        cout<<pointer++<<". "<<"Enter data: ";
        cin>>d;
        obj.cNode(d);
    }
    cout<<"\tYour Linked List is: "<<endl;
    obj.display();
    return 0;
}

// Written by Ishan Jawade. ✌🏻