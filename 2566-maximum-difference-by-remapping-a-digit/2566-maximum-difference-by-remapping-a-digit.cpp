class Solution {
public:
    int minMaxDifference(int num) {
        vector<int>temp;
        int dup=num;
        while(dup>0)
        {
            temp.push_back(dup%10);
            dup/=10;
        }
        reverse(temp.begin(),temp.end());
        int x=temp[0];
        if(x==9)
        {
            x=temp[1];
        }
        int max_dig=0;
        int min_dig=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==x)
            {
                max_dig=max_dig*10+9;
                min_dig=min_dig*10+0;
            }
            else
            {
                max_dig=max_dig*10+temp[i];
                if(temp[0]!=9) min_dig=min_dig*10+temp[i];
                else min_dig=min_dig*10+0;
            }
        }
        return max_dig-min_dig;

    }
};