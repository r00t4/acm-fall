#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	if(front==NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void dequeue()
{
	struct Node* temp = front;
	if(front==NULL) return;
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}

	temp = NULL;
}

bool isEmpty()
{
	return (front==rear);
}

int Front()
{
	if(front!=rear)
		return front->data;
	else
		return -1;	
}

int main()
{
	enqueue(2);
	enqueue(4);
	enqueue(6);
	enqueue(8);
	dequeue();
	cout<<Front();

	return 0;	
}