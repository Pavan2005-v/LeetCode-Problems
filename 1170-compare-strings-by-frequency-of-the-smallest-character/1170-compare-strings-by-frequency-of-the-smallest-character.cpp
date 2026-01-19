class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            char c=*min_element(queries[i].begin(),queries[i].end());
            int co=count(queries[i].begin(),queries[i].end(),c);
            int count1=0;
            for(int j=0;j<words.size();j++)
            {
                char c1=*min_element(words[j].begin(),words[j].end());
                int co1=count(words[j].begin(),words[j].end(),c1);
                if(co<co1) count1++;
            }
            ans.push_back(count1);
        }
        return ans;
    }
};