"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0304. Nosaka lielāko ievadīto skaitli.
Programma izveidota: 18.09.2022.
"""
import sys


def main():
    """Main function"""
    while True:
        biggest_number = 0
        number_amount = get_input("Enter how much numbers you want to enter: ")
        if number_amount > 0:
            for _ in range(number_amount):
                user_input = get_input("Enter numbers: ")
                if user_input > biggest_number:
                    biggest_number = user_input
            print(f"The biggest entered number is {biggest_number}\n")
        else:
            number_amount = get_input(
                "Numbers must be bigger than 0. Try again: ")

        ask_continue = input("Continue? [y/n] ")
        if ask_continue.lower().strip() not in ["y", "yes", "ja", "jā", "1", ""]:
            sys.exit("User closed the program")


def get_input(text) -> int:
    """Gets user input and returns its integer value, if value is numeric"""
    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            return int(value)
        print("Please enter a natural number")


if __name__ == "__main__":
    main()
