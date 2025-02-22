You can find the **length** of the `char name[20]` string using the `strlen()` function from the `<cstring>` library.  

### **Modified Code to Find Length of `name`**
```cpp
#include <iostream>
#include <cstring>  // Required for strlen()

using namespace std;

int main() {
    char name[20];

    cout << "Enter your name: ";
    cin >> name;  // Takes input (stops at space)

    cout << "Your name is: " << name << endl;

    // Find and print length using strlen()
    cout << "Length of your name: " << strlen(name) << endl;

    return 0;
}
```

---

### **📌 Explanation**
1. **`strlen(name)`**  
   - It calculates the **length of the string** (excluding the null terminator `\0`).
   - Works only for **null-terminated character arrays**.

---

### **💡 Alternative Methods to Find Length**
#### 1️⃣ **Using a Loop (Without `strlen()`)**
```cpp
int length = 0;
while (name[length] != '\0') {
    length++;
}
cout << "Length of your name: " << length << endl;
```
✅ Works without `cstring`, but **manual counting**.

---

#### 2️⃣ **Using `std::string` for Better Flexibility**
```cpp
string name;
cout << "Enter your name: ";
cin >> name;  // Works better for a single word

cout << "Length of your name: " << name.length() << endl;
```
✅ **Best for Modern C++**  
🚀 Use `std::getline(cin, name);` instead of `cin >> name;` to accept **full names with spaces**.

---

### **💡 Key Takeaways**
- **Use `strlen(name)`** for `char[]` strings.
- **Use `.length()`** for `std::string` (recommended).
- **Use a loop** if you want a manual approach.

🚀 **If working in C++, prefer `std::string` over `char[]`!**