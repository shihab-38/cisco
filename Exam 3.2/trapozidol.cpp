//multiple Trapizoial 
#include<bits/stdc++.h>
using namespace std;
double fun(double x) 
{
    return x*x-(x-2); // y^2-(y-2)
}
void sim_trap()
{                  
    double a, b;
    cin >> a >> b;
    cout << (b-a)*((fun(a)+fun(b))/2);
}
void mul_trap()
{   
    double a = 0, b = 2, n = 4; // 4.75 
    cin >> a >> b >> n;
    double h = (b-a)/n;
    vector <double> v(100);
    int j = 0;
    for (double i = a; i <= b; i += h)
    {
        v[j++] = fun(i);
    }
    j = 0;
    double ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        ans += h*((v[j]+v[j+1])/2);
        //ans += ((v[j]+v[j+1]));
        j++;
    }
    cout << ans << endl;
}
int main()
{
    sim_trap();
}