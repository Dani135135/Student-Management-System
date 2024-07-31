# Student Management System

## Overview

The Student Management System is a simple console-based application developed in C++ that allows users to manage student records. The system supports adding, editing, deleting, viewing, and searching for student information. This project demonstrates basic file handling, struct usage, and user input in C++.

## Features

- **Add Student**: Allows users to add new student records, including student ID, name, age, and grade.
- **Edit Student**: Enables users to update the details of existing student records based on student ID.
- **Delete Student**: Provides the functionality to remove student records from the system based on student ID.
- **View Students**: Displays all student records in a formatted list.
- **Search Student**: Allows users to search for a student record by student ID.

## File Structure

- `student.txt`: Stores the student records in a human-readable format.
- `id.txt`: Maintains a list of student IDs for quick lookup.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC)
- A text editor or an Integrated Development Environment (IDE)

### Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/student-management-system.git
    ```

2. **Navigate to the project directory**:
    ```bash
    cd student-management-system
    ```

3. **Compile the code**:
    ```bash
    g++ main.cpp -o student_management_system
    ```

4. **Run the application**:
    ```bash
    ./student_management_system
    ```

## Usage

Upon running the application, a menu will be displayed with the following options:

1. **ADD STUDENT**: Add a new student record.
2. **EDIT STUDENT**: Edit an existing student record.
3. **DELETE STUDENT**: Delete a student record.
4. **VIEW STUDENT RECORD**: View all student records.
5. **SEARCH STUDENT**: Search for a student by ID.
6. **EXIT**: Exit the application.

Follow the on-screen prompts to perform the desired operations.

## Code Structure

- **Student Struct**: Defines the structure of a student record.
- **addStudent()**: Function to add a new student.
- **editStudent()**: Function to edit an existing student record.
- **deleteStudent()**: Function to delete a student record.
- **viewStudent()**: Function to view all student records.
- **searchStudent()**: Function to search for a student by ID.
- **main()**: The main function that drives the application, displaying the menu and calling the appropriate functions based on user input.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure that your code adheres to the project's coding standards.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgements

This project was developed as part of a learning exercise to demonstrate basic C++ programming concepts, including file handling and user input.

---
