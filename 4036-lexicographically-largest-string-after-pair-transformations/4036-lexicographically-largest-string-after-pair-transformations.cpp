class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            string temp="";
            char c='a';
            while(c!='z'&&num>1)
            {
                if(num&1)
                {
                    temp+=c;
                    num--;
                }
                c++;
                num/=2;
            }
            while(c=='z'&&num>1)
            {
                temp+=c;
                num--;
            }
            if(num==1) temp+=c;
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};