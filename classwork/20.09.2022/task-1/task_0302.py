"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0302. Nosaka piederību gadalaikam dotam mēneša kārtas numuram.
Programma izveidota: 18.09.2022.
"""
import sys


def main():
    """Main function"""

    winter_months = [1, 2, 12]
    spring_months = [3, 4, 5]
    summer_months = [6, 7, 8]
    autumn_months = [9, 10, 11]

    while True:
        user_input = get_input()
        if user_input in winter_months:
            season = "winter"
        elif user_input in spring_months:
            season = "spring"
        elif user_input in summer_months:
            season = "summer"
        elif user_input in autumn_months:
            season = "autumn"
        else:
            print("Invalid month number\n")
            continue
        print(f"It's {season} month\n")


def get_input() -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input("Enter month number (q for exit): ")

        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            return int(value)
        print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
