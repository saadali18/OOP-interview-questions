"""
Association represents a bi-directional relationship between two classes, where one class
refers to another class. It can be a one-to-one, one-to-many, or many-to-many relationship.

- In Association, if one class is deleted, the other class can remain intact.

Composition is a stronger form of association where one class is composed of another class.
It implies a whole-part relationship, and the lifetime of the part is dependent on the whole.

- In Composition, if the whole is deleted, then the parts are also deleted.
"""


# Association
class Car:
    def __init__(self, model):
        self.model = model


class Person:
    def __init__(self, name):
        self.name = name
        self.car = None  # Association


# Composition
class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower


class Vehicle:
    def __init__(self,type, model):
        self.type = type
        self.model = model
        self.engine = Engine(200)  # Composition

# Association
class Professor:
    def __init__(self, name):
        self.name = name


class University:
    def __init__(self, name):
        self.name = name
        self.professors = []  # Association


# Composition
class Course:
    def __init__(self, name):
        self.name = name


class Department:
    def __init__(self, name):
        self.name = name
        self.courses = [Course("Calculus 101"), Course("Applied Physics 102"), Course("ITOC 103")]  # Composition


if __name__ == "__main__":
    # Example #1
    # Association
    person = Person("Ali")
    car = Car("Honda")
    person.car = car
    print("\nExample #1: Association")
    print(f"Person: {person.name} has a car with model: {person.car.model}")

    # Composition
    print("\nExample #1: Composition")
    car = Vehicle("Car", "Honda")
    print(f"{car.type} model: {car.model} has engine horsepower: {car.engine.horsepower}")

    # Example #2
    # Association
    print("\nExample #2: Association")
    smith = Professor("Dr. Smith")
    johnson = Professor("Dr. Johnson")

    university = University("Tech University")
    university.professors.append(smith)
    university.professors.append(johnson)

    print(f"University: {university.name} has the following professors:")
    for professor in university.professors:
        print(f"- {professor.name}")

    # Composition
    print("\nExample #2: Composition")
    science_department = Department("Science")
    print(f"Department: {science_department.name} has the following courses:")
    for course in science_department.courses:
        print(f"- {course.name}")
    

