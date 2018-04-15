#include<iostream>
using namespace std;

int main()
{
    int n;
    int f[10000];
    memset(f, 0, sizeof(int)*10000);
    f[0] = 7;
    f[1] = 11;
    while(cin >> n)
    {
         for (int i = 2; i <= n; i++)
         {
            f[i] = f[i-1] + f[i-2];
         }

       if (f[n] % 3 == 0)
            cout << "yes"<<endl;
        else
            cout << "no"<<endl;
    }   
    while (true)
    {

    }
    return 0;
}
