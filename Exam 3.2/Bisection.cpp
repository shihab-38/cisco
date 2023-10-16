#include<bits/stdc++.h>
using namespace std;
#define ES 2
#define ET 1.00

double res(double x)
{
	return (powl(x,3)-powl(x,2)+2);
	//double ans= -2*(powl(x,6))-1.5*powl(x,4)+10*x+2;
	//return ans;
}
void bisection(double a, double b)
{
	double c,d;

    for(int i=1; i<=100; i++)
    {
    	
    	c=(a+b)/2;
    	if(res(a)* res(c)<0)
    		b=c;
    	else
    		a=c;
    	if(i!=1)
    	{
            double aa=abs(((c-d)/c)*100);
           // cout<<c<< " " <<d<< " "<<aa<<endl;
            if(aa<ES)
            	break;
    	}
    	d=c;
    	
    }

    cout<< "The root is "<<c<<endl;
}
void falsi(double a, double b)
{
	if(res(a)* res(b)>=0)
	{
		cout<< "Please input the correct value of a and b"<<endl;
		return;
	}
	double c,d;
	for(int i=1; i<=100000; i++)
	{
		c=((a*res(b))-(b*res(a)))/(res(b)-res(a));
		if(res(c)*res(a)<0)
			b=c;
		else
			a=c;
		if(i!=1)
		{
			// double aa=abs(((c-d)/c)*100);
			// //cout<<aa<< " "<<c<<endl;
			// if(aa<ES)
			// 	break;
		}
		d=c;

	}
	cout<<"The root is : "<<c<<endl;
}


int main()
{
	double a,b,c,d;
	cout<< "Enter the value of a and b"<<endl;
	cin>>a>>b;
	//bisection(a,b);
	falsi(a,b);
   
	
}