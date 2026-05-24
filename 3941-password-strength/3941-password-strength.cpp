class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        unordered_set<char>st;
        for(int i=0;i<password.length();i++)
        {
            st.insert(password[i]);
        }
        for(auto it:st)
        {
            if(it>='a'&&it<='z') ans++;
            else if(it>='A'&&it<='Z') ans+=2;
            else if((it-'0')>=0&&(it-'0')<=9) ans+=3;
            else if(it=='!'||it=='@'||it=='#'||it=='$') ans+=5;
        }
        return ans;
    }
};