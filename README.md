
# Struct vs Class in C++
Examples and explanations of struct VS class in C++ with examples.


This repository provides examples and explanations of the differences between struct and class in C++. 
It aims to help beginners understand the concepts and choose the appropriate one for their programming needs.

## Table of Contents

- [Struct vs Class](#struct-vs-class)
- [Car Class](#car-class)
- [Vehicle Struct](#vehicle-struct)
- [Usage](#usage)
- [Resources](#resources)

## Struct vs Class

In C++, both struct and class are used to define custom data types, but they have some differences in terms of default member accessibility and intended use.

- Struct:
  - Default member accessibility: Public
  - Typically used to group related data together as a single unit.
  - Provides a convenient way to store and pass around data.
  - Allows direct access to its members without restrictions.

- Class:
  - Default member accessibility: Private
  - Demonstrates encapsulation by grouping data and methods together.
  - Provides a consistent interface to interact with the class.
  - Allows controlled access to its private members through public member functions.
  - Enhances data integrity and prevents unauthorized modifications.

## Car Class

The Car class is an example of using a class to demonstrate encapsulation. 
It has private data members such as brand, model, and year, which can only be accessed or modified through public member functions. 
Getter and setter methods provide controlled access to retrieve and modify the private data members, ensuring data integrity and providing a consistent interface.

## Vehicle Struct

The Vehicle struct is an example of using a struct to group related data together. 
It includes public data members such as type, color, and wheels. 
Structs are typically used when you need a simple way to store and pass around data as a single unit. 
In the case of the Vehicle struct, it allows you to store and access information about the type of vehicle, its color, and the number of wheels it has.

## Usage

To use the examples in this repository, you can follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/AMAN-ARABZADEH/struct_vs_class_Cpp
This will compile the code and execute the resulting executable.

2. Observe the output to see the differences in action between struct and class.
## Resources

- [Wikipedia - Encapsulation](https://en.wikipedia.org/wiki/Encapsulation_(computer_programming))
- [GeeksforGeeks - Struct in C++](https://www.geeksforgeeks.org/structures-in-cpp/)
- [C++ Primer by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo](https://www.amazon.com/C-Primer-Stanley-B-Lippman/dp/0321714113)
- [The C++ Programming Language by Bjarne Stroustrup](https://www.amazon.com/C-Programming-Language-4th/dp/0321563840)

Feel free to explore the examples, experiment with the code, and deepen your understanding of the differences between struct and class in C++.

