#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Node(){
  	struct Node *child[26];
  	bool isEndOfWord;
  	int cnt;
};

struct Node *getNode(void){
	struct TrieNode *pNode = new TrieNode;
	pNode->isEndOfWord = false;
	pNode->cnt = 0;
	for(int i=0; i<26; i++){
		pNode->child[i] = NULL;
	}
	return pNode;
}

void insert(struct TrieNode *root, string key)
{
    struct Node *pNode = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
 
    // mark last node as leaf
    pCrawl->isEndOfWord = true;
}


int main()
{
	int n;
	cin>>n;
	struct Node *root = getNode();
	string s;
	for(int i=0; i<n; i++){
		cin>>s[i];
		insert(root, s);
	}
	cout<<"GOOD SET";
}