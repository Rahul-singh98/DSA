#include <bits/stdc++.h>

using namespace std;

class Recursive
{
private:
    // A function to merge the two half into a sorted data.
    void Merge(vector<int> &a, int low, int high, int mid)
    {
        // We have low to mid and mid+1 to high already sorted.
        int i, j, k, temp[high - low + 1];
        i = low;
        k = 0;
        j = mid + 1;

        // Merge the two parts into temp[].
        while (i <= mid && j <= high)
        {
            if (a[i] < a[j])
            {
                temp[k] = a[i];
                k++;
                i++;
            }
            else
            {
                temp[k] = a[j];
                k++;
                j++;
            }
        }

        // Insert all the remaining values from i to mid into temp[].
        while (i <= mid)
        {
            temp[k] = a[i];
            k++;
            i++;
        }

        // Insert all the remaining values from j to high into temp[].
        while (j <= high)
        {
            temp[k] = a[j];
            k++;
            j++;
        }

        // Assign sorted data stored in temp[] to a[].
        for (i = low; i <= high; i++)
        {
            a[i] = temp[i - low];
        }
    }

public:
    // A function to split array into two parts.
    void MergeSort(vector<int> &a, int low, int high)
    {
        int mid;
        if (low < high)
        {
            mid = (low + high) / 2;
            // Split the data into two half.
            MergeSort(a, low, mid);
            MergeSort(a, mid + 1, high);

            // Merge them to get sorted output.
            Merge(a, low, high, mid);
        }
    }
};

class Iterative
{
private:
    /* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
    void merge(vector<int>& arr, int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        /* create temp arrays */
        int L[n1], R[n2];

        /* Copy data to temp arrays L[] and R[] */
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        /* Merge the temp arrays back into arr[l..r]*/
        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        /* Copy the remaining elements of L[], if there are any */
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        /* Copy the remaining elements of R[], if there are any */
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    // Utility function to find minimum of two integers
    int min(int x, int y) { return (x < y) ? x : y; }

public:
    /* Iterative mergesort function to sort arr[0...n-1] */
    void MergeSort(vector<int>& arr, int n)
    {
        int curr_size;  // For current size of subarrays to be merged
                        // curr_size varies from 1 to n/2
        int left_start; // For picking starting index of left subarray
                        // to be merged

        // Merge subarrays in bottom up manner.  First merge subarrays of
        // size 1 to create sorted subarrays of size 2, then merge subarrays
        // of size 2 to create sorted subarrays of size 4, and so on.
        for (curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size)
        {
            // Pick starting point of different subarrays of current size
            for (left_start = 0; left_start < n - 1; left_start += 2 * curr_size)
            {
                // Find ending point of left subarray. mid+1 is starting
                // point of right
                int mid = min(left_start + curr_size - 1, n - 1);

                int right_end = min(left_start + 2 * curr_size - 1, n - 1);

                // Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
                merge(arr, left_start, mid, right_end);
            }
        }
    }
};

int main()
{
    vector<int> v = {1, 23, 41, 2465, 23, 42, 3523, 5234};
    // Recursive obj;
    // obj.MergeSort(v, 0, v.size() - 1);
    Iterative obj;
    obj.MergeSort(v, v.size()-1);
    for (auto i : v)
        cout << i << ' ';
    cout << endl;
}