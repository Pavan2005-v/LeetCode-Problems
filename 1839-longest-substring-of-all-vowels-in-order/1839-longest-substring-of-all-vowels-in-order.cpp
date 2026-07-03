class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int l=0,r=0,ans=0;
        stack<char>st;
        while(l<word.length())
        {
            if(word[l]=='a')
            {
                if(st.size()==0||st.top()==word[r]) st.push(word[r]);
                else if(st.top()=='a'&&word[r]=='e') st.push(word[r]);
                else if(st.top()=='e'&&word[r]=='i') st.push(word[r]);
                else if(st.top()=='i'&&word[r]=='o') st.push(word[r]);
                else if(st.top()=='o'&&word[r]=='u') st.push(word[r]);
                else
                {
                    l=r;
                    r--;
                    if(st.top()=='u')
                    {
                        int size=st.size();
                        ans=max(ans,size);
                    }
                    stack<char>st1;
                    st=st1;   
                }
                r++;
            }
            else
            {
                l++;
                r++;
            }  
        }
        return ans;
    }
};