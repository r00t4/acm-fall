#include<iostream>
#include<vector>
using namespace std;
string s;

int main()
{
	cin>>s;
	vector<char> v1;
	v1.push_back(s[0]);
	vector<char>::iterator it;
	for(int i=1; i<s.size()/2; i++){
		if(s[i]!=v1.back()){
		 	v1.push_back(s[i]);
		}
		else{
			v1.pop_back();
		}
	}
	for(it = v1.begin(); it!=v1.end(); it++){
		cout<<*it;
	}
		
}