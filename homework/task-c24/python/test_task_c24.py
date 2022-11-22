"""Unit tests"""
import unittest
import task_c24


class TestTask(unittest.TestCase):
    def test_list(self):
        self.assertEqual(task_c24.make_ascending(
            [44, 54, 88, 39, 45, 64, 81, 28, 25, 50]), [44, 54, 88])
        self.assertEqual(task_c24.make_ascending(
            [88, 6, 87, 39, 27, 78, 93, 4, 48, 8]), [88, 93])
        self.assertEqual(task_c24.make_ascending(
            [34, 67, 20, 93, 39, 17, 33, 23, 32, 35]), [34, 67, 93])
        self.assertEqual(task_c24.make_ascending(
            [68, 55, 69, 75, 44, 86, 47, 77, 19, 17]), [68, 69, 75, 86])
        self.assertEqual(task_c24.make_ascending(
            [83, 75, 89, 91, 78, 46, 21, 34, 96, 19]), [83, 89, 91, 96])
        self.assertEqual(task_c24.make_ascending(
            [34, 19, 96, 63, 60, 39, 77, 16, 9, 35]), [34, 96])
        self.assertEqual(task_c24.make_ascending(
            [48, 1, 18, 77, 50, 35, 88, 99, 43, 6]), [48, 77, 88, 99])
        self.assertEqual(task_c24.make_ascending(
            [33, 35, 58, 97, 48, 20, 11, 90, 3, 30]), [33, 35, 58, 97])
        self.assertEqual(task_c24.make_ascending(
            [48, 64, 21, 40, 26, 17, 96, 13, 65, 79]), [48, 64, 96])
        self.assertEqual(task_c24.make_ascending(
            [47, 62, 14, 26, 87, 18, 84, 13, 98, 66]), [47, 62, 87, 98])


if __name__ == "__main__":
    unittest.main()
