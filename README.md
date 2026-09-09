# 📚 Book Management System in C

A simple and beginner-friendly **Book Management System** built using the **C programming language**. This project demonstrates the use of **structures (`struct`)**, user input handling, strings, and formatted output in C.

The program allows users to enter and display information about multiple books, including their **title, author, and price**.

---

## ✨ Features

* 📖 Store book information using C structures
* 📝 Enter details for multiple books
* 👤 Store book title and author information
* 💰 Store and display book prices
* 📋 Display all entered book records
* 🧩 Demonstrates the practical use of `struct` in C
* 🎯 Beginner-friendly implementation

---

## 🛠️ Technologies Used

* **C Programming Language**
* **C Standard Library**

  * `stdio.h`
  * `string.h`

---

## 📂 Project Structure

```text
book-management-system/
│
├── structure_1.c
├── README.md
└── .gitignore
```

### `structure_1.c`

The main C source file containing the implementation of the Book Management System.

---

## 🧠 Concepts Demonstrated

This project is designed to practice fundamental C programming concepts such as:

* Structures
* Arrays of structures
* Strings
* `fgets()`
* `scanf()`
* `printf()`
* Loops
* User input
* Formatted output

---

## 📋 Book Structure

The project uses a structure to represent a book:

```c
struct book {
    char title[100];
    char author[100];
    float price;
};
```

Each book contains:

| Field    | Description        |
| -------- | ------------------ |
| `title`  | Name of the book   |
| `author` | Author of the book |
| `price`  | Price of the book  |

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/codewithmorcous/book-management-system.git
```

### 2. Navigate to the Project

```bash
cd book-management-system
```

### 3. Compile the Program

If you have GCC installed:

```bash
gcc structure_1.c -o book-management
```

### 4. Run the Program

**Windows:**

```bash
book-management.exe
```

**Linux / macOS:**

```bash
./book-management
```

---

## 💻 Example

The program asks the user to enter information about books, such as:

```text
Enter book title:
The Alchemist

Enter author name:
Paulo Coelho

Enter book price:
299
```

After entering the information, the program displays the stored book details.

---

## 🎯 Learning Objective

The main purpose of this project is to understand how **structures can be used to organize related data** in C.

Instead of storing a book's title, author, and price separately, a structure allows all related information to be grouped together into a single data type.

This makes the program easier to understand and provides a foundation for building more advanced management systems.

---

## 🔮 Future Improvements

This project can be extended with additional functionality such as:

* 🔍 Search books by title or author
* ✏️ Update book information
* 🗑️ Delete books
* ➕ Add an unlimited number of books dynamically
* 📊 Sort books by price or title
* 💾 Save book data to a file
* 📂 Load book data from a file
* 🧾 Add book IDs
* 📚 Create a complete library management system

---

## 👨‍💻 Author

**CodeWithMorcous**

GitHub: [@codewithmorcous](https://github.com/codewithmorcous)

---

## ⭐ Support

If you found this project useful for learning C programming, consider giving the repository a ⭐ on GitHub!

---

### 📜 License

This project is open source and available for learning and educational purposes.
