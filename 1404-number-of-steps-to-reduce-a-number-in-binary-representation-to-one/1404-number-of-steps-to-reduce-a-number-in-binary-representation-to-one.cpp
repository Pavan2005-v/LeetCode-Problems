class Solution {
public:
    int numSteps(string s) {
        int count=0;
        while(s.length()>1)
        {
            int n=s.length()-1;
            if(s[n]=='1')
            {
                int k=1;
                int ind=n;
                while(ind>=0)
                {
                    if(s[ind]=='1')
                    {
                        s[ind]='0';
                    }
                    else
                    {
                        s[ind]='1';
                        k=0;
                        break;
                    }
                    ind--;
                }
                if(k)
                {
                    string temp="1";
                    s=temp+s;
                }
            }
            else 
            {
                s.erase(n,1);
            }
            count++;
        }
        return count;
    }
};