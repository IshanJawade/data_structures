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
        void countNodes();
        void findNode();
};

void createNode :: countNodes(){
    Node *p = first;
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    cout<<"\nTotal Number of nodes in linked list: "<<count<<endl;
}

void createNode :: findNode(){
    Node *ptr = first;
    int pos=0, ninput, flag=0;
    cout<<"Enter the node which you wnat to find: ";
    cin>>ninput;
    while(ptr->data != ninput){
        ptr = ptr->next;
        pos++;
        if(ptr->data==ninput){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"Node found at posotion: "<<pos<<endl;
    }
    else{
        cout<<"Node not found in the list";
    }
}

int main(){
    createNode obj;
    int d, ch=1;
    while(ch!=5){
        cout<<"\n1.Create\n2.Display\n3.Count number of nodes\n4.Find the node\n5.Exit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>ch;
        if(ch == 1){
            cout<<"Enter data: ";
            cin>>d;
            obj.CNode(d);
            obj.display();
        }
        else if(ch == 2){
            obj.display();
        }
        else if (ch==3){
            obj.countNodes();
        }
        else if(ch==4){
            obj.findNode();
        }
        else if(ch==5){
            break;
            return 0;
        }
        else{
            cout<<"Invalid input try again !";
        }
    }
    return 0;
}

// Written by Ishan Jawade. ✌🏻
