class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>temp1(s.length());
        vector<int>temp2(s.length());
        temp1[0]=(s[0]-'a')+1;
        for(int i=1;i<temp1.size();i++)
        {
            temp1[i]=temp1[i-1]+(s[i]-'a')+1;
        }
        temp2[temp2.size()-1]=(s[s.length()-1]-'a')+1;
        for(int i=s.length()-2;i>=0;i--)
        {
            temp2[i]=temp2[i+1]+(s[i]-'a')+1;
        }
        for(int i=0;i<temp1.size()-1;i++)
        {
            if(temp1[i]==temp2[i+1]) return true;
        }
        return false;
    }
};