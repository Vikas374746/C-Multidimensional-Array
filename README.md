# C-Multidimensional-Array

## **Experiment 8: Multidimensional Arrays in C++**

**Title of the Experiment:**
To study and implement various operations on multidimensional arrays in C++.

---

**Objective / Aim:**
To understand the concept of multidimensional arrays and perform operations such as:

* Reading and displaying elements of a 2D array
* Matrix addition
* Diagonal and anti-diagonal sum
* Matrix multiplication
* Transpose of a matrix

---

**Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows or Linux

---

**Theory:**
A **multidimensional array** is an array of arrays, most commonly a **two-dimensional array** used to store elements in a tabular form (rows and columns).

* Elements are accessed using two indices: `arr[i][j]`.
* Nested loops are used to traverse and manipulate elements.
* Useful in storing matrices and performing operations such as addition, multiplication, transposition, and diagonal processing.

---

## **Programs Covered**

---

### **1. Reading and Displaying a 2D Array**

**Algorithm:**

1. Start
2. Input number of rows and columns
3. Declare a 2D array
4. Loop to input each element using two indices
5. Loop to display elements in matrix form
6. Stop

---

### **2. Matrix Addition**

**Algorithm:**

1. Start
2. Input number of rows and columns for both matrices
3. Input elements for matrix 1 and matrix 2
4. Loop through each position `(i, j)` and add corresponding elements
5. Store the sum in a third matrix
6. Display the result matrix
7. Stop

---

### **3. Diagonal and Anti-Diagonal Sum**

**Algorithm:**

1. Start
2. Input number of rows and columns
3. If rows ≠ columns, display error (only possible for square matrices)
4. Input elements of the matrix
5. Sum main diagonal elements where `i == j`
6. Sum anti-diagonal elements where `i + j == n - 1`
7. Display both sums
8. Stop

---

### **4. Matrix Multiplication**

**Algorithm:**

1. Start
2. Input number of rows and columns for both matrices
3. Check if `columns of matrix 1 == rows of matrix 2`
4. Input both matrices
5. Initialize product matrix to 0
6. Use triple nested loop to compute multiplication:

   ```
   product[i][j] += matrix1[i][k] * matrix2[k][j]
   ```
7. Display result matrix
8. Stop

---

### **5. Transpose of a Matrix**

**Algorithm:**

1. Start
2. Input number of rows and columns
3. Input matrix elements
4. Swap rows and columns: `transpose[j][i] = matrix[i][j]`
5. Display the transposed matrix
6. Stop

---

**Flowchart (Text Description):**
Start → Input matrix dimensions and elements → Perform required operation using nested loops → Store results → Display results → End

---

**Conclusion:**
In this experiment, we successfully implemented operations on multidimensional arrays, including reading and displaying a 2D array, matrix addition, diagonal and anti-diagonal sum, multiplication, and transposition. This enhanced our understanding of handling structured data and performing mathematical computations using C++ arrays.

---
