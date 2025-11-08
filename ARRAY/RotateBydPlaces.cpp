class Solution {
 public:
    // Function to rotate an array by d elements in counter-clockwise direction.   
    void rotateArr(vector<int>& arr, int d) { 
        // code here
        int n = arr.size();
        vector<int> temp(n);
        d = d % n;
        for(int i = d; i < n; i++){
            temp[i - d] = arr[i];
        }
        int j = 0; 
        for(int i = n - d; i < n; i++){
            temp[i] = arr[j];
            j++;
        }
        for(int i = 0; i < n; ++i) {
            arr[i] = temp[i];
        }
    }
};
