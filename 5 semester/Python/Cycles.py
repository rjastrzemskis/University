def oddEvenFor(n):
    for x in range(n + 1):
        if (x % 2) == 0:
            print(f"The {x} is even")
        else:
            print(f"The {x} is odd")


def oddEvenWhile(n):
    i = 0
    while i <= n:
        if (i % 2) == 0:
            print(f"The {i} is even")
        else:
            print(f"The {i} is odd")

        i += 1


def seriesFor(n):
    sum = 0
    if (n % 2) != 0 and n > 0:
        for i in range(1, n + 1):
            sum += i
    else:
        print("Negative or even number")
    print(f"The {sum} is sum of series for number {n}")


def seriesWhile(n):
    sum = 0
    if (n % 2) != 0 and n > 0:
        i = 1
        while i <= n:
            sum += i
            i += 1
    else:
        print("Negative or even number")
    print(f"The {sum} is sum of series for number {n}")


if __name__ == '__main__':
    print('1.uzd')
    n = int(input("Enter number:"))
    oddEvenFor(n)
    oddEvenWhile(n)

    print('2.uzd')
    n = int(input("Enter number:"))
    seriesFor(n)
    seriesWhile(n)
