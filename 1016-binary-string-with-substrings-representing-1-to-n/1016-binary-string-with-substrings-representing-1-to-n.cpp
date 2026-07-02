class Solution {
public:
    bool queryString(string s, int n) {
        for(int i=1;i<=n;i++)
        {
            int num=i;
            string temp="";
            while(num>0)
            {
                temp+=((num%2)+'0');
                num/=2;
            }
            reverse(temp.begin(),temp.end());
            if(!s.contains(temp)) return false;
        }
        return true;
    }
};