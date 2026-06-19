class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(int i=0;i<spells.size();i++)
        {
            if((long long)spells[i]*potions[potions.size()-1]<success) 
            {
                ans.push_back(0);
                continue;
            }
            int l=0;
            int r=potions.size()-1;
            int temp=0;
            int k=0;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if((long long)potions[mid]*spells[i]>=success)
                {
                    temp=mid;
                    r=mid-1;
                    k=1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(!k) ans.push_back(temp);
            else ans.push_back(potions.size()-temp);
        }
        return ans;
    }
};