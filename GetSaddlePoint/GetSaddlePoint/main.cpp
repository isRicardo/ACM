#include"getsaddlepoint.h"

int main()
{
    FLOAT A[5][5] = { {1,7,6,1,1},
                     {2,1,4,1,1},
                     {1,1,7,1,1},
                     {1,1,8,4,1},
                     {1,10,9,1,1}};
    FLOAT fXmax[5];
    ULONG ulYpos[5];
    FLOAT ftmpmax = 0;
    FLOAT ftmpmin = 0;
    ULONG ulwid = 0;
    ULONG ulhei = 0; 
    FLOAT fSaddlePoint = 0;
    INT flag = 1;
    INT fSaddlePoint_x;
    INT fSaddlePoint_y;
    /*找到每行的最大值，及其所在列*/
    for (ulhei = 0; ulhei < 5; ulhei++ )    
    {
        ftmpmax = 0;
        for (ulwid = 0; ulwid < 5; ulwid++)
        {
            if ( A[ulhei][ulwid] > ftmpmax)
            {
                ftmpmax = A[ulhei][ulwid];
            }
        }
        fXmax[ulhei] = ftmpmax;

        for (ulwid = 0; ulwid < 5; ulwid++)
        {
            if ( A[ulhei][ulwid] == ftmpmax)
            {
                ulYpos[ulhei] = ulwid;
            }
        }
    }

    for (ulhei = 0; ulhei < 5 ;ulhei++)
    {
        flag = 1;
        ftmpmin = fXmax[ulhei];
        for (int i = 0; i < 5; i++)
        {       
            if (A[i][ulYpos[ulhei]] < ftmpmin)     
            {
                flag = 0;
                break;
            }           
        }
        if (flag)
        {
           fSaddlePoint_x =  ulYpos[ulhei];
           fSaddlePoint_y = ulhei;
           fSaddlePoint = ftmpmin;
           cout<<fSaddlePoint<<endl;
           cout<<"("<<fSaddlePoint_x+1<<","<<fSaddlePoint_y+1<<")"<<endl;
        }
        
    }

   

    while (true)
    {

    }
    return 0;
}