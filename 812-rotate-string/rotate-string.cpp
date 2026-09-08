class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<s.length();i++){
            bool match=true;
            for(int j=0;j<goal.length();j++){
                if(s[(i + j) % s.length()]!=goal[j]){
                    match=false;
                    break;
                }
            }
            if(match){
                    return true;
                }
        }
        return false;
    }
};