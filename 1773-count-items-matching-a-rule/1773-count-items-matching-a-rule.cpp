class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        if(ruleKey=="type")
        {
                for(int j=0;j<items.size();j++)
                {
                    if(items[j][0]==ruleValue)
                    {
                        count++;
                    }
                }
                return count;
        }
        else if(ruleKey=="color")
        {
            for(int j=0;j<items.size();j++)
                {
                    if(items[j][1]==ruleValue)
                    {
                        count++;
                    }
                }
                return count;
        }
        else
        {
            for(int j=0;j<items.size();j++)
                {
                    if(items[j][2]==ruleValue)
                    {
                        count++;
                    }
                }
                return count;
        }
        return count;       
    }
};