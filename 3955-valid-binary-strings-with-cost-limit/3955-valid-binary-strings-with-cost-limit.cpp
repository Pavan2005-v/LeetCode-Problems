class Solution {
public:
    vector<string> generateValidStrings(int n, int k1) {
        vector<string>ans;
        for(int i=0;i<(1<<n);i++)
        {
            string temp="";
            int c=0;
            int l=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    temp+='1';
                    c+=j;
                }
                else temp+='0';
                if(c>k1)
                {
                    l=1;
                    break;
                }
            }
            if(!l)
            {
                for(int k=0;k<temp.length()-1;k++)
                {
                    if(temp[k]=='1'&&temp[k+1]=='1') 
                    {
                        l=1;
                        break;
                    }
                }
            }
            if(!l) ans.push_back(temp);
        }
        return ans;
    }
};