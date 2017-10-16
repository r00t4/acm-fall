#include<iostream>
using namespace std;
int main()
{
	int n,m,d,x;
	cin>>n>>m>>d>>x;
	cout<<(((n^m)^d)^x);
}