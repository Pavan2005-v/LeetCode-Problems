class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i=0;i<paths.size();i++)
        {
            string temp=paths[i][1];
            int k=1;
            for(int j=0;j<paths.size();j++)
            {
                if(temp==paths[j][0])
                {
                    k=0;
                }
            }
            if(k) return temp;
        }
        return "";
    }
};