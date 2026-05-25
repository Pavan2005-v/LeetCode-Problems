class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string st1="";
        string st2="";
        string stt1="";
        string stt2="";
        for(int i=0;i<s1.length();i++)
        {
            if(i&1)
            {
                st1+=s1[i];
            }
            else st2+=s1[i];
        }
        for(int i=0;i<s2.length();i++)
        {
            if(i&1)
            {
                stt1+=s2[i];
            }
            else stt2+=s2[i];
        }
        sort(st1.begin(),st1.end());
        sort(stt1.begin(),stt1.end());
        sort(stt2.begin(),stt2.end());
        sort(st2.begin(),st2.end());
        return st1==stt1&&st2==stt2;
    }
};