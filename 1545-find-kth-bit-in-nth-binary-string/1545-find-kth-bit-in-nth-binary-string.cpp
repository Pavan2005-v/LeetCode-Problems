class Solution {
public:
    char findKthBit(int n, int k) {
        string ans="0";
        for(int i=0;i<n-1;i++)
        {
            ans+='1';
            int siz=ans.size()-2;
            for(int j=siz;j>=0;j--)
            {
                if(ans[j]=='0') ans+='1';
                else ans+='0';
            }
        }
        return ans[k-1];
    }
};