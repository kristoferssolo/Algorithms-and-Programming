"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0202. Pārvērš Fārenheita grādus Celsija grādos.
Programma izveidota: 10.09.2022.
"""
import sys


def main():
    """Main function"""

    while True:
        user_input = input("Enter degrees in Fahrenheit (q for exit): ")

        if user_input.lower() == "q":
            sys.exit("User closed the program")
        try:
            fahrenheit = float(user_input)
            celsius = 5 / 9 * (fahrenheit - 32)
            print(
                f"{int(fahrenheit) if fahrenheit.is_integer() else fahrenheit} degrees in Fahrenheit is {int(celsius) if celsius.is_integer() else round(celsius,2)} degrees in Celsius\n")
        except ValueError:
            print("Please enter a number")


if __name__ == "__main__":
    main()
