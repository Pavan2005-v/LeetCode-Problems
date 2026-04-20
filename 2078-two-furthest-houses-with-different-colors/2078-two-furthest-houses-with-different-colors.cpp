class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=INT_MIN;
        for(int i=0;i<colors.size();i++)
        {
            for(int j=i+1;j<colors.size();j++)
            {
                if(colors[i]!=colors[j])
                {
                    int sum=abs(i-j);
                    ans=max(ans,sum);
                }
            }
        }
        return ans;
    }
};