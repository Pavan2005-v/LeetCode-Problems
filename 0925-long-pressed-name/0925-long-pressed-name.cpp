class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int l=0,r=0;
        unordered_set<char>st;
        if(name[0]!=typed[0]) return false;
        while(l<name.length()&&r<typed.length())
        {
            if(name[l]!=typed[r])
            {
                st.insert(typed[r]);
                r++;
            }
            else
            {
                if(st.size()>=2) return false;
                l++;
                r++;
                st.clear();
            }
        }
        while(r<typed.length())
        {
            if(typed[r]!=name[l-1]) return false;
            r++;
        }
        if(l==name.length()&&r==typed.length()) return true;
        return false;
    }
};