#include <iostream>
#include <string>

// ============================================================
//          C / C++ FUNCTIONS AND OOP
// ============================================================
//
// PART 1:
//     FUNCTIONS
//
// PART 2:
//     FUNCTION PARAMETERS
//
// PART 3:
//     RETURN VALUES
//
// PART 4:
//     FUNCTION OVERLOADING (C++)
//
// PART 5:
//     RECURSION
//
// PART 6:
//     CLASSES AND OBJECTS (C++)
//
// PART 7:
//     CONSTRUCTORS
//
// PART 8:
//     ENCAPSULATION
//
// PART 9:
//     INHERITANCE
//
// PART 10:
//     POLYMORPHISM
//
// ============================================================



// ============================================================
// PART 1: FUNCTIONS
// ============================================================

/*
    A function is a reusable block of code.

    Instead of writing:

        std::cout << "Hello\n";
        std::cout << "Hello\n";
        std::cout << "Hello\n";

    We can create:

        void sayHello()

    and call it whenever we need it.


    General syntax:

        return_type function_name(parameters)
        {
            // code
        }
*/


void sayHello()
{
    std::cout << "Hello from the function!\n";
}



// ============================================================
// PART 2: FUNCTION WITH PARAMETERS
// ============================================================

/*
    Parameters allow us to send data INTO a function.

    Example:

        void greet(std::string name)

    "name" is a parameter.
*/


void greet(std::string name)
{
    std::cout << "Hello, "
        << name
        << "!\n";
}



// ============================================================
// PART 3: FUNCTION WITH RETURN VALUE
// ============================================================

/*
    A function can return a value.

    Example:

        int add(int a, int b)

    means:

        Return type -> int
        Function    -> add
        Parameters  -> a, b
*/


int add(int a, int b)
{
    return a + b;
}


int multiply(int a, int b)
{
    return a * b;
}



// ============================================================
// PART 4: FUNCTION FOR EMBEDDED EXAMPLE
// ============================================================

/*
    In embedded programming, functions are often used
    to separate hardware-related operations.

    Example:

        readSensor()
        turnLedOn()
        turnLedOff()
        openDoor()
        closeDoor()
*/


int readTemperature()
{
    // Simulated sensor value
    return 28;
}


void turnFanOn()
{
    std::cout << "Fan -> ON\n";
}


void turnFanOff()
{
    std::cout << "Fan -> OFF\n";
}


void openDoor()
{
    std::cout << "Door -> OPEN\n";
}


void closeDoor()
{
    std::cout << "Door -> CLOSED\n";
}



// ============================================================
// PART 5: FUNCTION OVERLOADING (C++)
// ============================================================

/*
    C++ allows multiple functions to have the same name
    as long as their parameters are different.

    This is called FUNCTION OVERLOADING.

        add(int, int)
        add(double, double)

    Same function name.
    Different parameter types.
*/


int calculate(int a, int b)
{
    return a + b;
}


double calculate(double a, double b)
{
    return a + b;
}



// ============================================================
// PART 6: RECURSION
// ============================================================

/*
    A recursive function calls itself.

    Example:

        factorial(5)

        5 Å~ 4 Å~ 3 Å~ 2 Å~ 1
        = 120
*/


int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}



// ============================================================
// PART 7: CLASS
// ============================================================

/*
    Now we move into OOP.

    A CLASS is a blueprint.

    An OBJECT is an actual instance created
    from that blueprint.


                CLASS
                  |
          +-------+-------+
          |               |
       DATA            FUNCTIONS
          |               |
       name            start()
       speed           stop()
       power           accelerate()
*/


class Car
{
public:

    // Data / attributes
    std::string brand;
    int speed;

    // Function / method
    void start()
    {
        std::cout << brand
            << " started.\n";
    }

    void stop()
    {
        std::cout << brand
            << " stopped.\n";
    }

    void accelerate(int amount)
    {
        speed += amount;

        std::cout << brand
            << " speed = "
            << speed
            << " km/h\n";
    }
};



// ============================================================
// PART 8: CONSTRUCTOR
// ============================================================

/*
    A constructor is automatically called when
    an object is created.

    Constructor name must be the same as the class name.

        Car2()
*/


class Car2
{
private:

    std::string brand;
    int speed;

public:

    // Constructor
    Car2(std::string carBrand, int initialSpeed)
    {
        brand = carBrand;
        speed = initialSpeed;
    }

    void showInfo()
    {
        std::cout << "Brand : "
            << brand
            << "\n";

        std::cout << "Speed : "
            << speed
            << " km/h\n";
    }
};



// ============================================================
// PART 9: ENCAPSULATION
// ============================================================

