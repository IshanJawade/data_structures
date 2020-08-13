# include <iostream>
using namespace std;

class Queue {
     public:
        int size, front, rear;
        int *Q;
        Queue(){                    // default constuctor 
            front = rear = -1;
        }
        Queue(int y){               // parameterized constructor
            front = rear = -1;
            size = y;
            Q = new int[size];
        }
        void enqueue(int x);
        void dequeue();
        void display();
};

void Queue :: enqueue(int x){
    if (rear == size - 1){
        cout<<"\nOperation failed !\nerror: Queue is full";
    }
    else{
        rear++;
        Q[rear] = x;
    }
}

void Queue :: dequeue(){
    if (front == rear){
        cout<<"\nOperation failed !\nerror: Queue is Empty"<<endl;
    }
    else {
        front++;
        int aa = Q[front];
        Q[front] = 0;
        cout<<"\n< "<<aa<<" is successfuly deleted from the queue>"<<endl;
    }
}

void Queue :: display(){
    for( int i=front+1; i<=rear; i++ ){
        cout<<Q[i];
        if (i == front+1){
            cout<<"<- Front"<<endl;
        }
        else if (i == rear){
            cout<<"<- Rear"<<endl;
        }
        else {
            cout<<endl;
        }
    }
}

int main(){
    int x,y,ch;
    cout<<"Enter size of queue: ";
    cin>>y;
    Queue q(y);
    while(ch != 4){
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exist"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>ch;
        if(ch == 1){
            cout<<"\nEnter value in queue: ";
            cin>>x;
            q.enqueue(x);
        } 
        else if(ch == 2){
            q.dequeue();
        }
        else if (ch == 3)
        {
            q.display();
        }
        else if (ch == 4)
        {
            break;
        }
        else{
            cout<<"Invalid input !\n try again";
        }
    }    
    return 0;
}