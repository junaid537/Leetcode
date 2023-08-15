class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(auto i : words){
            string temp="";
            for(auto s1:i){
                if(s1==separator && temp=="")continue;
                else {
                    if(s1!=separator)
                    temp+=s1;
                }
                if(s1==separator){
                    if(temp!="")ans.push_back(temp);temp="";
                } 
            }
            if(temp!="")
            ans.push_back(temp);
        }
        return ans;
    }
};