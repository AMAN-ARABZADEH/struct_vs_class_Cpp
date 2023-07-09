#include <iostream>
#include <string>

// struct VS class
/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-09
 *  Examples and explanations of struct VS class in C++ for Beginners
 */
// Explanation and Differences:

// Class Car:
// The Car class demonstrates the concept of encapsulation. It has private data members (brand, model, year) that can only be accessed or modified through the public member functions (getBrand(), getModel(), getYear(), setBrand(), setModel(), setYear()).
// Encapsulation allows controlling access to the private data members, ensuring data integrity and providing a consistent interface to interact with the class.

// Struct Vehicle:
// The Vehicle struct does not exhibit encapsulation. Its data members (type, color, wheels) are public and can be directly accessed and modified without any restrictions.
// Structs are typically used to group related data together, providing a convenient way to store and pass around data as a single unit.

// Usage inside the main function:

// Using the Car class:
// An instance of Car is created using the constructor: Car myCar("Toyota", "Camry", 2022).
// Getter methods (getBrand(), getModel(), getYear()) are used to retrieve the values of private data members.
// The setter method (setYear()) is used to modify the private data member year.

// Using the Vehicle struct:
// An instance of Vehicle is created: Vehicle myVehicle.
// Public data members (type, color, wheels) are directly assigned values: myVehicle.type = "Motorcycle", myVehicle.color = "Red", myVehicle.wheels = 2.
// The values of public data members are directly accessed and printed using std::cout statements.

// Resources:

// Wikipedia - Encapsulation: https://en.wikipedia.org/wiki/Encapsulation_(computer_programming)
// GeeksforGeeks - Struct in C++: https://www.geeksforgeeks.org/struct-in-cpp/
// C++ Primer by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo (Book)
// The C++ Programming Language by Bjarne Stroustrup (Book)















// Class Car:
// - The Car class demonstrates the concept of encapsulation by utilizing private data members and public member functions.
// - Encapsulation refers to the bundling of data (private members) and methods (public member functions) within a single entity, the class.
// - The private data members of the Car class, such as brand, model, and year, are accessible only within the class itself.
// - By making the data members private, direct access from outside the class is restricted, ensuring data integrity and preventing unauthorized modifications.
// - The public member functions of the Car class, such as getBrand(), getModel(), getYear(), setBrand(), setModel(), and setYear(), provide a consistent interface to interact with the class.
// - These member functions allow controlled access to the private data members, enabling users to retrieve and modify the values in a controlled manner.
// - The member functions serve as an abstraction layer, encapsulating the implementation details of the class and hiding the complexity of manipulating its internal data.
// - Using the public member functions ensures that the data is accessed and modified in a controlled and valid manner, enhancing data integrity and preventing potential inconsistencies.

class Car {
private:
    std::string brand;  // Private data member
    std::string model;  // Private data member
    int year;           // Private data member

public:
    // Constructor
    Car(const std::string& brand, const std::string& model, int year)
            : brand(brand), model(model), year(year) {}

    // Getter methods
    std::string getBrand() const {
        return brand;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Setter methods
    void setBrand(const std::string& newBrand) {
        brand = newBrand;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }
};

// Struct Vehicle:
// - Groups related data together.
// - Provides a convenient way to store and pass around data as a single unit.
// - In this case, the Vehicle struct includes data members such as type, color, and wheels, which are all related to describing a vehicle.
// - By grouping these data members together in the Vehicle struct, it becomes easier to manage and manipulate the data as a cohesive entity.
// - The Vehicle struct allows you to store information about the type of vehicle, its color, and the number of wheels it has in one place.
// - This makes it simpler to pass the entire Vehicle object to functions or methods that need access to all of its data.
// - Overall, the Vehicle struct provides a compact and efficient way to organize and work with related data elements in a single entity.

struct Vehicle {
    std::string type;   // Public data member
    std::string color;  // Public data member
    int wheels;         // Public data member
};


int main() {
    // Using the Car class
    Car myCar("Toyota", "Camry", 2022);  // Creating an instance of Car with brand, model, and year
    std::cout << "Car brand: " << myCar.getBrand() << std::endl;  // Accessing the brand using the getter method
    std::cout << "Car model: " << myCar.getModel() << std::endl;  // Accessing the model using the getter method
    std::cout << "Car year: " << myCar.getYear() << std::endl;    // Accessing the year using the getter method
    myCar.setYear(2023);  // Modifying private data member through setter method
    std::cout << "Updated car year: " << myCar.getYear() << std::endl;  // Accessing the updated year using the getter method

    std::cout << std::endl;

    // Using the Vehicle struct
    Vehicle myVehicle;    // Creating an instance of Vehicle
    myVehicle.type = "Motorcycle";  // Directly assigning value to public data member
    myVehicle.color = "Red";        // Directly assigning value to public data member
    myVehicle.wheels = 2;           // Directly assigning value to public data member

    std::cout << "Vehicle type: " << myVehicle.type << std::endl;   // Accessing the type directly
    std::cout << "Vehicle color: " << myVehicle.color << std::endl; // Accessing the color directly
    std::cout << "Vehicle wheels: " << myVehicle.wheels << std::endl; // Accessing the wheels directly

    return 0;
}
