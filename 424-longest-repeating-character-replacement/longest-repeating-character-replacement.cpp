class Solution {
public:
    int characterReplacement(string s, int k) {
         int maxi=0;
         int length=0;
         int max_l=0;  
         vector<int>window; 
         unordered_map<char,int> m;
         
         for(int i=0;i<s.size();i++){
             
             window.push_back(s[i]);
            
           
              m[s[i]]++;
              maxi=max(maxi,m[s[i]]);

        
      
        
        if((window.size()-(maxi))<=k){
            length=window.size();
            max_l=max(max_l,length);
            
        }
        else{
            m[*(window.begin())]--;
           window.erase(window.begin());
        }
         }
         return max_l;
    }
    
};