#include <iostream>
#include <vector>
using namespace std;

/* 计算每一位对应的乘积*/
void mul_every_num(vector<int>  inum, int c,int x,int Result[6])
{
	int tmpMul = 0;
	int tmpResult= 0;
	int tmpAdd=0;
    int mflag =0;

	for (int i = 0; i < c; i++)
	{
	    tmpMul = (inum[i] * x) + mflag;
        tmpAdd = tmpMul / 10;
        tmpResult = tmpMul % 10;
        
        if (tmpAdd != 0)
        {
            Result[]
        }
        /*	tmpMul = inum[i] * x;
		tmpAdd[i]  =   tmpMul/10;   //十位数,进位数
		tmpResult[i] = tmpMul%10;   //个位数，保留数	
    }
    if (tmpAdd[0] != 0)
    {   
        Result[0] = tmpAdd[0];
        for (int i = 1; i < c; i++)
        {
            Result[i]=tmpAdd[i]+tmpResult[i-1];
	    }
        Result[c]=tmpResult[c-1];
    }
    else
    {
        for (int i = 0; i < c-1 ;i++)
        {
            Result[i]=tmpAdd[i+1]+tmpResult[i];
        }  
         Result[c-1]=tmpResult[c-1];
    }
    */
}

/* 每次乘积对应错位相加*/
vector<int> add_every_num(int Input[][7],int c)
{
	//Output 倒序
    vector<int> R;
	int tmpR=0;
    int t=0;

    R.push_back(Input[c-1][6]);
    R.push_back(Input[c-2][6]+Input[c-1][5]);
    
    for (int i = 6; i >= 2 ; i--)
    {
        t=i;
        for (int j = 0; j < c; j++) 
        {
            tmpR=tmpR+Input[j][t];
            t--;
        }
        R.push_back(tmpR);
        tmpR=0;
    }

	R.push_back((Input[1][0]+Input[0][1]));
    R.push_back(Input[0][0]);

    return R;
}

/*判断是否进位，获得相乘结果*/
vector<int> get_result(vector<int> tmpR)
{
    vector<int> finR;
    vector<int>::iterator it;
    int addnum = 0;
    int resnum = 0;
    int flag = 0;
    int tmp = 0;

    for (it = tmpR.begin(); it != tmpR.end(); it ++) 
    {
        tmp = *it+flag;
        addnum = tmp / 10;
        resnum = tmp % 10;
        finR.push_back(resnum);  
        flag = addnum;
    }

    return finR;
}
int main()
{
	char input[7]={0};
	int tmpInput[7]={0};
	int mulResult[6][7]={0};
    int n=0;

	vector<int> addResult;
    vector<int> Result;
	
	while(cin>>input>>n)
	{
		/*需要乘法次数*/
		int ct=strlen(input);
		for ( int i = 0; i < ct ; i++)
		{
			tmpInput[i]=input[i]-'0';
            Result.push_back(tmpInput[i]);
		}
        
        for ( int j = 0;j < n; j++)
        {
            int f = Result.size();
            for (int i = 0; i < f; i++)
		    {
			    mul_every_num( Result, f, tmpInput[i], mulResult[i]);
		    }

		    addResult=add_every_num(mulResult ,f );

	        Result=get_result(addResult);
                
            //reverse(Result.begin(), Result.end());
           
        }
	}	
	while (true)
	{

	}
	
	return 0;
}  
