class Solution {
public:
    int maximum69Number (int num) {
        vector<int>ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num/=10;
        }
        reverse(ans.begin(),ans.end());
        int ans1=0;
        int j;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==6)
            {
                ans1=ans1*10+9;
                j=i;
                break;
            }
            else
            {
                ans1=ans1*10+9;
            }
        }
        for(int i=j+1;i<ans.size();i++)
        {
            ans1=ans1*10+ans[i];
        }
        return ans1;
    }
};