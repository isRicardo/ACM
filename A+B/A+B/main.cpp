#include<iostream>
using namespace std;

int main()
{
    int t = 0;
    char a[1001] = {0};
    char b[1001] = {0};
    int ia[1001] = {0};
    int ib[1001] = {0};
    int tmpsum[1001] = {0};
    int sum[1002] = {0};
    int tmp = 0;
    int carry = 0;
    int len_a = 0;
    int len_b = 0;
    int len = 0;
    int i = 0;
    int j = 0;
    int s = 0;
    cin >> t;
    for ( j = 0; j < t; j++)
    {
        scanf("%s",a);
        scanf("%s",b);

        len_a = strlen(a);
        for (i = 0; i < len_a; i++)
        {
            ia[i] = a[i] - '0';
        }

        len_b = strlen(b);  
        for (i = 0; i < len_b; i++)
        {
            ib[i] = b[i] - '0';
        }

        len = len_a > len_b ? len_a :len_b;
        for (i = 0; i < len - 1; i++)      
        {
            tmpsum[i] = ia[i] + ib[i];          
        }

        for (i = len - 1; i >= 0; i--)
        {
            tmp = tmpsum[i] + carry;
            if (tmp >= 10)
            {
                sum[s] = tmp % 10;
                carry  = tmp /10;           
            }
            else
            {
                sum[s] = tmp;
            }            
            s++;
        }
        cout << "case" << j+1 << ":" <<endl;
        for (i = len - 1; i >= 0; i--)
        {
            cout << sum[i];
        }

    }
   
    while (true)
    {

    }
    return 0;
}