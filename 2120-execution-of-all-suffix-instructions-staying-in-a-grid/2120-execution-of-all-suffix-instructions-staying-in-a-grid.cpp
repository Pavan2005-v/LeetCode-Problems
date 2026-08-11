class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int size=s.length();
        vector<int>ans;
        for(int i=0;i<size;i++)
        {
            int l=startPos[1],r=startPos[0],count=0;
            for(int j=i;j<size;j++)
            {
                if(s[j]=='R')
                {
                    if(l+1<n)
                    {
                        l++;
                        count++;
                    }
                    else 
                    {
                        break;
                    }
                }
                else if(s[j]=='L')
                {
                    if(l-1>=0)
                    {
                        l--;
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[j]=='D')
                {
                    if(r+1<n)
                    {
                        r++;
                        count++;
                    }
                    else 
                    {
                        break;
                    }
                }
                else 
                {
                    if(r-1>=0)
                    {
                        r--;
                        count++;
                    }
                    else break;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};