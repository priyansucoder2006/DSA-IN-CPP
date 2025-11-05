class Solution {
public:
    vector<int> rotate(vector<int> &arr) {
        int temp = arr[arr.size() - 1];  // store last element

        for (int i = arr.size() - 1; i > 0; i--) { // shift right
            arr[i] = arr[i - 1];
        }

        arr[0] = temp; // place last element at the start
        return arr;
    }
};
