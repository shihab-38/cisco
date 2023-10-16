#include<bits/stdc++.h>
using namespace std;
#define error 1
#define trv 0.56714329

double func(double x)
{
	return exp(-x)-x;
}

double solution(double x0, double x1)
{
	int i=0;
	double x2,f0,f1,f2;
	while(i<100)
	{
		f0=func(x0);
		f1=func(x1);
		x2= x1- (f1*(x1-x0))/(f1-f0);
        double et=abs((trv-x2)/trv)*100;
        if(et<=error)
        	break;
		x0=x1;
		x1=x2;
		i++;
	}

	return x2;
}

int main()
{
	double x0,x1;
	cout<< "Enter the value of x0, x1: "<<endl;
	cin>>x0>>x1;
	//double x0=0,x1=1;
	double root= solution(x0,x1);
	cout<< "The value of root is: "<< root<<endl;
	return 0;
}