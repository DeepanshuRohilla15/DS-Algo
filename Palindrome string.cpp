class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0, j=S.size()-1;
    while(i<j and (S[i++]==S[j--])) i++, j--;
    return i>=j;
	}

};
