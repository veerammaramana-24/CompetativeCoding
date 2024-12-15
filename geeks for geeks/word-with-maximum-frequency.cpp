
class Solution {
  public:
    string maximumFrequency(string &str) 
    {
        // Your code foes here.
        vector<string>v;
        unordered_map<string,int>mp;
        stringstream txt(str);
        string word;
        while(getline(txt,word,' '))
        {
            v.push_back(word);
            mp[word]++;
        }
        int maxf=0;
        for(auto ele: mp)
        {
            maxf=max(maxf,ele.second);
        }
        string ans;
        for(auto res: v)
        {
            if(mp[res]==maxf)
            {
                ans=res;
                break;
            }
        }
        return ans+" "+to_string(maxf);
    }
};