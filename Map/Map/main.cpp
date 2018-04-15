#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string find_repalce(string one_str)
{
    string numbers="222333444555666777888999";
    string Letters[24]={"A","B","C","D","E","F","G","H","I","J","K","L",
                    "M","N","O","P","R","S","T","U","V","W","X","Y"};
    string re_str=one_str;
    for (int j = 0; j<24;j++)
    {
        size_t found = re_str.find(Letters[j]);    
        if (found != string::npos)
        {
            re_str[found] = numbers[j];
        }
    }
    return re_str;
}
vector<string> getMap(vector<string> s)
{
    string srep;
    vector<string> vsreps;
    vector<string>::iterator it;
   
    for (it = s.begin(); it != s.end(); it++)
    {       
        srep = *it;      
        for (int i = 0; i< (*it).size(); i++)
         {
             srep = find_repalce(srep);       
         } 
        vsreps.push_back(srep);
    }
    return vsreps;

}
int main()
{
    int n;
    string stmp;
    vector<string> vsInput;
    vector<string> vsOutput;
    cin>>n;
    while(n--)
    {
        cin>>stmp;      
          /* É¾³ý - */ 
        string tmp;
        for (int i = 0; i < stmp.size(); i++)
        {
            if( stmp[i] != '-')
                tmp.push_back(stmp[i]);
        }
        vsInput.push_back(tmp);
    }
      
     vsOutput=getMap(vsInput); 
            
        /*ÅÅÐò*/
      sort(vsOutput.begin(),vsOutput.end());

        vector<string>::iterator itr;
        for ( itr = vsOutput.begin(); itr != vsOutput.end(); itr++)
        {
            (*itr).insert(3,"-");
        }

        int c = 1;     
        for (int i = 0; i < vsOutput.size()-1; i++)            
        {
            if (vsOutput[i] == vsOutput[i+1])
            {                   
                c++;
            }
            else if( vsOutput[i] != vsOutput[i+1] && c != 1)
            {
                cout<<vsOutput[i]<<" "<<c<<endl;
                c=1;
            }
        }
   
        if(c ==0)  
        { 
            puts("No duplicates."); 
        }            
        while (true)
        {

        }
    return 0;
}