#include<iostream>
#include <vector>
using namespace std;
int main()
{
	string s;
	vector<char> d1;
	cin>>s;
	d1.push_back(s[0]);
	for(int i=1; i<s.size(); i++){
		if(d1.back()==s[i]){
			d1.pop_back();
		}
		else{
		 	d1.push_back(s[i]);
		}
	}
	if(d1.empty()){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

}