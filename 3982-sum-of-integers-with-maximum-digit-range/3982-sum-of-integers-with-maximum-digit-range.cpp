class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int>temp;
        int digitRange=INT_MIN,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int maxi=0,mini=10;
            while(num>0)
            {
                maxi=max(maxi,num%10);
                mini=min(mini,num%10);
                num/=10;
            }
            digitRange=max(digitRange,maxi-mini);
            temp.push_back(maxi-mini);
        }
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==digitRange) ans+=nums[i];
        }
        return ans;
    }
};