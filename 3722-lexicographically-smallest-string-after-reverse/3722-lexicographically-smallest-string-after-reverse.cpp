class Solution {
public:
    string lexSmallest(string s) {
        string ans=s,temp;
        int ind=1;
        while(ind<s.length())
        {
            temp=s;
            reverse(temp.begin(),temp.begin()+ind+1);
            ans=min(ans,temp);
            ind++;
        }
        ind=s.length()-2;
        while(ind>=0)
        {
            temp=s;
            reverse(temp.begin()+ind,temp.end());
            ans=min(ans,temp);
            ind--;
        }
        return ans;
    }
};