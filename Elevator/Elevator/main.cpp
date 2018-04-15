/*********************************
1008
**********************************/

#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int a[100] = {0};
    int dif[99] = {0};
    int sec = 0;

    while ( cin >> n && n != 0)
    {
        sec = 0;
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }   
        
        for (int i = 0; i <= n-1; i++)
        {
            dif[i] = a[i+1] - a[i];
            if (dif[i] > 0)
            {
                sec = sec + 6 * dif[i]; /*为正则上*/
            }
            else
            {
                sec = sec - 4 * dif[i];/*为负则下*/
            }
        }
        sec = sec + 5 * n;/*停留*/
        cout << sec <<endl;
    }
    while (true)
    {

    }
    return 0;
}