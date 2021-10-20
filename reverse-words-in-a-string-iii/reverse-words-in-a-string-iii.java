class Solution {
    public String reverseWords(String s) {
        
        String str [] = s.split(" ");
        String res="";
        for(String word: str){
            for(int i=0; i<word.length(); i++){
                res+=word.charAt(word.length()-1-i);
            }
            res+=" ";
        }
        
        return res.trim();
    }
}