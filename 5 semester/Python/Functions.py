def factorial(x):
    fac = 1
    if x >= 1:
        for i in range(1, x + 1):
            fac *= i
    print(f"Factorial of {x} is {fac}")


def isPrime(x):
    for i in range(2, x):
        if (x % i) == 0:
            return 1
    return 0


def leadingDigit(x):
    if x > 0:
        if x > 10:
            leadingDigit(int(x / 10))
        else:
            print(f"Leading digit is {x}")


if __name__ == '__main__':
    print('1.uzd')
    x = int(input("Enter number:"))
    factorial(x)

    print('2.uzd')
    x = int(input("Enter number:"))
    print(f'{isPrime(x)}')

    print('3.uzd')
    x = int(input("Enter number:"))
    leadingDigit(x)
