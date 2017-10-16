#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int main()
{
	int g;
	cin>>g;
	for(int i=0; i<g; i++){
		int n,m;
		long long x;
		cin>>n>>m>>x;
		stack<int> a,b;
		int c[n],d[m];
		for(int j=0; j<n; j++){
			cin>>c[j];
		}
		for(int j=0; j<m; j++){
			cin>>d[j];
		}
		for(int j=n-1; j>=0; j--){
			a.push(c[j]);
		}
		for(int j=m-1; j>=0; j--){
			b.push(d[j]);
		}
		int cnt=0;
		while(true){
			if(a.empty() && b.empty()){
				cout<<cnt;
				break;
			}
			int mn = min(a.top(),b.top());
			if(a.top()>=x && mn==a.top()){
				x-=a.top();
				a.pop();
				cnt++;
			}
			if(b.top()>=x && mn==b.top()){
				x-=b.top();
				b.pop();
				cnt++;
			}
			if(x<a.top() && x<b.top()){
				cout<<cnt;
				break;
			}
		}
			
	}
}