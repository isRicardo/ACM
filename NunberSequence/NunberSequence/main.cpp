#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int i = 0;
    int f[200] = {0};
    
    while (cin >> a >> b >> n)
    {
        if (a == 0 && b == 0 && n == 0)
        { 
            continue;
        }
        f[0] = 1;
        f[1] = 1;
        if (n >= 3)
        {
            for (i = 2; i < n; i++)
            {
                f[i] = (a * f[i-1] + b*f[i-2]) % 7;
            }
        }      
        cout<< f[n-1];

    } 
    while (true)
    {

    }
   return 0;

}