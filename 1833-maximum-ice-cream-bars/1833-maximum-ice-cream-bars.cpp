class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxi=INT_MIN;
        for(int i:costs) maxi=max(i,maxi);
        vector<int>nums(maxi+1);
        for(int i=0;i<costs.size();i++)
        {
            nums[costs[i]]++;
        }
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        {
            int count=nums[i];
            while(count>0)
            {
                temp.push_back(i);
                count--;
            }
        }
        int ans=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]<=coins)
            {
                coins-=temp[i];
                ans++;
            }
            else break;
        }
        return ans;
    }
};