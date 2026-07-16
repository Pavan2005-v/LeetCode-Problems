class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;
        int k=word.length()-numFriends+1;
        char c='a';
        for(int i=0;i<word.length();i++)
        {
            c=max(c,word[i]);
        }
        string ans="";
        for(int i=0;i<word.length();i++)
        {
            if(word[i]==c)
            {
                int ind=i;
                string temp="";
                while(ind<word.length()&&ind-i+1<=k)
                {
                    temp+=word[ind];
                    ind++;
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
};