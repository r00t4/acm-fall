#include<iostream>
using namespace std;

struct Node{
  	int val;
  	int size;
  	struct Node *child[15000];
};

struct Node *getNode(int k){
	struct Node *pNode= new Node;
	pNode->val = k;
	pNode->size=1;
	for(int i=0; i<15000; i++){
	    pNode->child[i] = NULL;
	}
	return pNode;
}

void unity(struct Node *root, int b){
	struct Node *pNode = root;
 
    if (!pNode->child[b])
    	pNode->size++;
    	int cnt = pNode->size;
        pNode->child[b] = getNode(0);
        pNode = pNode->child[b];
        pNode->size = cnt;
}


int main()
{
	int n;
	cin>>n;
	struct Node *root[n];
	for(int i=1; i<=n; i++){
		root[i] = getNode(i);
	}
	int a,b;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		struct Node *kek = getNode(min(a,b));
		unity(kek,max(a,b));
	}
	int mn = 30001, mx = -1;
	for(int i=1; i<=n; i++){
		if(root[i]->size>mx){
			mx = root[i]->size; 
		}
		if(root[i]->size<mn){
			mn = root[i]->size; 
		}
	}
	cout<<mn<<" "<<mx;
}