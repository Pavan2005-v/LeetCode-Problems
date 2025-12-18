class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        vector<char> temp;
        for(int i=0;i<words[0].size();i++)
        {
            if(find(temp.begin(),temp.end(),words[0][i])==temp.end())
            {
                int c=count(words[0].begin(),words[0].end(),words[0][i]);
                vector<int> count1;
                temp.push_back(words[0][i]);
                int k=1;
                count1.push_back(c);
                for(int j=1;j<words.size();j++)
                {
                    if(!words[j].contains(words[0][i]))
                    {
                        k=0;
                    }
                    else
                    {
                        int d=count(words[j].begin(),words[j].end(),words[0][i]);
                        count1.push_back(d);
                    }
                }
                if(k)
                {
                    int mini=*min_element(count1.begin(),count1.end());
                    string a="";
                    a+=words[0][i];
                    for(int i=0;i<mini;i++)
                    {
                        ans.push_back(a);
                    }
                }
            }
        }
        return ans;
    }
};