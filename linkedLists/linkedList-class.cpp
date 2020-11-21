// Linked list application code using Class 
// Add and Delete nides in the linjked list 

# include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
};

class createNode{
    public:
        Node *first=NULL, *last=NULL;
        void CNode(int d){
            Node *t;
            if(first==NULL){
                first = new Node;
                first->data = d;
                first->next=NULL;
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
        void display(){              
            int a=0;
            Node *p = first;
            while(p != NULL){
                cout<<a<<".   "<<p->data<<"        "<<p->next<<endl;
                p = p->next;
                a++;
            }
        }
};


int main(){
    createNode obj;
    cout<<"\n\n\t\t\tLets make a linked list: "<<endl;
    int ch, d;
    while(ch != 3){
        cout<<"\n1.Create\n2.Display\n3.Exit"<<endl;
        cout<<"\nEnter your choice: #";
        cin>>ch;
        if(ch == 1){
            cout<<"\nEnter data #";
            cin>>d;
            obj.CNode(d);
            obj.display();
        } 
        else if(ch == 2){
            cout<<"\n\tYour Linked List is Here...\n";
            cout<<"Sr.  Data      Address\n";
            obj.display();
        }
    }    
    return 0;
}

// Written by Ishan Jawade. ✌🏻
