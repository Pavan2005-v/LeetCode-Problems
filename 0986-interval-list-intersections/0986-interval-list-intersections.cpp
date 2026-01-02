class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        vector<vector<int>>ans;
        for(int i=0;i<second.size();i++)
        {
            int sec_one=second[i][0];
            int sec_two=second[i][1];
            for(int j=0;j<first.size();j++)
            {
                int fir_one=first[j][0];
                int fir_two=first[j][1];
                if(sec_one>=fir_one)
                {
                    if(sec_one<=fir_two&&sec_two<=fir_two)
                    {
                        ans.push_back({sec_one,sec_two});
                    }
                    else if(sec_one<=fir_two&&sec_two>fir_two)
                    {
                        ans.push_back({sec_one,fir_two});
                    }
                    
                }
                else if(sec_one<fir_one)
                {
                    if(sec_two>=fir_one&&sec_two<=fir_two)
                    {
                        ans.push_back({fir_one,sec_two});
                    }
                    else if(sec_two>=fir_one&&sec_two>=fir_two)
                    {
                        ans.push_back({fir_one,fir_two});
                    }
                }
            }
        }
        return ans;
    }
};