class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
        for(int i=0;i<k;i++) 
        {
            if(blocks[i]=='W') count++;
        }
        int ans=count;
        int l=0,r=k-1;
        while(r<blocks.size()-1)
        {
            if(blocks[l]=='W') count--;
            l++;
            r++;
            if(blocks[r]=='W') count++;
            ans=min(ans,count);
        }
        return ans;
    }
};