class Solution {
public:
    int func1(string s,int x,int y)
    {
        int n=s.length(),score=0;
        stack<char>st;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='a'&&s[i]=='b')
                {
                    score+=x;
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        stack<char>st1;
        for(int i=0;i<temp.length();i++)
        {
            if(st1.empty())
            {
                st1.push(temp[i]);
            }
            else
            {
                if(st1.top()=='b'&&temp[i]=='a')
                {
                    score+=y;
                    st1.pop();
                }
                else
                {
                    st1.push(temp[i]);
                }
            }
        }
        return score;
    }
    int func2(string s,int x,int y)
    {
        int n=s.length(),score=0;
        stack<char>st;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='b'&&s[i]=='a')
                {
                    score+=y;
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            // cout<<st.top()<<endl;
        }
        // cout<<score;
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        stack<char>st1;
        for(int i=0;i<temp.length();i++)
        {
            if(st1.empty())
            {
                st1.push(temp[i]);
            }
            else
            {
                if(st1.top()=='a'&&temp[i]=='b')
                {
                    score+=x;
                    st1.pop();
                }
                else
                {
                    st1.push(temp[i]);
                }
            }
        }
        // cout<<score;
        return score;
    }    
    int maximumGain(string s, int x, int y) {
        int n=s.length();
        if(x>y)
        {
            return func1(s,x,y);
        }
        else
        {
            return func2(s,x,y);
        }
    }
};