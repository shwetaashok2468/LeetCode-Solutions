class Solution {
public:
    vector<int> partitionLabels(string S) {
        //ababcbaca
        //defegdehijhklij
        //last occurance = array[char]
        
        //int last[26];
        int* last = new int[26];
        
        for(int i=0; i<S.length(); i++)
        {
            last[S[i]-'a']=i;
        }
        int anchor =0;
        int j=0;
        vector<int>v;
        
        
        for(int i=0; i<S.length(); i++)
        {
            j = max(j, last[S[i]-'a']);
            
            if(i==j)
            {
                
                v.push_back(i-anchor+1);
                anchor = i+1;
            }
        }
        
        return v;
        
        
    }
};
