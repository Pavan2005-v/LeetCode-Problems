class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num/=10;
        }
        sort(ans.begin(),ans.end());
        int sum=(ans[0]*10+ans[2])+(ans[1]*10+ans[3]);
        return sum;        

    }
};