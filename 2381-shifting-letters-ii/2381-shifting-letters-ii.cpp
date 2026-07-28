class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.length(),m=shifts.size();
        vector<int>pos(n);
        vector<int>neg(n);
        for(int i=0;i<m;i++)
        {
            if(shifts[i][2]==0)
            {
                neg[shifts[i][0]]-=1;
                if(shifts[i][1]+1<n) neg[shifts[i][1]+1]+=1;
            }
            else
            {
                pos[shifts[i][0]]+=1;
                if(shifts[i][1]+1<n) pos[shifts[i][1]+1]-=1;              
            }
        }
        for(int i=1;i<n;i++)
        {
            pos[i]+=(pos[i-1]);
            neg[i]+=(neg[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            pos[i]+=(neg[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(pos[i]>=0)
            {
                s[i]=(((s[i]-'a')+pos[i])%26)+97;
            }
            else
            {
                s[i]=((((((s[i]-'a')+pos[i]))%26+26))%26)+97;
            }
        }
        return s;
    }
};