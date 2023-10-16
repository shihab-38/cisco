#include<bits/stdc++.h>
using namespace std;
// 0.2 + 25x – 200x^2 + 675x^3 – 900x^4 + 400x^5
double fun(double x)
{
    return 0.2+25*x-200*x*x+675*x*x*x-900*pow(x,4)+400*pow(x,5);
}
void fun_3_8()
{
    double a = 0, b = 2; // 4.75 
    cin >> a >> b;
    double h = (b-a)/3;
    vector <double> v(100);
    int j = 0;
    for (double i = a; i <= b; i += h)
    {
        v[j++] = fun(i);
    }                                                                     
    double I = ((3*h)/8) *(v[0] + 3*v[1] + 3*v[2] + v[3]);
    cout << I << endl;
}
void fun_1_3()
{   
    double a = 0, b = 2; // 4.75 
    cin >> a >> b;
    double h = (b-a)/2;
    vector <double> v(100);
    int j = 0;
    for (double i = a; i <= b; i += h)
    {
        v[j++] = fun(i);
    }
    double ans = 0;
    ans += (2*h) * (v[0]+4*v[1]+v[2]);
    cout << ans/6 << endl;
}
void fun_1_3_mul()
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
    for (int i = 0; i < n-2; i++)
    {
        //ans += h*((v[j]+v[j+1])/2);
        ans += ((v[j]+v[j+1]*4+v[j+2]));
        j += 2;
    }
    cout << ans*((2*h)/6) << endl;
}
int main()
{
    fun_3_8();
}