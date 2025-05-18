import sys
input = sys.stdin.readline

arr = [3,6,5,2,7,8,9]
brr = [0] * len(arr)

def TopDownMergeSort(A, B, n):
    CopyArray(A, 0, n, B) # duplicate array A into B
    TopDownSplitMerge(B, 0, n, A) # sort data from B into A

# Sort the given run of array A using array B as a source.
def TopDownSplitMerge(B, iBegin, iEnd, A):
    if iEnd - iBegin < 2:
        return # consider it sorted

    iMiddle = (iEnd + iBegin) / 2

    TopDownSplitMerge(A, iBegin, iMiddle, B) # sort the left run
    TopDownSplitMerge(A, iMiddle, iEnd, B) # sort the right run

    TopDownMerge(B, iBegin, iMiddle, iEnd, A)

def TopDownMerge(A, iBegin, iMiddle, iEnd, B):
    i = iBegin
    j = iMiddle

    for k in range(int(i), int(j)):
        if i < iMiddle and (j >= iEnd or A[int(i)] <= A[int(j)]):
            B[k] = A[int(i)]
            i = i + 1
        else:
            B[k] = A[int(j)]
            j = j + 1

def CopyArray(A, iBegin, iEnd, B):
    for k in range(iBegin, iEnd):
        B[k] = A[k]

TopDownMergeSort(arr, brr, len(arr))
print(arr)
