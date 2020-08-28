
# include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
}*front = NULL, *rear = NULL;

class CreateQueue{
    public:
        void enqueue();
        void dequeue();
        void display();
};

void CreateQueue :: enqueue(){
    *t = new Node;
    
}