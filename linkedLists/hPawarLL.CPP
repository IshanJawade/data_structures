#include<iostream>
using namespace std;
class node
{
 public:
  int data;
  node *link;
};

class list1
{
  public:
  node *head, *tail;
  list1()
  {
    head=NULL;
    tail=NULL;
  }
  node *createnode();
  void createlist();
  void display();
};

node *list1::createnode()
{
  node *newnode;
  newnode= new node;
  cout<<"Enter data ";
  cin>>newnode->data;
  // newnode->link=NULL;

  return(newnode);
}

void list1::createlist()
{
  node *newnode;
  char ch;
  while(1)
  {
    cout<<"Enter Y/N to create node ";
    cin>>ch;
    if(ch!='Y')
    {
      break;
    }
    newnode=createnode();
    if(head==NULL)
    {
      head=newnode;
      tail=newnode;
    }
    else
    {
      tail->link=newnode;
      tail=newnode;
    }

  }
  cout<<"Value of head is "<<head<<endl;
  cout<<"Value of tail is "<<tail<<endl;
}

void list1::display()
{
  node *temp;
  temp=head;
  if(temp==NULL)
  {
    cout<<"list is empty ";
  }
  else
  {
    while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->link;

    }
  }
  cout<<"Value of head is "<<head<<endl;
  cout<<"Value of tail is "<<tail<<endl;
}

int main()
{
  cout<<"Hello"<<endl;
  list1 l;
  //n.createnode();
  l.createlist();
  l.display();
  return 0;
}
