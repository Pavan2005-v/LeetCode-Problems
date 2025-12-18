class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>mpp;
        for(char c:s)
        {
            mpp[c]++;
        }
        if(mpp.size()==k) return 0;
        else
        {
            vector<pair<int,char>> vect1;
            for(auto it:mpp)
            {
                vect1.push_back({it.second,it.first});
            }
            sort(vect1.rbegin(),vect1.rend());
            int ans1=0;
            for(int i=k;i<vect1.size();i++)
            {
                ans1+=vect1[i].first;
            }
            return ans1;
        }
    }
};