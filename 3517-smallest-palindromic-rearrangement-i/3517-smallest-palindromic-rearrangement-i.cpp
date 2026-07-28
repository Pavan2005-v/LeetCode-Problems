class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>temp(26);
        for(char c:s)
        {
            temp[c-'a']++;
        }
        int ind=-1;
        string ans="";
        for(int i=0;i<26;i++)
        {
            if(temp[i]&1)
            {
                ind=i;
                temp[i]--;
            }
            int num=temp[i]/2;
            while(num>0)
            {
                ans+=(i+'a');
                num--;
            }
            temp[i]/=2;
        }
        if(ind!=-1)
        {
            ans+=(ind+'a');
        }
        for(int i=25;i>=0;i--)
        {
            int num=temp[i];
            while(num>0)
            {
                ans+=(i+'a');
                num--;
            }
        }
        return ans;
    }
};