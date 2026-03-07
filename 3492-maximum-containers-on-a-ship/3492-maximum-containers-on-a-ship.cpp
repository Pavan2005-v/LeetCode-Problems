class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        if(maxWeight/w>n*n) return n*n;
        else return maxWeight/w;
    }
};