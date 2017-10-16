#include<iostream>
#include<cmath>
#include <bitset>
#include<vector>
using namespace std;
int main()
{
	string s;
	char a[26] = {'a','b','c','d','e','f','g'};
	cin>>s;
	vector<char> t;
	vector<char> u;
	vector<char> e;
	vector<char>::iterator it;
	//int i=1;
	//t.push_back(s[0]);
	for(int i=s.size()-1; i>=0; i--){
		e.push_back(s[i]);		
	}
	for(it = e.begin(); it!=e.end(); it++){
		
		if(t.back()<=e.back()){
			u.push_back(t.back());
			t.pop_back();
			t.push_back(e.back());
		}
		else{
			u.push_back(e.back());
			//	t.pop_back();
		}
		e.pop_back();

	
	}

	if(t.back()<=s[i]){
			u.push_back(t.back());
			t.pop_back();
			t.push_back(s[i]);
		}
		else{
			u.push_back(s[i]);
			//	t.pop_back();
		}

	//cout<<" sd";      
	vector<char>::iterator it;
	/*for(int i=0; i<u.size(); i++){
		cout<<u[i];
	}*/
	for(it=u.begin(); it!=u.end(); it++){
		cout<<*it;
	}
}
