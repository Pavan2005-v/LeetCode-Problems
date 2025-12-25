class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>ans;
        vector<string>food;
        set<int>table;
        for(int i=0;i<orders.size();i++)
        {
            food.push_back(orders[i][2]);
            table.insert(stoi(orders[i][1]));
        }
        sort(food.begin(),food.end());
        food.erase(unique(food.begin(),food.end()),food.end());
        vector<string>food1;
        food1.push_back("Table");
        for(string f:food) food1.push_back(f);
        ans.push_back(food1);
        for(int it:table)
        {
            int num=it;  
            vector<int>temp;
            temp.push_back(num);
            for(int j=1;j<food1.size();j++) temp.push_back(0);
            for(int i=0;i<orders.size();i++)
            {
                if(to_string(num)==orders[i][1])
                {
                    auto it=find(food1.begin(),food1.end(),orders[i][2]);
                    int index=it-food1.begin();
                    temp[index]++;
                }
            }
            vector<string>temp1;
            for(int k=0;k<temp.size();k++)
            {
                temp1.push_back(to_string(temp[k]));
            }
            ans.push_back(temp1);
        }
        return ans;

    }
};