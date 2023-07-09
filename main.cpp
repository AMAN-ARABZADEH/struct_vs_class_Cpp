#include <iostream>
#include <string>

// struct VS class
/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-09
 *  Examples and explanations of struct VS class in C++ for Beginners
 *
 *  https://github.com/AMAN-ARABZADEH/struct_vs_class_Cpp
 */

// Resources:

// Wikipedia - Encapsulation: https://en.wikipedia.org/wiki/Encapsulation_(computer_programming)
// GeeksforGeeks - Struct in C++: https://www.geeksforgeeks.org/structures-in-cpp/
// C++ Primer by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo (Book)
// The C++ Programming Language by Bjarne Stroustrup (Book)



// Class Car:
// - The Car class demonstrates the concept of encapsulation by utilizing private data members and public member functions.
// - Encapsulation refers to the bundling of data (private members) and methods (public member functions) within a single entity, the class.

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
