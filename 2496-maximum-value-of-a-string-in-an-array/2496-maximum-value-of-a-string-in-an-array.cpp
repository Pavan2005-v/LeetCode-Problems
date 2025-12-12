class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=INT_MIN;
        for(string i:strs)
        {
            int k=1;
            for(int j=0;j<i.length();j++)
            {
                if(isalpha(i[j]))
                {
                    int l=i.length();
                    maxi=max(maxi,l);
                    k=0;
                    break; 
                }
            }
            if(isdigit(i[0])&&k)
            {
                int k=stoi(i);
                maxi=max(maxi,k);
            }
        }
        return maxi;       
    }
};