// Stack implementation using array
// without usung bits libraries

# include <iostream>
using namespace std;

 class impStack{
     public:
        int top = 0;
        int size = 0;
        int stack[1000];
        
        // Initializing Stack
        void createStack(){
            cout<<"Enter size of stack: ";
            cin>>size;
            top = -1;
        }

        // Push method
        void push(){
            int y;
            if(top == size-1){
                cout<<"\nOperation failed ! \nerror: Stack Overflow"<<endl;
            } else {
                cout<<"Enter value to plush in stack: ";
                cin>>y;
                top++;
                stack[top] = y;
                cout<<"\n< "<<y<<" is sucsessfuly pushed into stack >"<<endl;
            }
        }

        // Pop method
        void pop(){
            int x = 1;
            if (top == -1){
                cout<<"\nOperation failed ! \nerror: Stack Underflow"<<endl;
            } else {
                x = stack[top];
                top--;
                cout<<"\n< "<<x<<" is sucsessfuly poped from stack >"<<endl;
            }
        }

        // Is stack empty?
        void emptyFull(){
            cout<<"< Is stack is ";
            if (top == -1){
                cout<<"Empty >";
            } else if (top == size-1){
                cout<<"Full >";
            } else {
                cout<<"Nor Empty not Full.";
            }
        }

        // Display method
        int cnt = 1;
        void displayStack(){
            cout<<endl;
            for(int i = top; i >= 0; i--){
                cout<<stack[i];
                if(cnt == 1){cout<<"  <- Top"<<endl;}
                else{cout<<endl;}
                cnt--;
            }
            cnt = 1;
        }
 };

 int main(){    
     impStack obj;
     int ch; 
     obj.createStack();
     while(ch != 5){
         cout<<"\n1.Push\n2.Pop\n3.Display\n4.Status of Stack\n5.Exit\n:- ";
         cin>>ch;
         if        (ch == 1){
             obj.push();
         } else if (ch == 2){
             obj.pop();
         } else if (ch == 3){
            obj.displayStack();
         } else if (ch == 4){
            obj.emptyFull();
         } else if (ch == 5){
            break;
         } else {
             cout<<"Invalid input. Please try again...";
         }
     }
     return 0;
 }

//  Written by Ishan Jawade ✌🏻.