class Solution {
public:
    string customSortString(string order, string s) {
        string temp="";
        map<char,int>mpp;
        for(char c:s) mpp[c]++;
        for(char c:order)
        {
            if(mpp.contains(c))
            {
                for(int i=0;i<mpp[c];i++)
                {
                    temp+=c;
                }
            }
        }
        for(auto it:mpp)
        {
            if(!order.contains(it.first))
            {
                for(int i=0;i<it.second;i++) temp+=it.first;
            }
        }
        return temp;
    }
};