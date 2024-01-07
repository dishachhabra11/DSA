class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
       
        for(char c:s){
            if(c=='('|| c=='[' || c=='{'||st.empty() ){
                st.push(c);
            }
            else{
              if(c==')' && st.top()=='(' ||
              (c=='}' && st.top()=='{')  ||
              (c==']' && st.top()=='[')){
                  st.pop();
              }
              else{
                  return false;
              }
            }
        
        }
      if(st.empty()==true)return true;

      else{return false;}
    
    }
};