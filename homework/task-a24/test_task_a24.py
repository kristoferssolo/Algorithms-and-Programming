"""Unit tests"""
import unittest
import task_a24


class TestTask(unittest.TestCase):
    def test_lenth(self):
        self.assertEqual(task_a24.get_length(123456789), 9)
        self.assertEqual(task_a24.get_length(0), 1)
        self.assertEqual(task_a24.get_length(8734), 4)

    def test_sum(self):
        self.assertEqual(task_a24.sum_numbers(123456789, 5), 35)
        self.assertEqual(task_a24.sum_numbers(54321, 4), 10)
        self.assertEqual(task_a24.sum_numbers(14287612348763, 8), 34)


if __name__ == "__main__":
    unittest.main()
