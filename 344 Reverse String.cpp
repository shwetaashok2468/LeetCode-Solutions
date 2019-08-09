class Solution {
public:
    
    void helper(vector<char>& s,int start,int end)
    {
        //1 2 3 4 5 
        //1 2 3 4 
        //1 2 3 
        //1 2 
        //1 
        //
        
        
       if(start>end)
           return;
        
        char temp = s[end];
        s[end] = s[start];
        s[start] = temp;
        
        helper(s,start+1,end-1);
       
    }
    void reverseString(vector<char>& s) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int start = 0;
        int end = s.size()-1;
        
       helper(s,start,end);
        
    }
};
