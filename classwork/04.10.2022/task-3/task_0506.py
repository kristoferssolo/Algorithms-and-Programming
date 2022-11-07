"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0506. Nosaka lielākā skaitļa vērtību.
Programma izveidota: 03.10.2022.
"""
import sys


def main():
    """Main function"""
    while True:
        number_amount = get_input(
            "Enter, how much numbers you want to enter (q for exit): ", natural=True)
        for cycle in range(number_amount):
            user_input = get_input("Enter number: ")
            if not cycle:  # 1st cycle
                biggest_number = user_input
            biggest_number = get_biggest_number(user_input, biggest_number)
        print(f"The greatest entered number was {biggest_number}\n")


def get_biggest_number(number_1: int, number_2: int) -> int:
    """Compares 2 numbers and returns the greatest one"""
    if number_1 > number_2:
        return number_1
    return number_2


def get_input(text, natural: bool = False) -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        try:
            if natural and int(value) <= 0:
                print("Please enter a natural number\n")
            else:
                return int(value)
        except ValueError:
            if natural:
                print("Please enter a natural number\n")
            else:
                print("Please enter a whole number\n")


if __name__ == "__main__":
    main()
