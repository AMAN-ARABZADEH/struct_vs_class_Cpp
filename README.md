# Struct vs Class in C++
Examples and explanations of struct VS class in C++ with examples.

This repository provides examples and explanations of the differences between struct and class in C++. 
It aims to help beginners understand the concepts and choose the appropriate one for their programming needs.

# Table of Contents
- [Struct vs Class](#struct-vs-class)
- [Car Class](#car-class)
- [Vehicle Struct](#vehicle-struct)
- [Usage](#usage)
- [Resources](#resources)

# Struct vs Class

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

# Car Class

The Car class is an example of using a class to demonstrate encapsulation. 
It has private data members such as brand, model, and year, which can only be accessed or modified through public member functions. 
Getter and setter methods provide controlled access to retrieve and modify the private data members, ensuring data integrity and providing a consistent interface.

## Class Car:
- The Car class demonstrates the concept of encapsulation by utilizing private data members and public member functions.
- Encapsulation refers to the bundling of data (private members) and methods (public member functions) within a single entity, the class.
- The private data members of the Car class, such as brand, model, and year, are accessible only within the class itself.
- By making the data members private, direct access from outside the class is restricted, ensuring data integrity and preventing unauthorized modifications.
  - The public member functions of the Car class, such as getBrand(), getModel(), getYear(), setBrand(), setModel(), and setYear(), provide a consistent interface to interact with the class.
- These member functions allow controlled access to the private data members, enabling users to retrieve and modify the values in a controlled manner.
- The member functions serve as an abstraction layer, encapsulating the implementation details of the class and hiding the complexity of manipulating its internal data.
- Using the public member functions ensures that the data is accessed and modified in a controlled and valid manner, enhancing data integrity and preventing potential inconsistencies.

# Vehicle Struct

The Vehicle struct is an example of using a struct to group related data together. 
It includes public data members such as type, color, and wheels. 
Structs are typically used when you need a simple way to store and pass around data as a single unit. 
In the case of the Vehicle struct, it allows you to store and access information about the type of vehicle, its color, and the number of wheels it has.

## Struct Vehicle:
- Groups related data together.
- Provides a convenient way to store and pass around data as a single unit.
- In this case, the Vehicle struct includes data members such as type, color, and wheels, which are all related to describing a vehicle.
- By grouping these data members together in the Vehicle struct, it becomes easier to manage and manipulate the data as a cohesive entity.
- The Vehicle struct allows you to store information about the type of vehicle, its color, and the number of wheels it has in one place.
- This makes it simpler to pass the entire Vehicle object to functions or methods that need access to all of its data.
- Overall, the Vehicle struct provides a compact and efficient way to organize and work with related data elements in a single entity.


# Usage

To use the examples in this repository, you can follow these steps:

1. Clone the repository:

## Resources

- [Wikipedia - Encapsulation](https://en.wikipedia.org/wiki/Encapsulation_(computer_programming))
- [GeeksforGeeks - Struct in C++](https://www.geeksforgeeks.org/structures-in-cpp/)
- [C++ Primer by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo](https://www.amazon.com/C-Primer-Stanley-B-Lippman/dp/0321714113)
- [The C++ Programming Language by Bjarne Stroustrup](https://www.amazon.com/C-Programming-Language-4th/dp/0321563840)

Feel free to explore the examples, experiment with the code, and deepen your understanding of the differences between struct and class in C++.

