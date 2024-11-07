# Main merge sort function
def merge_sort(arr, start, end):
    if start == end:
        return arr

    mid = (start + end) // 2
    merge_sort(arr, start, mid)
    merge_sort(arr, mid+1, end)
    merge(arr, start, mid, end)    


# Naive merge sort
# def merge(arr, start, mid, end):
#     i, j, k = start, mid+1, 0
#     temp = [0] * (end - start + 1)

#     while i <= mid and j <= end:
#         if arr[i] <= arr[j]:
#             temp[k] = arr[i]
#             i += 1
#             k += 1
#         elif arr[i] >= arr[j]:
#             temp[k] = arr[j]
#             j += 1
#             k += 1

#     while i <= mid:
#         temp[k] = arr[i]
#         i += 1
#         k += 1

#     while j <= end:
#         temp[k] = arr[j]
#         j += 1
#         k += 1

#     arr[start: end + 1] = temp


# Space optimized merge sort
def merge(arr, start, mid, end):
    start2 = mid + 1
    if(arr[mid] <= arr[start2]):
        return
    
    while start <= mid and start2 <= end:
        if(arr[start] <= arr[start2]):
            start += 1
        else:
            value = arr[start2]
            idx =  start2

            while idx != start:
                arr[idx] = arr[idx -1]
                idx -= 1

            arr[start] = value
            
            start += 1
            mid += 1
            start2 += 1


# Driver function
if __name__ == "__main__":
    arr = [5, 4, 3, 2, 1]
    merge_sort(arr, 0, len(arr)-1)
    print(arr)