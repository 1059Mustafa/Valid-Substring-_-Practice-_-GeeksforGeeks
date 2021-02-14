class Solution {
  public:
    int findMaxLen(string s) 
    {
        stack<int>s1;
        s1.push(-1);
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                s1.push(i);
            }
            else
            {
                s1.pop();
                if(s1.size()>0)
                {
                    count=max(count,i-s1.top());
                }
                else
                {
                    s1.push(i);
                }
            }
        }
        
        return count;
    }
};
