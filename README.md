# 📌 C++ Keywords Table

| alignas   | decltype       | namespace       | struct        |
|-----------|---------------|-----------------|---------------|
| alignof   | default        | new             | switch        |
| and       | delete        | noexcept        | template      |
| and_eq    | do            | not             | this          |
| asm       | double        | not_eq          | thread_local  |
| auto      | dynamic_cast  | nullptr         | throw         |
| bitand    | else          | operator        | true          |
| bitor     | enum          | or              | try           |
| bool      | explicit      | or_eq           | typedef       |
| break     | export        | private         | typeid        |
| case      | extern        | protected       | typename      |
| catch     | false         | public          | union         |
| char      | float         | register        | unsigned      |
| char16_t  | for           | reinterpret_cast| using         |
| char32_t  | friend        | return          | virtual       |
| class     | goto         | short           | void          |
| compl     | if           | signed          | volatile      |
| const     | inline       | sizeof          | wchar_t       |
| constexpr | int          | static          | while         |
| const_cast| long         | static_assert   | xor           |
| continue  | mutable      | static_cast     | xor_eq        |
-
---

# 📌 C++ Fundamental Data Types

The table below shows the fundamental data types, their meaning, and their sizes (in bytes):

| Data Type  | Meaning              | Size (in Bytes) |
|------------|----------------------|-----------------|
| `int`      | Integer              | 2 or 4          |
| `float`    | Floating-point       | 4               |
| `double`   | Double Floating-point| 8               |
| `char`     | Character            | 1               |
| `wchar_t`  | Wide Character       | 2               |
| `bool`     | Boolean              | 1               |
| `void`     | Empty                | 0               |

---

# 📌 C++ Modified Data Types

The table below lists modified data types, their sizes, and their meanings:

| Data Type              | Size (in Bytes)  | Meaning                                           |
|------------------------|-----------------|---------------------------------------------------|
| `signed int`          | 4               | Used for integers (equivalent to `int`)         |
| `unsigned int`        | 4               | Can only store positive integers                |
| `short`               | 2               | Used for small integers (-32,768 to 32,767)     |
| `unsigned short`      | 2               | Used for small positive integers (0 to 65,535)  |
| `long`               | At least 4       | Used for large integers (`long int` equivalent) |
| `unsigned long`      | 4 or 8           | Used for large positive integers (`unsigned long int` equivalent) |
| `long long`          | 8               | Used for very large integers (`long long int` equivalent) |
| `unsigned long long` | 8               | Used for very large positive integers (`unsigned long long int` equivalent) |
| `long double`        | 8, 12, or 16     | Used for large floating-point numbers           |
| `signed char`        | 1               | Used for characters (-127 to 127)               |
| `unsigned char`      | 1               | Used for characters (0 to 255)                  |

---
