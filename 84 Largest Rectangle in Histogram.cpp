class Solution {
public:
    int largestRectangleArea(vector<int>& hist) {
        
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        //2 1 5 6 2 3
        //0 1 2 3 4 5
        //stack : 
        int n = hist.size();
        
        int area;
        int max_area = 0;
        stack<int>s;
        int i = 0;
        while(i<n)//i=1
        {
            
            if(s.empty() || hist[s.top()]<=hist[i])
            {
                s.push(i++);
            }
            else
            {
                int temp = s.top(); //2
                s.pop();
                
                area = hist[temp]*(s.empty()?i:(i-s.top()-1));
                
                
                if(max_area < area)
                {
                    max_area = area;
                }
            }
            
            
            
        }
        
        
        while(s.empty()==false)
        {
            int temp = s.top();
            s.pop();
            
            area = hist[temp]*(s.empty()?i:(i-s.top()-1));
            
            if(max_area < area)
                {
                    max_area = area;
                }
        }
        
        return max_area;
        
    }
};
