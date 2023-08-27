class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
                int length= str.length();

       // str.length as the name suggests...checks the length of string.....Example=geeks...length=5 
        
         string s="";
        for(int i=length-1;i>=0;i--)        //length-1 because of array serial 4,3,2,1,0
        {
            s+=str[i];
           // ""+s=s...s+k=sk...sk+e=ske...ske+e=skee...skee+g=skeeg
        }
        return s;
    }
};
