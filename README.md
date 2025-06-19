# C++ Dynamic Array Template Class

A simple, lightweight, and educational implementation of a dynamic array in modern C++. This templated class mimics basic functionality similar to `std::vector`, allowing insertion, deletion, resizing, reversing, and more.

## 📦 Features

- Insert elements at any position
- Delete elements by index or value
- Resize the array dynamically
- Reverse the array
- Clear all elements
- Search for an item
- Print the contents
- Check size and emptiness

## 📄 Class Definition

```cpp
template <class T>
class clsDynamicArray
````

## 🧪 Example Usage

```cpp
#include "clsDynamicArray.h"

int main() {
    clsDynamicArray<int> numbers;

    numbers.InsertAtEnd(10);
    numbers.InsertAtEnd(20);
    numbers.InsertAtEnd(30);

    numbers.InsertAtBeginning(5); // Insert at index 0
    numbers.InsertAfter(1, 15);   // Insert 15 after index 1

    numbers.DeleteItem(20);       // Delete first occurrence of 20

    numbers.PrintList();          // Output: 5 10 15 30
}
```

## 🛠️ Available Methods

| Method                       | Description                      |
| ---------------------------- | -------------------------------- |
| `InsertAt(index, value)`     | Insert value at given index      |
| `InsertAtBeginning(value)`   | Insert value at the beginning    |
| `InsertAtEnd(value)`         | Insert value at the end          |
| `InsertBefore(index, value)` | Insert before the given index    |
| `InsertAfter(index, value)`  | Insert after the given index     |
| `DeleteItemAt(index)`        | Delete element at index          |
| `DeleteFirstItem()`          | Delete first item                |
| `DeleteLastItem()`           | Delete last item                 |
| `DeleteItem(value)`          | Delete first occurrence of value |
| `Resize(newSize)`            | Resize array to new size         |
| `Reverse()`                  | Reverse the order of the array   |
| `Clear()`                    | Clear all elements               |
| `SetItem(index, value)`      | Set element at index             |
| `GetItem(index)`             | Get element at index             |
| `Find(value)`                | Return index of value, or -1     |
| `Size()`                     | Return current size              |
| `IsEmpty()`                  | Return whether array is empty    |
| `PrintList()`                | Print all elements in array      |

## 🧹 Memory Management

* Dynamic memory is managed using `new` and `delete[]`.
* `~clsDynamicArray()` handles deallocation.
* `_TempArray` is internally used for safe transition during insert/delete operations.

## 📚 Use Case

This class is great for:

* Learning how dynamic arrays work under the hood
* Building a basic foundation before moving to STL containers like `std::vector`
* Academic or teaching purposes

## 📋 License

This project is licensed under the [MIT License](LICENSE.txt).

