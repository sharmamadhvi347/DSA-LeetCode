class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int high = arr.size()-2;
        int low=1;
        int mid;

        while(low<=high){
            mid = (low+high)/2;

            if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]) return mid;
            else if(arr[mid-1]> arr[mid]) high = mid-1;
            else if(arr[mid-1]< arr[mid]) low = mid+1;
        }

        return arr[mid];
    }
};