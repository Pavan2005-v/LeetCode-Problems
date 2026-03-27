class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>org=mat;
        for(int i=0;i<m;i++)
        {
            if(i&1)
            {
                if(k%n==0&&n>k)
                {
                    vector<int>temp=mat[i];
                    for(int l=0;l<k;l++)
                    {
                        int num=temp[n-1];
                        temp.pop_back();
                        vector<int>temp1;
                        temp1.push_back(num);
                        for(int z=0;z<temp.size();z++)
                        {
                            temp1.push_back(temp[z]);
                        }
                        temp=temp1;
                    }
                    mat[i]=temp;
                }
                else
                {
                    int val=k%n;
                    vector<int>temp=mat[i];
                    for(int l=0;l<val;l++)
                    {
                        int num=temp[n-1];
                        temp.pop_back();
                        vector<int>temp1;
                        temp1.push_back(num);
                        for(int z=0;z<temp.size();z++)
                        {
                            temp1.push_back(temp[z]);
                        }
                        temp=temp1;
                    }
                    mat[i]=temp;
                }
            }
            else
            {
                if(k%n==0&&n>k)
                {
                    vector<int>temp=mat[i];
                    for(int l=0;l<k;l++)
                    {
                        int num=temp[0];
                        temp.push_back(num);
                        vector<int>temp1;
                        for(int z=1;z<temp.size();z++)
                        {
                            temp1.push_back(temp[z]);
                        }
                        temp=temp1;
                    }
                    mat[i]=temp;
                    
                }
                else
                {
                    int val=k%n;
                    vector<int>temp=mat[i];
                    for(int l=0;l<val;l++)
                    {
                        int num=temp[0];
                        temp.push_back(num);
                        vector<int>temp1;
                        for(int z=1;z<temp.size();z++)
                        {
                            temp1.push_back(temp[z]);
                        }
                        temp=temp1;
                    }
                    mat[i]=temp;
                }
            }
        }
        return org==mat;
    }
};