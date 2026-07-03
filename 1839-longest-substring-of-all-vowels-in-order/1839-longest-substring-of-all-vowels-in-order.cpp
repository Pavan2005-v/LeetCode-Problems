class Solution {
public:
    vector<int> isValid(string word,int ind)
    {
        while(ind<word.length()&&word[ind]=='a')
        {
            ind++;
        }
        if(ind<word.length()&&word[ind]=='e')
        {
            while(ind<word.length()&&word[ind]=='e')
            {
                ind++;
            }
        }
        else return {ind,-1};
        if(ind<word.length()&&word[ind]=='i')
        {
            while(ind<word.length()&&word[ind]=='i')
            {
                ind++;
            }
        }
        else return {ind,-1};
        if(ind<word.length()&&word[ind]=='o')
        {
            while(ind<word.length()&&word[ind]=='o')
            {
                ind++;
            }
        }
        else return {ind,-1};
        if(ind<word.length()&&word[ind]=='u')
        {
            while(ind<word.length()&&word[ind]=='u')
            {
                ind++;
            }
        }
        else return {ind,-1};
        return {ind,1};
    }
    int longestBeautifulSubstring(string word) {
        int l=0,r=0,ans=0;
        while(l<word.length())
        {
            if(word[l]=='a')
            {
                vector<int>temp=isValid(word,l);
                if(temp[1]!=-1)
                {
                    ans=max(ans,temp[0]-l);
                }
                l=temp[0];
            }
            else
            {
                l++;
            }
        }
        return ans;
    }
};