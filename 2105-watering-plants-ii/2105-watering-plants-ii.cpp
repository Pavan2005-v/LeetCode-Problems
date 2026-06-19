class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int l=0,r=plants.size()-1,ans=0;
        int cap1=capacityA;
        int cap2=capacityB;
        while(l<=r)
        {
            if(l==r)
            {
                if(cap1>cap2)
                {
                    if(cap1>=plants[l])
                    {
                        cap1-=plants[l];
                        l++;
                    }
                    else
                    {
                        ans++;
                        cap1=capacityA-plants[l];
                        l++;
                    }
                }
                else if(cap1<cap2)
                {
                    if(cap2>=plants[r])
                    {
                        cap2-=plants[r];
                        r--;
                    }
                    else
                    {
                        ans++;
                        cap2=capacityB-plants[r];
                        r--;
                    }
                }
                else if(cap1==cap2)
                {
                    if(cap1>=plants[l])
                    {
                        cap1-=plants[l];
                        l++;
                    }
                    else
                    {
                        ans++;
                        cap1=capacityA-plants[l];
                        l++;
                    }
                }
            }
            else
            {
                if(plants[l]<=cap1)
                {
                    cap1-=plants[l];
                    l++;
                }
                else 
                {
                    ans++;
                    cap1=capacityA-plants[l];
                    l++;
                }
                if(plants[r]<=cap2)
                {
                    cap2-=plants[r];
                    r--;
                }
                else 
                {
                    ans++;
                    cap2=capacityB-plants[r];
                    r--;
                }
            }
        }
        return ans;
    }
};