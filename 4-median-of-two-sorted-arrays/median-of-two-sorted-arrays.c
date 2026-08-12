#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {

    int res[nums1Size + nums2Size];
    int index = 0;

    // Copy nums1 into res
    for (int i = 0; i < nums1Size; i++) {
        res[index++] = nums1[i];
    }

    // Copy nums2 into res
    for (int j = 0; j < nums2Size; j++) {
        res[index++] = nums2[j];
    }

    int total = nums1Size + nums2Size;

    // Sort the merged array
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {

            if (res[i] > res[j]) {
                int temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }

    // Find median
    if (total % 2 == 0) {

        int mid1 = total / 2 - 1;
        int mid2 = total / 2;

        return (res[mid1] + res[mid2]) / 2.0;
    }
    else {

        int mid = total / 2;

        return res[mid];
    }
}