/*
    Encapsulation means keeping data protected
    and controlling access through functions.

    We use:

        private
        public

    Example:

        private:
            temperature

        public:
            setTemperature()
            getTemperature()


    The outside code cannot directly modify
    the private variable.
*/


class TemperatureSensor
{
private:

    double temperature;

public:

    void setTemperature(double value)
    {
        temperature = value;
    }

    double getTemperature()
    {
        return temperature;
    }
};



// ============================================================
// PART 10: INHERITANCE
// ============================================================

/*
    Inheritance allows one class to reuse
    another class.

                    Vehicle
                       |
              +--------+--------+
              |                 |
             Car             Motorcycle


    Car "is a" Vehicle.
*/


class Vehicle
{
public:

    void startEngine()
    {
        std::cout << "Engine started.\n";
    }

    void stopEngine()
    {
        std::cout << "Engine stopped.\n";
    }
};


class Motorcycle : public Vehicle
{
public:

    void ride()
    {
        std::cout << "Motorcycle is moving.\n";
    }
};



// ============================================================
// PART 11: POLYMORPHISM
// ============================================================

/*
    Polymorphism means:

        "One interface, different behavior."

    A base-class function can behave differently
    depending on which object is being used.
*/


class Animal
{
public:

    virtual void sound()
    {
        std::cout << "Animal makes a sound.\n";
    }

    virtual ~Animal() = default;
};


class Dog : public Animal
{
public:

    void sound() override
    {
        std::cout << "Dog -> Woof!\n";
    }
};


class Cat : public Animal
{
public:

    void sound() override
    {
        std::cout << "Cat -> Meow!\n";
    }
};



// ============================================================
// MAIN
// ============================================================

