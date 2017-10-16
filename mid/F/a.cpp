#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int i=0; i<n; i++){
    	string s;
    	cin>>s;
    	//stack<char> p;
    	vector<char> v;
    	for(int j=0; j<s.size(); j++){
    		if(v.empty()){
    			v.push_back(s[j]);
    		}
    		else if(s[j]==v.back()){
    			v.pop_back();
    		}
    		else{
    			v.push_back(s[j]);
    		}
    	}   	
    	cout<<"Case "<<i+1<<": "<<v.size()<<endl;
    }
}