class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int low = 0;
        int high = n;
       
        while(low < high - 1) {
            int mid = low + (high - low) / 2;
            
            if(arr[mid] >= arr[mid - 1])
                low = mid;
            else
                high = mid;
        }
        
        return low;
    }
};
