
class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           int res=0;
           unordered_map<string,int>mp;
           for(int i=0;i<n;i++)
           {
               mp[list[i]]++;
           }
           for(auto ele:mp)
           {
               if(ele.second==2)
               {
                   res++;
               }
           }
           return res;
        }

};