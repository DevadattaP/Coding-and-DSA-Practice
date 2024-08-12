# TnP Coding Practice and DSA Practice Repository

Welcome to the **Coding and DSA Practice** repository. This repository contains a collection of programming problems and their solutions, which have been curated for company-specific placement drives as well as general Data Structures and Algorithms (DSA) practice. These problems are provided by the Training and Placement Department to help learners prepare for technical interviews and coding assessments.

## Repository Structure

The repository is organized by programming languages, with each problem solution available in C, Java, and Python. Additionally, unit tests have been implemented for those interested in verifying the correctness of the solutions.

### Available Languages:
- **C**
- **Java**
- **Python**


## Problem List

Below is a list of some of the problems solved in this repository:

1. **Check if a number is Even or Odd**  
  
2. **Find Maximum Difference**  
   ( Given an array `arr[]` of N positive integers, the task is to find the maximum of `j - i` subjected to the constraint `arr[i] <= arr[j]`. )

3. **Rearrange array in alternating positive & negative items** with O(1) extra space
4. **Find missing number from array**
5. **Concatenate given array twice**
6. **Find maximum sum path in two arrays**
7. **Find common elements in three arrays**
8. **`Coming Soon ...`**

The complete problems statements are provided in `Problems.txt file`.
Each problem has a dedicated program file with solutions in the three languages mentioned above. The solutions are designed to be clean and efficient, following best practices in programming.
> Please note that, there can be multiple approaches to solve the same problem, and you can try them on your own!

## Unit Testing

Unit tests are available for the implemented solutions to ensure correctness. These tests can be found in the `test/` directory and are written using popular testing frameworks like `unittest` for Python, `JUnit` for Java, and `CMake` for C.

### Running Tests

To run the unit tests, follow the instructions below based on your language of choice:

- **Python**:  
  Navigate to the `Python_Programs/test/` directory and run the tests using `unittest`:
  ```bash
  python -m unittest Program_1.py
    ```
- **Java**:
  Use the `JUnit` framework to run the tests in the `Java_Programs/test/` directory.
  ```bash
  javac Test_Program_1.java
  java Test_Program_1
  ```

- **C**:
  Compile the test file along with the solution file and run the executable:
  ```bash
    gcc -o test_Program_1 Program_1.c test_Program_1.c
    ./test_even_or_odd
    ```
>- You need to adjust the file path accordingly...
>- Change the file name to the program you want to run ...
>- Try different test cases by editing the test cases files ...
## How to Contribute
I welcome contributions from the community to enhance this repository. If you have a solution in another language, or a more optimized solution, feel free to submit a pull request.

### Steps to Contribute:
1. Fork the repository.
2. Create a new branch: `git checkout -b feature-branch`
3. Make your changes and commit them: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin feature-branch`
5. Submit a pull request.

## Contact
For any queries or suggestions open an issue.

## Happy Coding!