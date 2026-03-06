class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>temp(nums.begin(),nums.end());
        long long int ans=1;
        while(k--)
        {
            int num=temp.top();
            temp.pop();
            num++;
            temp.push(num);
        }
        const long long MOD=1e9+7;
        while(temp.size())
        {
            ans=((temp.top())*ans)%MOD;
            temp.pop();
        }
        return ans;
    }
};