int main()
{
    // ============================================================
    // 1. BASIC FUNCTION
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "1. BASIC FUNCTION\n";
    std::cout << "============================================================\n\n";

    sayHello();

    std::cout << "\n";


    // ============================================================
    // 2. FUNCTION WITH PARAMETER
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "2. FUNCTION WITH PARAMETER\n";
    std::cout << "============================================================\n\n";

    greet("Arduino");
    greet("Embedded Developer");

    std::cout << "\n";


    // ============================================================
    // 3. FUNCTION WITH RETURN VALUE
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "3. FUNCTION WITH RETURN VALUE\n";
    std::cout << "============================================================\n\n";

    int result = add(10, 20);

    std::cout << "10 + 20 = "
        << result
        << "\n";

    std::cout << "10 * 20 = "
        << multiply(10, 20)
        << "\n";

    std::cout << "\n";


    // ============================================================
    // 4. EMBEDDED-STYLE FUNCTIONS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "4. EMBEDDED-STYLE FUNCTIONS\n";
    std::cout << "============================================================\n\n";

    int temperature = readTemperature();

    std::cout << "Temperature = "
        << temperature
        << " C\n";

    if (temperature > 30)
    {
        turnFanOn();
    }
    else
    {
        turnFanOff();
    }

    openDoor();
    closeDoor();

    std::cout << "\n";


    // ============================================================
    // 5. FUNCTION OVERLOADING
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "5. FUNCTION OVERLOADING\n";
    std::cout << "============================================================\n\n";

    std::cout << "Integer calculation: "
        << calculate(10, 20)
        << "\n";

    std::cout << "Double calculation: "
        << calculate(10.5, 20.5)
        << "\n";

    std::cout << "\n";


    // ============================================================
    // 6. RECURSION
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "6. RECURSION\n";
    std::cout << "============================================================\n\n";

    int number = 5;

    std::cout << "Factorial of "
        << number
        << " = "
        << factorial(number)
        << "\n";

    std::cout << "\n";


    // ============================================================
    // 7. CLASS AND OBJECT
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "7. CLASS AND OBJECT\n";
    std::cout << "============================================================\n\n";

    /*
        Create an object from the Car class.

        car1 is an OBJECT.
    */

    Car car1;

    car1.brand = "Toyota";
    car1.speed = 0;

    car1.start();

    car1.accelerate(30);
    car1.accelerate(20);

    car1.stop();

    std::cout << "\n";


    // ============================================================
    // 8. MULTIPLE OBJECTS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "8. MULTIPLE OBJECTS\n";
    std::cout << "============================================================\n\n";

    Car car2;
    Car car3;

    car2.brand = "Honda";
    car2.speed = 0;

    car3.brand = "Nissan";
    car3.speed = 0;

    car2.start();
    car3.start();

    car2.accelerate(50);
    car3.accelerate(70);

    std::cout << "\n";


    // ============================================================
    // 9. CONSTRUCTOR
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "9. CONSTRUCTOR\n";
    std::cout << "============================================================\n\n";

    Car2 car4("Toyota", 50);

    car4.showInfo();

    std::cout << "\n";


    // ============================================================
    // 10. ENCAPSULATION
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "10. ENCAPSULATION\n";
    std::cout << "============================================================\n\n";

    TemperatureSensor sensor;

    sensor.setTemperature(25.5);

    std::cout << "Temperature = "
        << sensor.getTemperature()
        << " C\n";

    /*
        This would NOT be allowed:

            sensor.temperature = 100;

        because temperature is private.
    */

    std::cout << "\n";


    // ============================================================
    // 11. INHERITANCE
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "11. INHERITANCE\n";
    std::cout << "============================================================\n\n";

    Motorcycle motorcycle;

    /*
        startEngine() belongs to Vehicle,
        but Motorcycle inherits it.
    */

    motorcycle.startEngine();
    motorcycle.ride();
    motorcycle.stopEngine();

    std::cout << "\n";


    // ============================================================
    // 12. POLYMORPHISM
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "12. POLYMORPHISM\n";
    std::cout << "============================================================\n\n";

    Dog dog;
    Cat cat;

    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    animal1->sound();
    animal2->sound();

    /*
        Both pointers are Animal*.

        But:

            animal1 -> Dog -> Woof

            animal2 -> Cat -> Meow

        This is runtime polymorphism.
    */

    std::cout << "\n";


    // ============================================================
    // 13. OOP EMBEDDED EXAMPLE
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "13. OOP EMBEDDED-STYLE EXAMPLE\n";
    std::cout << "============================================================\n\n";


    /*
        Imagine a real embedded system.

        We might have:

            TemperatureSensor
            Motor
            Door
            LCD
            Button
            LED

        Each can be represented by a class.
    */


    class Motor
    {
    private:

        int speed = 0;

    public:

        void setSpeed(int newSpeed)
        {
            if (newSpeed >= 0 && newSpeed <= 100)
            {
                speed = newSpeed;
            }
        }

        void start()
        {
            std::cout << "Motor started at "
                << speed
                << "% speed.\n";
        }

        void stop()
        {
            speed = 0;

            std::cout << "Motor stopped.\n";
        }

        int getSpeed()
        {
            return speed;
        }
    };


    Motor motor;

    motor.setSpeed(75);

    std::cout << "Motor speed = "
        << motor.getSpeed()
        << "%\n";

    motor.start();

    motor.stop();

    std::cout << "\n";


    // ============================================================
    // 14. FUNCTION VS CLASS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "14. FUNCTION VS CLASS\n";
    std::cout << "============================================================\n\n";

    std::cout << "FUNCTION:\n";
    std::cout << "    Performs a specific operation.\n\n";

    std::cout << "CLASS:\n";
    std::cout << "    Groups data + functions together.\n\n";

    std::cout << "OBJECT:\n";
    std::cout << "    An actual instance of a class.\n\n";


    // ============================================================
    // FINAL SUMMARY
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                    FINAL SUMMARY\n";
    std::cout << "============================================================\n\n";

    std::cout << "FUNCTIONS\n";
    std::cout << "    |\n";
    std::cout << "    +-- Reusable block of code\n";
    std::cout << "    +-- Can receive parameters\n";
    std::cout << "    +-- Can return values\n";
    std::cout << "    +-- Reduces duplicate code\n\n";
    std::cout << "          INPUT\n";
    std::cout << "            |\n";
    std::cout << "            v\n";
    std::cout << "    +---------------+\n";
    std::cout << "    |   FUNCTION    |\n";
    std::cout << "    |               |\n";
    std::cout << "    |   processing  |\n";
    std::cout << "    +-------+-------+\n";
    std::cout << "            |\n";
    std::cout << "            v\n";
    std::cout << "          OUTPUT\n";
    std::cout << "\n\n";

    std::cout << "OOP\n";
    std::cout << "    |\n";
    std::cout << "    +-- Class\n";
    std::cout << "    +-- Object\n";
    std::cout << "    +-- Constructor\n";
    std::cout << "    +-- Encapsulation\n";
    std::cout << "    +-- Inheritance\n";
    std::cout << "    +-- Polymorphism\n\n";
    std::cout << "OOP\n";
    std::cout << "|\n";
    std::cout << "+-- Encapsulation\n";
    std::cout << "|      |\n";
    std::cout << "|      +-- Protect data\n";
    std::cout << "|\n";
    std::cout << "+-- Inheritance\n";
    std::cout << "|      |\n";
    std::cout << "|      +-- Reuse another class\n";
    std::cout << "|\n";
    std::cout << "+-- Polymorphism\n";
    std::cout << "|      |\n";
    std::cout << "|      +-- Same interface, different behavior\n";
    std::cout << "|\n";
    std::cout << "+-- Abstraction\n";
    std::cout << "       |\n";
    std::cout << "       +-- Hide unnecessary implementation details\n";

    std::cout << "============================================================\n";

    return 0;
}
