#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	while(true){
		int n;
		cin>>n;
		if(n==0){
			return 0;
		}
		queue<int> a,v;
		stack<int> s;
		for(int i=0; i<n; i++){
			int b;
			cin>>b;
			a.push(b);
		}
		//cout<<a.front();
		int k=1, l =0;
		bool tr = false;
		while(l<2*n){
			if(a.front()==k && !a.empty()){
				v.push(a.front());
				a.pop();
				k++;
			}	
			else if(a.front()!=k && !s.empty() && s.top()==k){
				v.push(s.top());
				s.pop();
				k++;
			}
			else if(!a.empty()){
				s.push(a.front());
				a.pop();
			}
			l++;	
		}
		if(v.size()<n){
			cout<<"no"<<endl;
		}
		else{
			bool tr = true;
			for(int i=1; i<=n; i++){
				if(v.front()!=i){
					cout<<"no"<<endl;
					tr = false;
				}
				v.pop();
			}
			if(tr){
				cout<<"yes"<<endl;
			}
		}
	}
}