def printSubLists(arr):
    for x in range(len(arr)):
        total = 0
        for y in range(x, len(arr)):
            total += arr[y]
            if total == 0:
                print(arr[x:y+1])


def arrZeroToEnd(arr):
    count = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[count] = arr[i]
            count += 1

    while count < len(arr):
        arr[count] = 0
        count += 1
    print(f"Array after moving 0 to back: {arr}")


def calculateSumRow(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    for x in range(0, rows):
        sumRow = 0
        for y in range(0, cols):
            sumRow += matrix[x][y]
        print(f"Sum of {x + 1} row: {sumRow}")


if __name__ == '__main__':
    print('1.uzd')
    x = int(input("Enter count of numbers: "))
    lst1 = []
    for i in range(0, x):
        ele = int(input("Enter element row wise:"))
        lst1.append(ele)

    printSubLists(lst1)

    print('2.uzd')
    x = int(input("Enter count of numbers: "))
    lst2 = []
    for i in range(0, x):
        ele = int(input("Enter element row wise:"))
        lst2.append(ele)

    arrZeroToEnd(lst2)

    print('3.uzd')
    x = int(input("Enter count of rows:"))
    y = int(input("Enter count of columns:"))

    matrix = []
    for i in range(x):
        a = []
        for j in range(y):
            ele = int(input("Enter element row wise:"))
            a.append(int(ele))
        matrix.append(a)

    calculateSumRow(matrix)
