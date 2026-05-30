class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,int>mpp;
        map<vector<int>,int>mpp1;
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            vector<int>t;
            for(int j=0;j<temp.length()-1;j++)
            {
                t.push_back((temp[(j+1)]-temp[j])-'a');
            }
            mpp[t]++;
            mpp1[t]=i;
        }
        vector<int>temp;
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                temp=it.first;
                break;
            }
        }
        return words[mpp1[temp]];
    }
};