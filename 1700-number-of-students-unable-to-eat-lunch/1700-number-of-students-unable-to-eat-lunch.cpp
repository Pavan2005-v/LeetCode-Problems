class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>qu;
        for(int i=sandwiches.size()-1;i>=0;i--) st.push(sandwiches[i]);
        for(int i=0;i<students.size();i++) qu.push(students[i]);
        int c=0;
        while(c<st.size()&&st.size()!=0)
        {
            if(st.top()==qu.front()) 
            {
                st.pop();
                qu.pop();
                c=0;
            }
            else
            {
                int ele=qu.front();
                qu.pop();
                qu.push(ele);
                c++;
            }
        }
        return st.size();

        
    }
};