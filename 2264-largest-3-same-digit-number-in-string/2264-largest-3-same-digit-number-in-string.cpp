class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> ans;
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1]&&num[i]==num[i+2])
            {
                string temp=num.substr(i,3);
                int a=stoi(temp);
                ans.push_back(a);
            }
        }
        if(ans.size()==0) return "";
        int maxi=*max_element(ans.begin(),ans.end());
        if(maxi==0) return "000";
        return to_string(maxi);
    }
};