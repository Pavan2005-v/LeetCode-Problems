class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int max1=INT_MIN;
        int maxi;
        int k=1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    k=0;
                    maxi=(j-i)-1;
                    max1=max(maxi,max1);
                }
            }
        }
        if(k) return -1;
        else if(max1<0) return 0;
        else return max1;
    }
};