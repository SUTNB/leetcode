/*************************************************************************
	> File Name: problem4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月14日 星期六 13时58分55秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int findMedianSortedArrays(int nums1[], int nums2[], int n, int m,int k)
{
    if(n > m)
        return findMedianSortedArrays(nums2, nums1, m, n, k);
    if(n == 0)
        return nums2[k-1];
    if(k == 1)
        return nums1[0]<nums2[0]?nums1[0]:nums2[0];
    int p1 = k/2 < n ? k/2 : n, p2 = k - p1;
    if(nums1[p1-1] > nums2[p2-1])
        return findMedianSortedArrays(nums1, nums2+p2, n, m-p2, k-p2);
    else if(nums1[p1-1] < nums2[p2-1])
        return findMedianSortedArrays(nums1+p1,nums2, n-p1, m, k-p1);
    else
        return nums1[p1-1];
}
int main()
{
    int nums1[3] = {1,5,6}, nums2[5] = {2,3,7,8,9};
    int n = 3, m = 5;
    int k = m + n;
    if(k%2)
        cout<<findMedianSortedArrays(nums1, nums2, n , m, k/2+1)<<endl;
    else
        cout<<(findMedianSortedArrays(nums1, nums2, n , m, k/2)+findMedianSortedArrays(nums1, nums2, n, m, k/2+1))/2.0<<endl;
    return 0;
}
