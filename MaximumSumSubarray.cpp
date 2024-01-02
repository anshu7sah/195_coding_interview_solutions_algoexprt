#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c) {
    return max(max(a, b), c);
}
int maxCrossingSum(int arr[], int low, int mid, int high) {
    
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= low; --i) {
        sum += arr[i];
        left_sum = max(left_sum, sum);
    }

    
    int right_sum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= high; ++i) {
        sum += arr[i];
        right_sum = max(right_sum, sum);
    }

 
    return left_sum + right_sum;
}

int maxSumSubarrayLength(int arr[], int low, int high) {

    if (low == high) {
        return 1;
    }

    int mid = (low + high) / 2;

    int left_max = maxSumSubarrayLength(arr, low, mid);
    int right_max = maxSumSubarrayLength(arr, mid + 1, high);

    int cross_max = maxCrossingSum(arr, low, mid, high);

    return max(max(left_max, right_max), cross_max);
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[] = {1, -3, 4, -2, -1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSumSubarrayLength(arr, 0, n - 1);

    cout << "Length of the maximum sum subarray: " << result << endl;

	



}

