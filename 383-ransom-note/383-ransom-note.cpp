class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector <int> counts(26,0);  //26 items, all have value 0
        if(ransomNote.length() > magazine.length()){
            return false;
        }
        
        for(int i = 0; i < magazine.length(); i++){
            counts[magazine[i] - 'a']++;            //keep the index within 26
        }   
        for(int i = 0; i < ransomNote.length();i++){
            counts[ransomNote[i] - 'a']--;          //keep the index within 26
        }
        for(int i = 0; i < counts.size(); i++){ 
            if(counts[i] < 0){          //if it's a neg then a letter was used in ransomNote that's not in Magazine
                return false;
            }
        }
        return true;
    }
};