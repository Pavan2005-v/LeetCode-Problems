class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string>st;
        for(int i=0;i<word.size();)
        {
            if(isdigit(word[i])&&word[i]!='0')
            {
                string temp="";
                while(isdigit(word[i]))
                {
                    temp+=word[i++];
                }
                st.insert(temp);
            }
            else if(isdigit(word[i])&&word[i]=='0')
            {
                string temp="";
                while(isdigit(word[i]))
                {
                    temp+=word[i++];
                }
                string t="";
                int ind=-1;
                for(int k=0;k<temp.length();k++)
                {
                    if(temp[k]!='0')
                    {
                        ind=k;
                        break;
                    }
                }
                if(ind!=-1)
                {
                    for(int l=ind;l<temp.length();l++)
                    {
                        t+=temp[l];
                    }
                }
                st.insert(t);            
            }
            else i++;
        }
        return st.size();
    }
};