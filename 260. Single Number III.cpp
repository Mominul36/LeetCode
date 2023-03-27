class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        vector<int> a;
        map<int,int> mp;
        int len=v.size();
        for(int i=0;i<len;i++)
        {
            int x=v[i];
            mp[x]++;
        }

        for(auto it:mp)
        {
            if(it.second==1)
            {
                a.push_back(it.first);
            }
            if(a.size()==2)
            return a;
        }
       return a; 
    }
};
