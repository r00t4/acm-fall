#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s,ans[n];
	for(int i=0; i<n; i++){
		cin>>s;
		vector<char> v1;
		v1.push_back(s[0]);
		for(int j=1; j<s.size(); j++){
			if(s[j]==')' && v1.back()=='('){
				v1.pop_back();
			}
			else if(s[j]==']' && v1.back()=='['){
				v1.pop_back();
			}
			else if(s[j]=='}' && v1.back()=='{'){
				v1.pop_back();
			}
			else{
				v1.push_back(s[j]);
			}
		}
		if(v1.empty()){
			ans[i]="YES";
		}
		else{
			ans[i]="NO";
		}
	}
	for(int i=0; i<n; i++){
		cout<<ans[i]<<endl;
	}
}