"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0404. Nosaka garākās ievadīto skaiļu virknes garumu.
Programma izveidota: 27.09.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        sequence = 0
        biggest_sequence = 0
        number_amount = get_input(
            "Enter, how much numbers you want to enter (q for exit): ", natural=True)

        for i in range(number_amount):
            user_input = get_input("Enter number: ")
            if i == 0:
                previous_number = user_input
            if user_input <= previous_number:
                sequence = 0
            sequence += 1
            if sequence > biggest_sequence:
                biggest_sequence = sequence
            previous_number = user_input

        print(f"Longest sequence of acsending numbers is {biggest_sequence}")


def get_input(text, natural=False) -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        try:
            if natural and int(value) < 0:
                print("Please enter a natural number\n")
            else:
                return int(value)
        except ValueError:
            print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
