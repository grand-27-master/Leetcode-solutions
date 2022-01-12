class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits == ""){
            return ans;
        }
        string letters[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       
        int pos = 0;
        string temp = "";
        solve(digits,letters,ans,pos,temp);
        return ans;
    }
    void solve(string digits,string letters[] , vector<string> &ans,int pos,string temp){
        if(pos == digits.size()){
            ans.push_back(temp);
            return;
        }
            string tempLetter = letters[digits[pos]-'0'-2];
            for(int j = 0 ; j<tempLetter.size() ; j++){
                solve(digits,letters,ans,pos+1,temp+tempLetter[j]);
            }
        
    }
};