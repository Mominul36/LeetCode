class Solution {
public:
    int singleNumber(vector<int>& v) {
         int len=v.size();
         map<int,int> mp;
         for(int i=0;i<len;i++)
         {
             int x=v[i];
             mp[x]++;
         }
         for(auto it:mp)
         {
             if(it.second==1)
             {
                 return it.first;
             }
         }
         return 0;
    }
};
