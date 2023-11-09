"""
Association represents a bi-directional relationship between two classes, where one class
refers to another class. It can be a one-to-one, one-to-many, or many-to-many relationship.

Composition is a stronger form of association where one class is composed of another class.
It implies a whole-part relationship, and the lifetime of the part is dependent on the whole.
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


if __name__ == "__main__":
    # Association
    person = Person("Ali")
    car = Car("Honda")
    person.car = car
    print(f"Person: {person.name} has a car with model: {person.car.model}")

    # Composition
    car = Vehicle("Car", "Honda")
    print(f"{car.type} model: {car.model} has engine horsepower: {car.engine.horsepower}")
