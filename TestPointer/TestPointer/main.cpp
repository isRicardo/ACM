#include<iostream>
using namespace std;
#define N 5

int main()
{
    int m = 5;
    int n =5;
    char (*a)[N];//ָ�������ָ��
    a = (char (*)[N])malloc(sizeof(char *) * m);
    printf("%d\n", sizeof(a));//4��ָ��
    printf("%d\n", sizeof(a[0]));//N��һά����
    free(a); 
    while (true)
    {
    }
}