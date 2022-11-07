"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0206. Aprēģina negatīvo skaitļu summu.
Programma izveidota: 10.09.2022.
"""
import sys


def main():
    """Main function"""

    negative_sum = 0
    while True:
        user_input = input("Enter value to sum up (q for exit): ")

        if user_input.lower() == "q":
            sys.exit("User closed the program")
        try:
            value = int(user_input)
            if value < 0:
                negative_sum += value
            if value == 0:
                print(
                    f"Sum of all entered negative numbers is {negative_sum}\n")
                value = None
                negative_sum = 0

        except ValueError:
            print("Please enter an intiger\n")


if __name__ == "__main__":
    main()
