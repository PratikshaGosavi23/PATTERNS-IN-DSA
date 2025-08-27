#include <bits/stdc++.h>
using namespace std;

// ---------------- OPPOSITE DIRECTION ----------------
// Example: Pair Sum in Sorted Array
bool pairSum(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == target) return true;
        else if (sum < target) l++;
        else r--;
    }
    return false;
}

// Example: Triplet Sum in Sorted Array
bool tripletSum(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n - 2; i++) { // n-2 because need 3 elements
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == target) return true;
            else if (sum < target) l++;
            else r--;
        }
    }
    return false;
}

// ---------------- SAME DIRECTION ----------------
// Example: Remove Duplicates from Sorted Array
int removeDuplicates(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            arr[j++] = arr[i];
        }
    }
    return j; // new size
}

// ---------------- PARTITIONS ----------------
// Example: Dutch National Flag (Sort 0s,1s,2s)
void sortColors(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
}

// ---------------- MAIN ----------------
int main() {
    // Opposite Direction → Pair Sum
    vector<int> arr1 = {1, 2, 3, 4, 6};
    cout << "Pair Sum (target=6): " << (pairSum(arr1, 6) ? "Found" : "Not Found") << endl;

    // Opposite Direction → Triplet Sum
    vector<int> arr2 = {1,2,4,5,6,8,9};
    cout << "Triplet Sum (target=15): " << (tripletSum(arr2, 15) ? "Found" : "Not Found") << endl;

    // Same Direction → Remove Duplicates
    vector<int> arr3 = {1,1,2,2,3,3,4};
    int newSize = removeDuplicates(arr3);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) cout << arr3[i] << " ";
    cout << endl;

    // Partitions → Sort Colors
    vector<int> arr4 = {0,2,1,2,0,1,0};
    sortColors(arr4);
    cout << "Sorted Colors: ";
    for (int x : arr4) cout << x << " ";
    cout << endl;

    return 0;
}
