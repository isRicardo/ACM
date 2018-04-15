/*****************************
1009
******************************/
#include<iostream>
using namespace std;
#define max 1000

int main()
{
    int m = 0;
    int n = 0;
    int j[max];
    int f[max];
    double a[max];
    int ans = 0;
    int itmp = 0;
    double dtmp = 0;

    cin >> m >> n;
    while (m != -1 && n != -1)
    {
        memset(j, 0, max * sizeof(int));
        memset(f, 0, max * sizeof(int));
        memset(a, 0, max * sizeof(double));
        for (int i = 0; i < n; i++)
        {
            cin >> j[i] >> f[i];
            a[i] = j[i] * 1.0 /(double)f[i];
        }
        /*½µÐò*/
        for (int i = 0; i < n-1; i++)
            for(int t = 0; t < n-1-i; t++)
            {
                if(a[t] < a[t+1])
                {
                    dtmp = a[t], a[t] = a[t+1], a[t+1] = dtmp;
                    itmp = j[t], j[t] = j[t+1], j[t+1] = itmp;
                    itmp = f[t], f[t] = f[t+1], f[t+1] = itmp; 
                }
            }
        for (int i = 0; i < n; i++)
        {
           
        }
    }
    while (true)
    {

    }
    return 0;
}