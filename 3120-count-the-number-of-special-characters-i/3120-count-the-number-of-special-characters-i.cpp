class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>st;
        for(char c:word)
        {
            if(islower(c))
            {
                char ch=toupper(c);
                if(word.contains(ch)) st.insert(c);
            }
        }
        return st.size();

    }
};