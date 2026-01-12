class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0;
        int org=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if((capacity-plants[i])>=0)
            {
                count++;
                capacity-=plants[i];
            }
            else
            {
                count+=(2*(i)+1);
                capacity=org-plants[i];
            }
        }
        return count;
    }
};