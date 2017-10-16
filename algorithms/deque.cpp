#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void push_back(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	temp->prev=rear;
	if(front==NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void pop_front()
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

void push_front(int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=front;
	temp->prev=NULL;
	if(front==NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	front->prev = temp;
	front = temp;
}

void pop_back()
{
	struct Node* temp = rear;
	if(rear==NULL) return;
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		rear = rear->prev;
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

int Back()
{
	if(front!=rear)
		return rear->data;
	else
		return -1;	
}


int main()
{
	push_back(2);
	push_front(1);
	push_back(3);
	pop_front();
		
	cout<<Back();
	cout<<Front();

	return 0;
}




