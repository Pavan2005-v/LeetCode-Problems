class Solution {
public:
    char findKthBit(int n, int k) {
        string ans="0";
        for(int i=0;i<n-1;i++)
        {
            string temp=ans;
            ans+='1';
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]=='0') ans+='1';
                else ans+='0';
            }
        }
        return ans[k-1];
    }
};