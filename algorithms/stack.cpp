#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* link;
};

struct Node* head = NULL;

void push(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->link = head;
	head = temp;
}

void pop() 
{
	struct Node *temp;
	if(head == NULL) return;
	temp = head;
	head = head->link;
	temp = NULL;
}

bool isEmpty()
{
	return (head == NULL);
}

int top()
{
	if(head != NULL)
		return head->data;
	else
		return -1;	
}


int main(){
	push(1);
	push(3);
	push(5);
	push(7);

	pop();
	pop();
	cout<<top()<<endl;

	return 0;			
}

