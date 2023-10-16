#include<bits/stdc++.h>
using namespace std;

double fun(double x)
{
	return (x*x)-(x-2);
}

void tra()
{
	double a,b;
	cin>>a>>b;
	double ans=(b-a)*(fun(a)+fun(b))/2;
	cout<<ans<<endl;
}
void mul_tra()
{
	double a,b,n;
	cin>>a>>b>>n;
	double h=(b-a)/n;
	vector<double> v(1000);
	int j=0;
	for(double i=a; i<=b; i+=h)
	{
        v[j++]=fun(i);
	}

	double ans=0;
	j=0;
	for(int i=0; j<n-1; i++)
	{
		ans+=(h*(v[j]+v[j+1]))/2;
		j++;
	}
	cout<<ans<<endl;

}

int main()
{
	mul_tra();
}