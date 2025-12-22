class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++)
        {
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int a=temp[1]-temp[0];
            int k1=0;
            for(int k=2;k<temp.size();k++)
            {
                if(a!=(temp[k]-temp[k-1]))
                {
                    k1=1;
                    ans.push_back(false);
                    break;
                }
            }
            if(!k1) ans.push_back(true);
        }
        return ans;
    }
};