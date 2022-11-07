"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0306. Pārbauda, vai kāds no trim ievadītajiem skaitļiem beidzas ar '21'.
Programma izveidota: 18.09.2022.
"""
import sys


def main():
    """Main function"""

    ordinals = ["1st", "2nd", "3rd"]
    while True:
        numbers = []
        lucky_numbers = []
        for ordinal in ordinals:
            numbers.append(get_input(ordinal))
        for number in numbers:
            if number % 100 == 21:
                lucky_numbers.append(number)
        if len(lucky_numbers) == 0:
            print("There are no lucky numbers\n")
        elif len(lucky_numbers) == 1:
            print(f"Number {lucky_numbers} is lucky\n")
        else:
            print(f"Numbers {lucky_numbers} are lucky\n")


def get_input(index) -> int:
    """Gets user input and returns its integer value, if value is numeric"""
    while True:
        value = input(f"Enter {index} number (q for exit): ")

        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            return int(value)
        print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
