class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
         int n=words.size();
        vector<string> res;
        int i=0;
        while(i<n){
            int len=0, cnt=0;  // len of line and words in a line that can be fitted resp
            int start=i;
            while(i<n && len+words[i].size() <= maxWidth){
                len += words[i++].size()+1;
                cnt++;
            }
            int spaces = maxWidth-(len-1);  
            cout<<spaces<<endl;
            if(cnt==1){
                string str = "";
                str += words[start];
                for(int i=0; i<spaces; i++) str+=' ';
                res.push_back(str);
                continue;
            }
            if(i==n){
                string str = "";
                while(start<i-1) str += (words[start++]+' ');
                str += words[start];
                while(spaces--){
                    str += ' ';
                }
                res.push_back(str);
                continue;
            }
            int equal_spaces = spaces/(cnt-1);
            int extra_spaces = spaces%(cnt-1);
            // cout<<equal_spaces<<endl;
            string str = "";
            while(1){
                str += words[start];
                if(start==i-1) break;
                for(int i=0; i<=equal_spaces; i++){
                    str += ' ';
                }
                if(extra_spaces-->0) str += ' ';
                start++;
            }
            res.push_back(str);
        }
        return res;
    }
};
