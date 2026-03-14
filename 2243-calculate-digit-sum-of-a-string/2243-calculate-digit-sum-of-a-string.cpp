class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k)
        {
            string temp="";
            int c=0;
            int sum=0;
            for(int i=0;i<s.length();i++)
            {
                if(c==k)
                {
                    c=1;
                    temp+=(to_string(sum));
                    sum=s[i]-'0';
                }
                else
                {
                    c++;
                    sum+=(s[i]-'0');
                }
            }
            if(c>0)
            {
                temp+=(to_string(sum));
            }
            s=temp;
        }
        return s;
    }
};