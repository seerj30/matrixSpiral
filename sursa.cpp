#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
ifstream f("in.txt");

int main()
{
	int i,j,a[101][101]={},n,k;
	f>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			f>>a[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<setw(3)<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	for(k=1;k<=(n+1)/2;k++)
    {
		for(i=k;i<=n-k+1;i++)
			cout<<a[k][i]<<" ";
		cout<<endl;
		for(i=k+1;i<=n-k+1;i++)
			cout<<a[i][n-k+1]<<" ";
		cout<<endl;
		for(i=n-k;i>=k;i--)
			cout<<a[n-k+1][i]<<" ";
		cout<<endl;
		for(i=n-k; i>k;i--)
			cout<<a[i][k]<<" ";
		cout<<endl;
	}
	return 0;
}
