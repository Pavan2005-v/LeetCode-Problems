class Solution {
public:
    int magicalString(int n) {
        string temp="122";
        int r=2,ans=1;
        while(temp.length()<n)
        {
            int num=temp[r]-'0';
            int size=temp.length();
            char c;
            if(temp[size-1]=='1')
            {
                c='2';
            }
            else
            {
                c='1';
            }
            while(num>0)
            { 
                temp+=c;
                if(c=='1') ans++;
                if(temp.length()==n) break;
                num--;
            }
            r++;
        }
        return ans;
    }
};