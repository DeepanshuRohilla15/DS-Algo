class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
     int i=0;
        int j=n-1;
        int count=0;
        while(i<=j){
            if(arr[i]==x){
                count++;
            }
            if(i<j){
            if(arr[j]==x){
                count++;
            }
            }
            i++;
            j--;
        }
        return count;
	}
};
