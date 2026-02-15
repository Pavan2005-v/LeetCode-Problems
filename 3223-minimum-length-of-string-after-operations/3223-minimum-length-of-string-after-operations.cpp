class Solution {
public:
    int minimumLength(string s) {
        // string ex="tempo";
        // ex.erase(2,1);
        // cout<<ex;
        // return 1;
        unordered_map<char,int>mpp;
        for(char c:s) mpp[c]++;
        int count=s.length();
        int i=0;
        int j=1;
        if(s.length()<=2) return s.length();
        while(j<s.length())
        {
            if(s[i]==s[j])
            {
                int k=j;
                while(k<s.length())
                {
                    k++;
                    if(s[k]==s[j])
                    {
                        s.erase(k,1);
                        s.erase(i,1);
                        i=0;
                        j=1;
                        cout<<s<<endl;
                    }

                }
            }
            else 
            {
                j++;
            }
        }
        return s.length();
    }
};