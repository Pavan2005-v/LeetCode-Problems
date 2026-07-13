class Solution {
public:
    bool isValid(int num,int temp)
    {
        bool pt=true;
        num/=10;
        while(num>0)
        {
            if(num%10!=temp-1)
            {
                pt=false;
                break;
            }
            temp--;
            num/=10;
        }
        return pt;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int size=0,org=low,ctt=low;
        int num1;
        while(low>0)
        {
            size++;
            low/=10;
        }
        int numl=0,ct=1;
        int size0=size;
        while(size0>0)
        {
            numl=numl*10+ct;
            size0--;
            ct++;
        }
        num1=numl;
        if(isValid(num1,num1%10))
        {
            if(num1>=ctt&&num1<=high)
            {
                ans.push_back(num1);
            }
        }
        while(num1<=high)
        {
            int size=0,org=num1;
            while(num1>0)
            {
                size++;
                num1/=10;
            }
            int num2=0;
            while(size>0)
            {
                num2=num2*10+1;
                size--;
            }
            num1=(org+num2);
            if(num1%10==9&&isValid(num1,num1%10))
            {
                if(num1>=ctt&&num1<=high)
                {
                    ans.push_back(num1);
                }
                int num3=0;
                int size1=0;
                int temp2=num1;
                while(temp2>0)
                {
                    size1++;
                    temp2/=10;
                }
                size1++;
                int ct=1;
                while(size1>0)
                {
                    num3=num3*10+ct;
                    size1--;
                    ct++;
                }
                num1=num3;
            }
            if(isValid(num1,num1%10)&&num1<=high)
            {
                if(num1>=ctt&&num1<=high)
                {
                    ans.push_back(num1);
                }
            }
        }
        return ans;
        
    }
};