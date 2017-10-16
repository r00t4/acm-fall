#include<iostream>
#include<vector>
#include<deque>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	long long mx = -1;
	for(int i=0; i<n; i++){
		int r=1, l=1;
		while(a[i]<=a[i+r] && i+r<n){
			r++;
		}
		while(a[i]<=a[i-l] && i-l>=0){
			l++;
		}
		//cout<<r<<" "<<l<<endl;
		if(a[i]*(r+l-1)>mx){
			mx = a[i]*(r+l-1);
		}
	}
	cout<<mx;
}