class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int tot=0;
        for(int i=0;i<bank.size()-1;i++)
        {
            for(int j=i+1;j<bank.size();j++)
            {
                auto a=find(bank[j].begin(),bank[j].end(),'1');
                if(*a)
                {
                    int count1=count(bank[j].begin(),bank[j].end(),'1');
                    for(int k=0;k<bank[i].size();k++)
                    {
                        if(bank[i][k]=='1')
                        {
                            tot+=count1;
                        }
                    }
                    break;
                }
            }
        }
        return tot;
    }
};