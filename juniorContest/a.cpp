#include <iostream>
#include <cmath>
#include<deque>
using namespace std;

struct node{
	string name;
	int parent;
};

node tree[1000];
int size = 0;
int root = -1;
 	

int find_dir(string dir){
	for(int i=0; i<size; i++){
		if(tree[i].name == dir){
			return i;
		}
	}
	return -1;
}

void print_all(int cur){
	//int i=root;
	while(cur!=-1){
		cout<<"/"<<tree[cur].name;
		cur = tree[cur].parent;
	}
}


int main()
{
	int n;
 	cin>>n;
 	int cur=root;
 	string com[n],s;
 	//deque<string> v1;
 	for(int i=0; i<n; i++){
 		cin>>com[i];
 		if(com[i]=="cd"){
 			cin>>s;
 			string k="";
 			for(int i=0; i<s.size(); i++){
 				if(s[i]!='/'){
 				 	k+=s[i];
 				}
 				else if(s[i]=='/' && k.size()!=0){
 					if(k==".."){
 						cur = root;
 					}
 					else{
 						if(find_dir(k)==-1){
 							size++;
 							tree[size-1].name = k;
 							tree[size-1].parent = -1;
 						}
 						else{
 							cur = find_dir(k);
 						}
 					}
 					k = "";
 				}
 			}
 			if(find_dir(k)==-1){
 				size++;
 				tree[size-1].name = k;
 				tree[size-1].parent = -1;
 			}
 			else{
 				cur = find_dir(k);
 			}
 		}
 		if(com[i]=="pwd"){
 			if(cur!=root){
 			 	print_all(cur);
 			}
 			cout<<"/";
 			cout<<endl;
 		}
 	}

}
