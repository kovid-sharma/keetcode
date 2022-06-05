// class TextEditor {
// public:
//     stack<char>part1;
//     stack<char>part2;
    
//     TextEditor() {
        
//     }
    
//     void addText(string text) {
//         for(auto ch:text)
//             part1.push(ch);
//     }
    
//     int deleteText(int k) {
//         int x=part1.size();
//         x=min(x,k);
//         int ret=x;
//         while(x--)
//             part1.pop();
//         return ret;
//     }
    
//     string cursorLeft(int k) {
//         int part2Sz=part1.size();
//         part2Sz=min(k,part2Sz);
//         while(part2Sz--)
//         {
//             char ch=part1.top();
//             part1.pop();
//             part2.push(ch);
//         }
//         int x=part1.size();
//         int x2=10;
//         int strSz=min(x2,x);
//         string ans;
//         while(strSz--)
//         {
//             char ch=part1.top();
//             part1.pop();
//             ans.push_back(ch);
//         }
//         for(auto ch:ans)
//             part1.push(ch);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
    
//     string cursorRight(int k) {
//         int part2Sz=part2.size();
//         part2Sz=min(k,part2Sz);
//         while(part2Sz--)
//         {
//             char ch=part2.top();
//             part2.pop();
//             part1.push(ch);
//         }
//         int x=part1.size();
//         int x2=10;
//         int strSz=min(x2,x);
//         string ans;
//         while(strSz--)
//         {
//             char ch=part1.top();
//             part1.pop();
//             ans.push_back(ch);
//         }
//         for(auto ch:ans)
//             part1.push(ch);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
class TextEditor {
    stack<char> left;
    stack<char> right;
public:
    TextEditor() {
        
    }
    
    void addText(string text) {
        for(auto &c : text){
            left.push(c);
        }
    }
    
    int deleteText(int k) {
        int cnt=0;
        while(!left.empty() and k>0){
            left.pop();
            cnt++;
            k--;
        }
        return cnt;
    }
    string cursorLeft(int k) {
        while(!left.empty() and k>0){
            char c = left.top();
            left.pop();
            right.push(c);
            k--;
        }
        return cursorShiftString();
    }
    string cursorRight(int k) {
        while(!right.empty() and k>0){
            char c = right.top();
            right.pop();
            left.push(c);
            k--;
        }
		
        return cursorShiftString();
    }
    string cursorShiftString(){
        string ret;
        int cnt=10;
        while(!left.empty() and cnt>0){
            char ch = left.top();
            left.pop();
            ret.push_back(ch);
            cnt--;
        }
        reverse(ret.begin(),ret.end());
        for(auto ch:ret)
            left.push(ch);
        return ret;
    }
};

// /**
//  * Your TextEditor object will be instantiated and called as such:
//  * TextEditor* obj = new TextEditor();
//  * obj->addText(text);
//  * int param_2 = obj->deleteText(k);
//  * string param_3 = obj->cursorLeft(k);
//  * string param_4 = obj->cursorRight(k);
//  */