#include<iostream>
#include<vector>
using namespace std;

string s; 

int main()
{
	cin>>s;
	vector<char> f;
	f.push_back(s[0]);
	for(int i=1; i<s.size(); i++){
		if(f.back()=='(' && s[i]==')'){
			f.pop_back();
		}
		else{
			f.push_back(s[i]);
		}
	}
	int c = s.size()-f.size();
	if(f.size()==0){
		cout<<s.size()<<" "<<1;
		return 0;
	}
	f.clear();
	int cnt =0, mx = -1;
	for(int i=1; i<s.size(); i++){
		if(f.back()=='(' && s[i]==')'){
			f.pop_back();
			cnt+=2;
		}
		else{
			f.push_back(s[i]);
			cnt=0;
		}
		if(mx<cnt){
			mx = cnt;
		}
	}
	if(mx == -1 || mx == 0){
		cout<<0<<" "<<1;
		return 0;
	}
	cout<<mx<<" "<<c/mx;
	//cout<<s.size()-f.size();
}