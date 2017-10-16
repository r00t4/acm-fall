#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s=0,d=0;
	string a,b;
	for(int i=0; i<n; i++){
		s=0,d=0;
		cin>>a>>b;
		int x=1,y=1;
		for(int j=0; j<a.size(); j++){
			s+=(a[j]-48)*x;
			x*=10;
		}
		//cout<<s<<" ";
		for(int j=0; j<b.size(); j++){
			d+=(b[j]-48)*y;
			//cout<<d<<" ";
			y*=10;
		}
		//cout<<d<<" ";
		int c = s+d;
		//cout<<c<<endl;
		string sd="";
		int k=10;
		while(c>0){
			sd+=(c%k)+48;
			//cout<<c%k<<" ";
			c/=k;
		}
		bool tr = false;
		for(int j=0; j<sd.size(); j++){
			if(!tr && sd[j]=='0'){
				continue;
			}
			tr = true;
			cout<<sd[j];
		}
		cout<<endl;
	}
}