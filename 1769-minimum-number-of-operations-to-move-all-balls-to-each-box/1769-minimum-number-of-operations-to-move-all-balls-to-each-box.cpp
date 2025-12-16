class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++)
        {
            int count=0;
            for(int j=0;j<boxes.size();j++)
            {
                    if(boxes[j]=='1'&&j<i)
                    {
                        count+=(i-j);
                    }
                    else if(boxes[j]=='1'&&j>i)
                    {
                        count+=(j-i);
                    }
            }
            ans.push_back(count);
        }
        return ans;
    }
};