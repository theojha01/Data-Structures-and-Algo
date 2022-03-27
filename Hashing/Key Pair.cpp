class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    //1468 10 45
	    sort(arr,arr+n);
	    int i=0,j=n-1,sum=0;
	    while(i<j){
	        sum=arr[i]+arr[j];
	        if(sum==x){
	            return true;
	        }
	        else if(sum>x){
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    return false;
	}
};

//Although not used Hashing in this.!!
