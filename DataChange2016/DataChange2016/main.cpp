#include<stdio.h>
int main()
{
    int n;
    int  a[100];
    int tmp;
    while (EOF != scanf("%d",&n) && n != 0)
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        tmp = a[0];
      for (int i = 0; i < n; i++)
      {
          if (tmp >= a[i])
          {
              j = i;
          }
      }
      tmp = a[0];
      a[0] = a[j];
      a[j] = tmp;
      for (int i = 0; i < n; i++)
      {
          printf("%d", a[i]);
          if (i != n-1)
          {
              printf("  ");
          }
      }
      printf("\n");
    }
    return 0;
}