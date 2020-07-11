// stack implementation using linked list

# include <iostream>
using namespace std;

int size;
int cunode;

class Node{
    public:
        int data;
        Node *next;
};

class Stack{
    Node *top;
    public:
        // Stack initialisation
        Stack(){
            top = NULL;
        }
        // Push method
        void push(){
            Node *t = new Node;
            int num;
            if (cunode == size){
                cout<<"\nOperation failed ! \nerror: Stack Overflow"<<endl;
            }
            else{
                cout<<"Enter value in stack: ";
                cin>>num;
                t->data = x;
                t->next = top;
                top = t;
                cunode++;
                cout<<"\n< "<<num<<" is sucsessfuly pushed into stack >"<<endl;
            }
        }

        // Pop method
        void pop(){
            Node *p;
            int x;
            if(top == NULL ||cunode == NULL || cunode == 0){
                cout<<"\nOperation failed ! \nerror: Stack Underflow"<<endl;
            }
            else{
                p = top;
                top = top->next;
                x = p->data;
                delete p;
                cout<<"\n< "<<x<<" is sucsessfuly poped from stack >"<<endl;
            }        
        }

        // Display method
        int cnt = 1;
        void displayStack(){
            cout<<endl;
            Node *ptr = top;
            while(ptr != NULL){
                cout<<ptr->data;
                ptr = ptr->next;
                if(cnt == 1){cout<<"  <- Top"<<endl;}
                else{cout<<endl;}
                cnt--;
            }
            cnt = 1;
        }
};

int main(){
    Stack obj;
     int ch, num; 
     cout<<"Enter the size of stack: ";
     cin>>size;
     cunode = 0;
     while(ch != 5){
         cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n:- ";
         cin>>ch;
         if        (ch == 1){
             obj.push();
         } else if (ch == 2){
             obj.pop();
         } else if (ch == 3){
            obj.displayStack();
         } else if (ch == 4){
            break;
         } else {
             cout<<"Invalid input. Please try again..."<<endl;
         }
     }
     return 0;
}

// Written by Ishan Jawade ✌🏻.