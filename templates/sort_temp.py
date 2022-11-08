from typing import List

def msort(nums: List[int]) -> None:
    def msort_helper(nums: List[int], l: int, r: int) -> None:
        if l >= r: return
        m = (l + r) // 2
        msort_helper(nums, l, m)
        msort_helper(nums, m + 1, r)
        merge(nums, l, r)

    def merge(nums: List[int], l: int, r: int) -> None:
        m = (l + r) // 2
        i, j = l, m + 1
        list = []
        for k in range(r - l + 1):
            if j > r or (i <= m and nums[i] < nums[j]): 
                list.append(nums[i])
                i += 1
            else: 
                list.append(nums[j])
                j += 1
        for k in range(len(list)):
            nums[l] = list[k]
            l += 1

    msort_helper(nums, 0, len(nums) - 1)


def qsort(nums: List[int]) -> None:
    def qsort_helper(nums: List[int], l: int, r: int) -> None:
        if l >= r: return

        p = partition(nums, l, r)
        qsort_helper(nums, l, p - 1)
        qsort_helper(nums, p + 1, r)

    def partition(nums: List[int], l: int, r: int) -> int:
        pivot, p = nums[r], r

        i = l
        while i < p:
            if nums[i] > pivot: 
                nums[i], nums[p - 1] = nums[p - 1], nums[i]
                nums[p], nums[p - 1] = nums[p - 1], nums[p]
                i -= 1
                p -= 1
            i += 1

        return p
        
    qsort_helper(nums, 0, len(nums) - 1)