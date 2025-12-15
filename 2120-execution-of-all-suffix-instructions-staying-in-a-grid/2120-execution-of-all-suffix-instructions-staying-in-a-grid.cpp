class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int l=n-1;
        vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
                int f=startPos[0];
                int s1=startPos[1];
                int count=0;
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='R')
                {
                    if(s1<l)
                    {
                        s1++;
                        count++;
                    }
                    else break;
                }
                else if(s[j]=='L')
                {
                    if(s1>0)
                    {
                        s1--;
                        count++;
                    }
                    else break;
                }
                else if(s[j]=='U')
                {
                    if(f>0)
                    {
                        f--;
                        count++;
                    }
                    else break;
                }
                else if(s[j]=='D')
                {
                    if(f<l)
                    {
                        f++;
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