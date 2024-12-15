#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) 
{
    int l=s.length()-2;
    if(s[8]=='A')
    {
        string str="";
        if(s[0]=='1' && s[1]=='2')
        {
            str=str+"00:";
        
        for(int i=3;i<l;i++)
        {
            str=str+s[i];
        }
        }
        else
        for(int i=0;i<l;i++)
        {
            str=str+s[i];
        }
        return str;
    }
    string str="";
    for(int i=0;i<l;i++)
    {
        if(s[i]==':' || i>=3)
        {
            str=str+s[i];
        }
        else
        {
             if(s[0]=='1' && s[1]=='2')
             {
                for(int i=0;i<l;i++)
                {
                    str=str+s[i];
                }
                return str;
             }  
             else
             {
                int t=(int)s[0]-48;
                t=(t*10)+((int)s[1]-48);  
                t=t+12;
                str=str+(char)((t/10)+48);      
                str=str+(char)((t%10)+48);      
                for(int i=2;i<l;i++)            
                {
                    str=str+s[i];
                }
                return str;
             }
        }
    }
    return str;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}