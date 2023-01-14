from typing import List

# Iterative Approach


def binarySearchIterative(arr: List[int], target: int) -> bool:
    start_idx, end_idx = 0, len(arr) - 1
    while start_idx <= end_idx:
        mid_idx = (start_idx + end_idx) // 2
        if arr[mid_idx] == target:
            return True
        if arr[mid_idx] < target:
            start_idx = mid_idx + 1
        else:
            end_idx = mid_idx - 1
    return False


# Recursive Approach
def binarySearchRecursive(arr: List[int], start_idx: int, end_idx: int, target: int) -> bool:
    if start_idx > end_idx:
        return False
    mid_idx = (start_idx + end_idx) // 2
    if target == arr[mid_idx]:
        return True
    if arr[mid_idx] < target:
        return binarySearchRecursive(arr, mid_idx + 1, end_idx, target)
    else:
        return binarySearchRecursive(arr, start_idx, mid_idx - 1, target)


# If the target exists, returns its leftmost index.
# Else, returns the index of where it should be.
def lower_bound(arr: List[int], target: int) -> int:
    start_idx, end_idx = 0, len(arr)
    while start_idx < end_idx:
        m = (start_idx + end_idx) // 2
        if arr[m] < target:
            start_idx = m + 1
        else:
            end_idx = m
    return start_idx


def upper_bound(nums: List[int], target: int) -> int:
    start_idx, end_idx = 0, len(nums) - 1
    ans = -1
    while start_idx <= end_idx:
        mid_idx = (start_idx + end_idx) // 2
        if nums[mid_idx] <= target:
            start_idx = mid_idx + 1
            if nums[mid_idx] == target:
                ans = mid_idx
        else:
            end_idx = mid_idx - 1
    return ans
