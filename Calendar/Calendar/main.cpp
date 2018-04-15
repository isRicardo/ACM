#include <iostream>
#include <string>
using namespace std;

typedef unsigned long ULONG;

int main()
{
    /*月份名*/
    string Haab[19] = {"pop" ,"no", "zip","zotz", "tzec", "xul", "yoxkin","mol","chen","yax", "zac", "ceh", "mac", "kankin","muan", "pax","koyab", "cumhu" ,"uayet"};   
   
    /* 天名*/
    string Tzolkin[20] ={"imix","ik","akbal","kan","chicchan","cimi"," manik","lamat", "muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};   

    int n = 0;
    int iHaabDay[1000];
    string sHaabMonth[1000];
    int iHaabYear[1000];
    string node;
    int iMonth = 18;
    ULONG iReal = 0;
    ULONG itmpReal = 0;
    int iTkYear = 0;
    int iTkMonth = 0;
    int iTkDay = 0;
    string sTkDay;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> iHaabDay[i] >> node >>sHaabMonth[i] >> iHaabYear[i];
             
    }
    cout << n <<endl;
    for (int i = 0; i < n; i++)
    {             
        for (int j = 0; j < 18; j++)
        {
            if (sHaabMonth[i] == Haab[j])
            {   
                iMonth = j  ;
                break;
            }
        }

        iReal =  iHaabYear[i] * 365 + iMonth *20 + iHaabDay[i];       

        iTkYear = iReal /260;
        iTkMonth = iReal % 260;
        iTkDay = iReal % 13 +1 ;
        sTkDay = Tzolkin[iTkDay];
        cout<< iTkDay <<" "<< sTkDay <<" "<< iTkYear <<endl;
/* 
        do
        {
            iTkYear ++;
        } 
        while ( (iTkYear * 260) < iReal);

        iTkYear = iTkYear - 1;

   
        itmpReal = iReal - iTkYear * 260 ;
        do
        {
            iTkMonth ++;
        }
        while ( (iTkMonth * 20) < itmpReal);

        iTkMonth = iTkMonth -1;

        iTkDay = itmpReal - iTkMonth * 20; 
        
        sTkDay = Tzolkin[iTkDay];


        cout<< (iReal%13+1)<<" "<< sTkDay <<" "<< iTkYear <<endl;*/

    }
      
    while (true)
    {
    }
    return 0;
}