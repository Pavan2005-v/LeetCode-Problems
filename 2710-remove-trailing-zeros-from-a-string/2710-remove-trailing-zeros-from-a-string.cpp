class Solution {
public:
    string removeTrailingZeros(string num) {
        reverse(num.begin(),num.end());
        int index;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]!='0') 
            {
                index=i;
                break;
            }
        }
        string ans="";
        for(int i=index;i<num.size();i++)
        {
            ans+=num[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};