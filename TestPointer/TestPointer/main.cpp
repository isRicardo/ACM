#include<iostream>
using namespace std;
#define N 5

int main()
{
    int m = 5;
    int n =5;
    char (*a)[N];//指向数组的指针
    a = (char (*)[N])malloc(sizeof(char *) * m);
    printf("%d\n", sizeof(a));//4，指针
    printf("%d\n", sizeof(a[0]));//N，一维数组
    free(a); 
    while (true)
    {
    }
}