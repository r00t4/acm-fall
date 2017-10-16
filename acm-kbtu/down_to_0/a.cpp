#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		int cnt=0;
		while(a[i]>3){
			int k = a[i];
			k = a[i]/2;
			cnt++;
		}
		cout<<cnt+a[i]<<endl;
	}
}