# include <iostream>


# Functional Programming (FP):
# //
# // FP focuses on using functions as first-class citizens, immutability, and pure functions.
# // It avoids shared mutable state and often relies on recursion.

# // Object-Oriented Programming (OOP):
# //
# // OOP structures code around objects, encapsulating data and behavior.
# // It supports features like inheritance, polymorphism, and mutable state.

# // Reasons to Prefer OOP:
# // OOP is suitable for modeling real-world entities and relationships.
# // It promotes code reuse through inheritance and polymorphism.
# // OOP aligns with team collaboration and is often used for large-scale applications.

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def calculateArea(self):
        return 3.14 * self.radius * self.radius

if __name__ == "__main__":
    myCircle = Circle(5.0)

    # Call the method to calculate the area
    area = myCircle.calculateArea()

    print("The area of the circle is:", area)
