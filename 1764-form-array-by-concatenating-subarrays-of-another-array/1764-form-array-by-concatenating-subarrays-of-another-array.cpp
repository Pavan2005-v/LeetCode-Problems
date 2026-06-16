class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int ind=0,i=0,j=0;
        while(i<groups.size())
        {
            while(ind<nums.size()&&nums[ind]!=groups[i][j])
            {
                ind++;
            }
            int temp=ind;
            if(ind<nums.size())
            {
                int r=0;
                for(int k=0;k<groups[i].size();k++)
                {
                    if(groups[i][k]==nums[ind])
                    {
                        ind++;
                    }
                    else
                    {
                        r=1;
                        break;
                    }
                }
                if(r)
                {
                    temp++;
                    ind=temp;
                }
                else 
                {
                    i++;
                }
            }
            else return false;
        }
        return i==groups.size();
    }
};