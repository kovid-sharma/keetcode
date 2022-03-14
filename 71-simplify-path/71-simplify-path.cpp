class Solution {
public:
    string simplifyPath(string path) {
        vector<string>ans;
        string tmp="";
        for(int i=0;i<path.size();i++)
        {   
            while(i<path.size() and path[i]!='/')tmp.push_back(path[i++]);
            if(tmp=="." or tmp==""){tmp.clear();}
            else if(tmp=="..")
            {
                if(!ans.empty())
                ans.pop_back();
                tmp.clear();
            }
            else {ans.push_back(tmp);tmp.clear();}
        }
        string res;
        for(int i=0;i<ans.size();i++){
            res+='/';
            res+=ans[i];
            }
        if(!res.empty())
        return res;
        return "/";
    }
};
/*class Solution {
public:
    string simplifyPath(string str) {
        vector<string> v;
        string ans = "";
        
        for(int i=0; i<str.size(); i++){
            string path = "";
            
            while(i<str.size() and str[i]!='/') path += str[i++];   //get the string till i hits a '/'
            
            if(path == "" or path == ".") continue;     //If the string we get is "." or "" we skip the pushing part
            else if(path == ".."){                                  
                if(v.size()>0) v.pop_back();    //If "..", we pop back so as to go to parent directory
            }
            else v.push_back(path);     //To push the string we obtained till '/'
            
        }
        
        if(v.size() == 0) return "/";
        
        for(int i=0; i<v.size(); i++) ans += "/"+v[i];
        
        return ans;
    }
};*/