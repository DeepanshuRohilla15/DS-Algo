class Solution {
  public:
  unordered_map<string, int> mp;
  string solve(Node* root){
      if(!root) return "$";
      
      string s ="";
      if(!root->left && !root->right)
      {
          s = s + to_string(root->data);
         s += "#";
          return s;
      }
      
      s = s + to_string(root->data);
        s += "#";
      s = s + solve(root->left);
               s += "#";
      s = s + solve(root->right);
        s += "#";
      mp[s]++;
      return s;
  }
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
        
         solve(root);
         for(auto x: mp)
         {
             if(x.second>=2 ) return true;
         }
         
         return false;
         
    }
};
