#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0;i < n-1;i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void selectionsort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n-1; i++) {
        int minindex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}

void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> temp;
    int i = l, j = mid+1;

    while(i <= mid && j <= r) {
        if(arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= r) temp.push_back(arr[j++]);

    for(int k = l; k <= r; k++) arr[k] = temp[k-l];
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l >= r) return;
    int mid = l + (r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
}



