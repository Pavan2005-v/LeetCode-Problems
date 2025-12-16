class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int tot=0;
        vector<int> prefix(travel.size()+1,0);
        for(int i=0;i<travel.size();i++)
        {
            prefix[i+1]=travel[i]+prefix[i];
        }
        int gcount=0;
        int pcount=0;
        int mcount=0;
        for(int i=0;i<garbage.size();i++)
        {
            gcount+=(count(garbage[i].begin(),garbage[i].end(),'G'));
            pcount+=(count(garbage[i].begin(),garbage[i].end(),'P'));
            mcount+=(count(garbage[i].begin(),garbage[i].end(),'M'));
        }
        for(int i=garbage.size()-1;i>=0;i--)
        {
            if(find(garbage[i].begin(),garbage[i].end(),'G')!=garbage[i].end())
            {
                tot+=prefix[i];
                break;
            }
        }
        for(int i=garbage.size()-1;i>=0;i--)
        {
            if(find(garbage[i].begin(),garbage[i].end(),'P')!=garbage[i].end())
            {
                tot+=prefix[i];
                break;
            }
        }
        for(int i=garbage.size()-1;i>=0;i--)
        {
            if(find(garbage[i].begin(),garbage[i].end(),'M')!=garbage[i].end())
            {
                tot+=prefix[i];
                break;
            }
        }
        tot+=(gcount+mcount+pcount);
        return tot; 
    }
};