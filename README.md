# Bit Manipulation Toolkit 🔧⚡

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](https://github.com/Fares-H2811/Bit-Manipulation)

A comprehensive C program demonstrating fundamental bit-level operations through an interactive menu-driven interface. This project marks the beginning of an exciting journey into low-level programming as part of the **Z Fast Racing** team's learning initiative.
## 🚀 Overview
This toolkit provides essential bit manipulation functions that are crucial for understanding computer systems, embedded programming, and performance optimization. Perfect for students, developers, and anyone looking to master bit-level operations in C programming.

## ⚡ Key Features
### Core Bit Operations
- **🔧 Set Bit** - Turn ON a specific bit at any position
- **❌ Clear Bit** - Turn OFF a specific bit at any position  
- **👁️ Read Bit** - Check the state of a bit at any position
- **🔄 Toggle Bit** - Flip a bit between 0 and 1
- **✅ Position Validation** - Safe bit position checking (0-31 for 32-bit integers)

### Number Analysis
- **➕➖ Sign Detection** - Determine if a number is positive, negative, or zero
- **🔢 Parity Check** - Identify even or odd numbers using bitwise operations

### User Experience
- **📋 Interactive Menu** - User-friendly console interface
- **🔄 Dynamic Input** - Reassign numbers and positions during runtime
- **⚠️ Input Validation** - Robust error handling and range checking
- **🎯 Educational Focus** - Clear output explanations for learning

## 🛠️ Technical Implementation
### Bit Operations Explained
```c
// Set bit at position (OR with shifted 1)
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Clear bit at position (AND with inverted shifted 1)
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Read bit at position (Shift right and mask with 1)
int readBit(int num, int pos) {
    return (num >> pos) & 1;
}

// Toggle bit at position (XOR with shifted 1)
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}
```

### Smart Detection Algorithms
- **Even/Odd**: Uses `num & 1` - fastest method to check least significant bit
- **Sign Detection**: Checks the most significant bit using `num & (1 << 31)`

## 🚀 Getting Started
### Prerequisites
- GCC compiler (or any C compiler)
- Terminal/Command Prompt
- Basic understanding of binary representation

### Quick Start
1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/bit-manipulation.git
   cd bit-manipulation
   ```

2. **Compile the program**:
   ```bash
   gcc -o bitops main.c
   ```

3. **Run the program**:
   ```bash
   ./bitops
   ```

### Example Usage
```
Enter an integer num: 42

Enter a bit position (0 to 31): 3

Menu - Choose an operation:
1. Set a Bit
2. Clear a Bit
3. Read a Bit
4. Toggle a Bit
5. Check even or odd
6. Check positive or negative
7. Reassign integer and position
8. Exit

Enter your choice: 1
Result after setting bit 3: 50
```

## 📊 Visual Example
Let's manipulate the number **42** (binary: `00101010`):

| Operation | Before | After | Result | Binary After |
|-----------|--------|-------|--------|--------------|
| Set bit 0 | 42 | 43 | `42 \| (1<<0)` | `00101011` |
| Clear bit 1 | 42 | 40 | `42 & ~(1<<1)` | `00101000` |
| Toggle bit 2 | 42 | 46 | `42 ^ (1<<2)` | `00101110` |
| Read bit 3 | 42 | 1 | `(42>>3) & 1` | - |

## 🏗️ Project Structure
```
bit-manipulation/
├── main.c              # Main source code
├── README.md           # Project documentation
├── LICENSE             # MIT License
└── examples/           # Usage examples and test cases
```

## 🎯 Learning Objectives
This project helps you understand:
- **Binary Number System** - How computers represent data
- **Bitwise Operators** - AND, OR, XOR, NOT, Left/Right Shift
- **Memory Efficiency** - Space-optimal programming techniques
- **Low-Level Programming** - Foundation for embedded systems
- **Performance Optimization** - Fast arithmetic operations

## 🔧 Advanced Usage
### Batch Operations Example
```c
int number = 15;        // Binary: 00001111
int result;

result = setBit(number, 4);    // Set bit 4: 00011111 (31)
result = clearBit(result, 0);  // Clear bit 0: 00011110 (30)
result = toggleBit(result, 7); // Toggle bit 7: 10011110 (158)
```

### Practical Applications
- **Flags and Permissions** - File system permissions, user privileges
- **Embedded Programming** - Hardware register manipulation
- **Cryptography** - Encryption algorithms and hash functions
- **Graphics Programming** - Pixel manipulation, color channels
- **Network Programming** - Protocol headers, packet flags

## 🏁 Project Background
This bit manipulation toolkit was developed as a **practical exercise** during the **first week** of my **NTI (National Telecommunication Institute) internship** in microcontroller-based design, combined with knowledge gained from my journey with the **Z Fast Racing** team. The project demonstrates the application of fundamental C programming concepts in bit-level operations essential for embedded systems development.

## 🤝 Contributing
We welcome contributions from the community! Here's how you can help:

1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/enhancement`)
3. **Commit your changes** (`git commit -am 'Add new feature'`)
4. **Push to the branch** (`git push origin feature/enhancement`)
5. **Create a Pull Request**

### Ideas for Contributions
- Add more bit manipulation algorithms
- Implement batch operations
- Create visual binary representation
- Add unit tests
- Improve error handling
- Add performance benchmarks

## 📚 Resources
- [Bit Manipulation Basics](https://en.wikipedia.org/wiki/Bit_manipulation)
- [C Bitwise Operators](https://www.programiz.com/c-programming/bitwise-operators)
- [Binary Number System](https://www.mathsisfun.com/binary-number-system.html)
- [Embedded C Programming](https://www.embedded.com/)

## 📝 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

**🌟 Project Significance**
This bit manipulation toolkit serves as a bridge between collaborative team learning and professional embedded systems development, demonstrating the practical application of C programming fundamentals essential for microcontroller programming and racing technology innovations.

---

⭐ **Star this repository if you find it helpful for learning bit manipulation!**
*"Great things in business are never done by one person. They're done by a team of people."* - Steve Jobs
