class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int>arr3;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                arr3.push_back(nums1[i++]);
            } else {
                arr3.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) {
            arr3.push_back(nums1[i++]);
        }
        while (j < nums2.size()) {
            arr3.push_back(nums2[j++]);
        }//leftovers.
        int n = arr3.size();
        if (n % 2 == 1) {
            return arr3[n / 2];
        } else {
            return (arr3[(n/2)-1]+arr3[n/2])/2.0;
        }
    }
};