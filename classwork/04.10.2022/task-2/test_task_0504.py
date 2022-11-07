import unittest
import task_0504


class TestTask(unittest.TestCase):
    def test_get_len(self):
        self.assertEqual(task_0504.get_len(123456789), 9)
        self.assertEqual(task_0504.get_len(0), 1)
        self.assertEqual(task_0504.get_len(1234), 4)


if __name__ == "__main__":
    unittest.main()
