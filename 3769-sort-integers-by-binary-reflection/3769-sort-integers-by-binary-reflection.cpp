class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>> ans;
        for(int i:nums)
        {
            int num=i;
            string s="";
            while(i>0)
            {
                s+=to_string(i%2);
                i/=2;
            }
            int rev=0;
            int c=0;
            for(int j=s.length()-1;j>=0;j--)
            {
                if(s[j]=='1')
                {
                    rev+=(pow(2,c));
                }
                c++;
            }
            ans.push_back({rev,num});
        }
        sort(ans.begin(),ans.end());
        vector<int> ans1;
        for(int i=0;i<ans.size();i++)
        {
            ans1.push_back(ans[i].second);
        }
        return ans1;
    }
};