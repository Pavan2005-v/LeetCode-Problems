class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>t1;
        vector<int>t2;
        string temp1="",temp2="";
        for(int i=0;i<a.length();i++)
        {
            temp1+=s[i];
        }
        if(temp1==a)
        {
            t1.push_back(0);
        }
        int l=0,r=a.length()-1;
        while(r<s.length()-1)
        {
            temp1.erase(0,1);
            l++;
            r++;
            temp1+=s[r];
            if(temp1==a)
            {
                t1.push_back(l);  
            }
        }
        for(int i=0;i<b.length();i++)
        {
            temp2+=s[i];
        }
        if(temp2==b)
        {
            t2.push_back(0);
        }
        l=0,r=b.length()-1;
        while(r<s.length()-1)
        {
            temp2.erase(0,1);
            l++;
            r++;
            temp2+=s[r];
            if(temp2==b)
            {
                t2.push_back(l);  
            }
        }   
        l=0,r=0;
        vector<int>ans;
        while(l<t1.size()&&r<t2.size())
        {
            if(l<t1.size()&&r<t2.size()&&abs(t1[l]-t2[r])<=k)
            {
                ans.push_back(t1[l]);
                l++;
            }
            else
            {
                r++;
                if(r==t2.size())
                {
                    l++;
                    r=0;
                }
            }
        } 
        return ans;  
    }
};