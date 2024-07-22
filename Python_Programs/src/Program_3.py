def rearrange_array(arr):
    n = len(arr)
    for i in range(n):
        if i % 2 == 0 and arr[i] >= 0:
            for j in range(i + 1, n):
                if arr[j] < 0:
                    arr[i:j+1] = [arr[j]] + arr[i:j]
                    break
        elif i % 2 == 1 and arr[i] < 0:
            for j in range(i + 1, n):
                if arr[j] >= 0:
                    arr[i:j+1] = [arr[j]] + arr[i:j]
                    break
    return arr

'''
def rearrange_array(arr):
    n = len(arr)
    pos, neg = [], []
    for num in arr:
        if num >= 0:
            pos.append(num)
        else:
            neg.append(num)
    res = []
    while pos and neg:
        res.append(neg.pop(0))
        res.append(pos.pop(0))
    res.extend(pos)
    res.extend(neg)
    return res
'''