#include<bits/stdc++.h>
using namespace std;
struct sam{
	int o;
	int d;
};
bool sample(sam a1,sam a2)
{
	return a1.d<a2.d;
}
int main()
{
	int t;
	cin>>t;
	
	while(t!=0)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int b[n];
		sam d[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=abs(k-a[i]);
			d[i]={a[i],b[i]};
		}
		stable_sort(d,d+n,sample);
		for(int i=0;i<n;i++)
		{
			cout<<d[i].o<<" ";
		}
		cout<<endl;
		t--;
	}
}
