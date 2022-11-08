"""
Autors - Kristiāns Francis Cagulis, kc22015
C24. Izdēš tos masīva elemetus, lai masīvs būtu augošs.
Programma izveidota: 15.10.2022.
"""

import sys


def main() -> None:
    """Main function"""

    while True:
        numbers = get_input()
        print(f"{make_ascending(numbers)}")

        ask_continue = input("Continue program? [1/0] ")
        yes = ["y", "yes", "j", "ja", "jā", "", "1"]
        if ask_continue.lower().strip() not in yes:
            sys.exit("User closed the program")


def make_ascending(numbers: list) -> list:
    """Removes all elements that prevent the array from being ascending."""
    ordered_numbers = []
    previous_number = numbers[0]
    for number in numbers:
        if number >= previous_number:
            ordered_numbers.append(number)
            previous_number = number
    return ordered_numbers


def get_input() -> list:
    """Gets user input and returns its integer value"""
    while True:
        array = input("Enter numbers (q for exit): ").strip().split()
        if "q" in array:
            sys.exit("User closed the program")
        try:
            return list(map(int, array))
        except ValueError:
            print("All entered values must be integers\n")


if __name__ == "__main__":
    main()
