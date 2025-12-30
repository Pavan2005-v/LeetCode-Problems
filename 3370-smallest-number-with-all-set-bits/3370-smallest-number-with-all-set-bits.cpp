class Solution {
public:
    int smallestNumber(int n) {
        while(1)
        {
            string bin="";
            int temp=n;
            while(temp>0)
            {
                bin+=(to_string(temp%2));
                temp/=2;
            }
            int count1=count(bin.begin(),bin.end(),'1');
            if(count1==bin.size()) return n;
            n++;
        }
        return -1;
    }
};