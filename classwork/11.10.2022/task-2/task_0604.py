"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0604. Nosaka lielākā skaitļa vērtību.
Programma izveidota: 11.10.2022.
"""

import sys


def main() -> None:
    """Main function"""
    while True:
        numbers = input("Enter numbers: ").lower().split()
        if "q" in numbers:
            sys.exit("User closed the program")
        # print(f"The biggest entered number is {max(convert(numbers))}")
        print(
            f"The biggest entered number is {get_biggest_number(convert(numbers))}")


def convert(numbers: list) -> list:
    """Converts all list items to int or float, if posible"""
    converted_numbers = []
    for number in numbers:
        if number.isdecimal():
            converted_numbers.append(int(number))
        else:
            try:
                converted_numbers.append(float(number))
            except ValueError:
                continue
    return converted_numbers


def get_biggest_number(numbers: list):
    """Gets biggest number from list"""
    biggest_number = numbers[0]
    for number in numbers:
        biggest_number = number if number > biggest_number else biggest_number
    return biggest_number


if __name__ == "__main__":
    main()
