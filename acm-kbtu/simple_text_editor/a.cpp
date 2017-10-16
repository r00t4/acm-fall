#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<char> s;
	stack<vector<char> > q;
	q.push(s);
	int k;
	for(int i=0; i<t; i++){
		cin>>k;
		if(k==1){
			string s1;
			cin>>s1;
			for(int j=0; j<s1.size(); j++){
				s.push_back(s1[j]);
			}
			q.push(s);
		}
		if(k==2){
			int l;
			cin>>l;
			for(int j=0; j<l; j++){
				s.pop_back();
			}
			q.push(s);
		}
		if(k==3){
			int l;
			cin>>l;
			if(l-1<s.size()){
			 	cout<<s[l-1]<<endl;
			}
		}
		if(k==4){
			q.pop();
			s = q.top();
		}
	}
}
