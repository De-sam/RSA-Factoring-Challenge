#!/usr/bin/python3
import sys

def getFactors(givenNumber):
    factor1 = 0
    factor2 = 0
    for number in range(2, givenNumber):
        if givenNumber % number == 0:
            factor1 = givenNumber // number
            factor2 = number
            break

    return f'{givenNumber}={factor1}*{factor2}'

def factorize_from_file(filename):
    try:
        with open(filename, 'r') as file:
            for line in file:
                number = int(line.strip())
                result = getFactors(number)
                print(result)
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
    except ValueError:
        print(f"Invalid data in '{filename}'. Please make sure each line contains a valid number.")

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: ./factor.py <file>")
    else:
        filename = sys.argv[1]
        factorize_from_file(filename)
