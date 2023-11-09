"""
In Python, there are no access specifiers like public, private, and protected as in other
object-oriented programming languages. Instead, Python uses a naming convention to define
these levels of access.
"""

"""
Public members (generally methods declared in a class) are accessible from outside the class.
The object of the same class is required to invoke a public method.
"""


class StudentPublic:
    school_name = "XYZ School"

    def __init__(self, name, age):
        self.name = name
        self.age = age


"""
Protected members of a class are accessible from within the class and are also available to
its sub-classes. No other environment is permitted access to it.  However, to define a protected
member prefix the member name with double underscore “_”.
"""


class StudentProtected:
    _school_name = "XYZ School"

    def __init__(self, name, age):
        self._name = name
        self._age = age


"""
Private members are only accessible within the class. No outside environment is allowed
access to it. In Python, there is no existence of Private instance variables that cannot be
accessed except inside a class. However, to define a private member prefix the member
name with double underscore “__”.
"""


class StudentPrivate:
    __school_name = "XYZ School"

    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    def __display(self):
        print("This is private method.")


if __name__ == "__main__":
    # Public members
    student = StudentPublic("Steve", 25)
    print(f"Student: {student.school_name, student.name, student.age}")
    student.age = 20
    print(f"Updated age: {student.age}")

    # Protected members
    student = StudentProtected("John", 25)
    print(f"Student name: {student._name}")
    student._name = "Watson"
    print(f"Updated student name: {student._name}")

    # Private members
    student = StudentPrivate("Bill", 25)

    # Following statement will give error as it is a private member: AttributeError: 'StudentPrivate' object has no attribute '__school_name'
    print(student.__school_name)

    # Following statement will give error as it is a private member: AttributeError: 'StudentPrivate' object has no attribute '__name'
    print(student.__name)

    # Following statement will give error as it is a private member: AttributeError: 'StudentPrivate' object has no attribute '__display'
    print(student.__display())
