import unittest
import task_0506


class TestTask(unittest.TestCase):
    def test_bigges_number(self):
        self.assertEqual(task_0506.get_biggest_number(10, 1), 10)
        self.assertEqual(task_0506.get_biggest_number(-10, -1), -1)
        self.assertEqual(task_0506.get_biggest_number(10, -1), 10)
        self.assertEqual(task_0506.get_biggest_number(-10, 1), 1)
        self.assertEqual(task_0506.get_biggest_number(0, -10), 0)
        self.assertEqual(task_0506.get_biggest_number(10, 0), 10)


if __name__ == "__main__":
    unittest.main()
