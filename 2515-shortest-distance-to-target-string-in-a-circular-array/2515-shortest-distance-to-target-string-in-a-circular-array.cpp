class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX,n=words.size();
        for(int i=0;i<n;i++)
        {
            if(words[i]==target)
            {
                int ans1=abs(i-startIndex);
                int ans2;
                if(startIndex<i)
                {
                    ans2=startIndex+(n-i);
                }
                else
                {
                    ans2=i+(n-startIndex);
                }
                ans=min(ans,min(ans1,ans2));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};