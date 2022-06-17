/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int cams=0;
    string status(TreeNode* root)
    {
        //This function returns the status of the current root
        
        if(root==NULL)
            return "noissue";
        
        
        
        //We need to know status of children to determine the staus of root
        string statusC1= status(root->left);    //Status of left child
        string statusC2= status(root->right);   //Status of right child
        
        //Determining the status of root with the help of above information
        
        
        
        //First we have to check if any of the child is having issues
        if(statusC1=="issues" or statusC2=="issues")
        {
            cams++;
            return "Protector";   //root has to become a Protector 
        }
        
        else if (statusC1=="Protector" or statusC2=="Protector")
        {
            return "noissue";
        }
        
        else if(statusC1=="noissue" and statusC2=="noissue")
        {
            return "issues";
        }
        return "controlNeverReachesHere";
        
    }
    int minCameraCover(TreeNode* root) {
        /*
            EVERY NODE HAS 3 Possibilities
            
            
            a) It has a camera and is *Protector
            b) It is protected by someone and has *noissue
            c) It is not protected by anyone and also doesn't have camera  *hasissues
            
        
        */
        if(status(root)=="issues")
            cams++;
        //no need to add camera if the root is Protector or it has noissue.
        
        return cams;
    }
};