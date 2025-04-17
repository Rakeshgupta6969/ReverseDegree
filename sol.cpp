class Solution {
    public:
        int reverseDegree(string s) {
       
    
       // here we apply the bruth  force solution
    
    
       unordered_map<char,int> mp;
    
       for(char c = 'z'; c>='a'; c--){
        mp[c] = 'z'- c + 1; 
       }
    
       int Rdegree = 0;
    
       for(int i = 0; i<s.size(); i++){
          Rdegree +=  mp[s[i]]*(i+1);
       }
    
    
       return Rdegree;
        }  
    };