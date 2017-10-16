#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int a[100100],b[100100],c[100100];

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> x,y,z;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	for(int i=0; i<k; i++){
		cin>>c[i];
	}
	x.push_back(a[n-1]);
	for(int i=n-2; i>=0; i--){
	    x.push_back(x.back()+a[i]); 
	}
	y.push_back(b[m-1]);
	for(int i=m-2; i>=0; i--){
	    y.push_back(y.back()+b[i]);
	}
	z.push_back(c[k-1]);
	for(int i=k-2; i>=0; i--){
	    z.push_back(z.back()+c[i]);
	}
	while(true){
		if(!x.empty() && !y.empty() && !z.empty()){
		 	if(x.back()==y.back() && y.back()==z.back()){
				cout<<x.back();
				return 0;
			}
			int mx = max(x.back(),max(y.back(),z.back()));
		
			if(x.back()==mx){
				x.pop_back();
			}
			if(y.back()==mx){
				y.pop_back();
			}
			if(z.back()==mx){
				z.pop_back();
			}
		}
		else{
			break;
		}
	}
	cout<<0;
	return 0;	
}
