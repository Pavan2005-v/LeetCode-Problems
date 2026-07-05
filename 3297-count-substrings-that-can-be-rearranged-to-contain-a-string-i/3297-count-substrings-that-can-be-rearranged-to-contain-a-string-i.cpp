class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        long long ans=0;
        unordered_map<char,int>mpp;
        for(char c:word2) mpp[c]++;
        int l=0,r=0,count=0,n=word1.length(),num=mpp.size();
        while(r<word1.length())
        {
            mpp[word1[r]]--;
            if(mpp[word1[r]]==0)
            {
                count++;
            }
            while(count==num)
            {
                ans+=(n-r);
                mpp[word1[l]]++;
                if(mpp[word1[l]]>0) count--;
                l++;
            }
            r++;
        }
        return ans;
    }
};