"""Handlers"""
from math import log10, floor


def get_number_length(number: int) -> int:
    """Return lenght of number"""
    if number == 0:
        return 1
    return floor(log10(abs(number)) + 1)
