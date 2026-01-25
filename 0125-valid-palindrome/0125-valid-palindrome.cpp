class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(char &c:s)
        {
            if(isalpha(c)||isdigit(c))
            {
                if(isupper(c))
                {
                    c=tolower(c);
                    temp+=c;
                }
                else temp+=c;
            }
        }
        int i=0;
        int j=temp.size()-1;
        cout<<temp;
        while(i<j)
        {
            if(temp[i]!=temp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};