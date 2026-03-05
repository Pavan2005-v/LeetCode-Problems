class Solution {
public:
    int minOperations(string s) {
        string temp1="";
        string temp="";
        while(temp.size()<s.length())
        {
            temp+='0';
            if(temp.size()>=s.length()) break;
            temp+='1';
        }
        while(temp1.size()<s.length())
        {
            temp1+='1';
            if(temp1.size()>=s.length()) break;
            temp1+='0';
        }
        int count=0;
        int count1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=temp[i]) count++;
            if(s[i]!=temp1[i]) count1++;
        }
        return min(count,count1);
    }
};