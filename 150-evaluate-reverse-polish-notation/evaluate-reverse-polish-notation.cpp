class Solution {
public:

bool isOperator(string op){
           if (op == "+" ||op == "-" ||op == "/" ||op == "*")return true;
           else return false;
         }
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
    
         for(int i=0;i<tokens.size();i++){
             int result=0;
             string op=tokens[i];
             if(isOperator(tokens[i])){
                 int s1=st.top();
                 st.pop();
                 int s2=st.top();
                 st.pop();

                 if(op=="+"){
                     result=s1+s2;
                 }
                 if(op=="*"){
                     result=s1*s2;
                 }
                 if(op=="-"){
                     result=s2-s1;
                 }
                 if(op=="/"){
                     result=s2/s1;
                 }
                 st.push(result);
             }
             else{
                 
                 st.push(stoi(op));
             }
         }
         return st.top();
    }
};