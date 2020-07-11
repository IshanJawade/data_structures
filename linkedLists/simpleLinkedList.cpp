// A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void display(Node *p){
    int a=1;
    while(p != NULL){
        cout<<a<<"."<<"\t"<<p->data<<"\t"<<p->next<<endl;
        p = p->next;
        a++;
    }
}

// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
	Node* head = NULL; 
	Node* second = NULL; 
	Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 

	/* 

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+-----+	 +----+----+	 +----+----+ 
	| # | # |	 | # | # |	 | # | # | 
	+---+-----+	 +----+----+	 +----+----+ 
	
	*/

	head->data = 100; // assign data in first node 
	head->next = second; // Link first node with 
	// the second node 

	/*

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +----+----+	 +-----+----+ 
	| 1 | o----->| # | # |	 | # | # | 
	+---+---+	 +----+----+	 +-----+----+	 
	*/

	// assign data to second node 
	second->data = 200; 

	// Link second node with the third node 
	second->next = third; 

	/* 

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +---+---+	 +----+----+ 
	| 1 | o----->| 2 | o-----> | # | # | 
	+---+---+	 +---+---+	 +----+----+	 */

	third->data = 300; // assign data to third node 
	third->next = NULL; 

	/* 

		head	 
			| 
			| 
		+---+---+	 +---+---+	 +----+------+ 
		| 1 | o----->| 2 | o-----> | 3 | NULL | 
		+---+---+	 +---+---+	 +----+------+	 
	
	
	*Note that only the head is sufficient to represent 
	the whole list. We can traverse the complete 
	list by following the next pointers. */
	display(head);
	return 0; 
} 

// This code is contributed by rathbhupendra 
