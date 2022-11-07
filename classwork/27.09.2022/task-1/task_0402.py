"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0402. Nosaka, vai ievadītie skaitļi ir ievadīti augošā secībā.
Programma izveidota: 27.09.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        ascending = True
        number_amount = get_input(
            "Enter, how much numbers you want to enter (q for exit): ", natural=True)

        for i in range(number_amount):
            user_input = get_input("Enter number: ")
            if i == 0:
                previous_number = user_input
            else:
                if user_input <= previous_number:
                    ascending = False
                previous_number = user_input

        if ascending:
            print("Entered numbers were in ascending order")
        else:
            print("Entered numbers weren't in ascending order")


def get_input(text, natural=False) -> int:
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
            print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
