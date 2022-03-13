class Solution {
    public boolean isValid(String s) {
         if(s.length()==1){
            return false;
        }
        Stack<Character> st=new Stack<>();
        
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                char temp;
                if(st.size()!=0){
                    temp=st.pop();
                }
                else{
                    return false;
                }
                if((temp=='(' && c==')') || (temp=='[' && c==']') || (temp=='{' && c=='}')){
                    continue;
                }
                else{
                    return false;
                }
            }
            
        }
        if(st.size()!=0){
            return false;
        }
        return true;
    }
}