class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto it=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(letters[it]==target){
            if(it+1==letters.size())
                return letters[0];
            return letters[it+1];
        }
        if(it==letters.size())
            return letters[0];
        return letters[it];
    }
};