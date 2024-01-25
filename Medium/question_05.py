# Public Access Specifier
# Members declared as public are accessible from the outside the class.
# Public members can be accessed using the dot (.) operator.
# By default, all members in python are public.
class MyClass:
    def __init__(self):
        self.public_member = "I am public!"

obj = MyClass()
print(obj.public_member)  # Accessing public member


# Private Access Specifier
# Members declared as private are not accessible from the outside the class.
# In python, we can declare a member as private by prefixing it with double underscore ('__').
# Private members can be accessed with the class itself.
class MyClass:
    def __init__(self):
        self.__private_member = "I am private!"

    def get_private_member(self):
        return self.__private_member

obj = MyClass()
print(obj.get_private_member())  # Accessing private member using a method


# Protected Access Specifier
# Members declared as protected are not accessible from the outside the class.
# In python, we can declare a member as protected by prefixing it with single underscore ('_').
# Protected members can be accessed with the class itself and in subclasses.
class MyClass:
    def __init__(self):
        self._protected_member = "I am protected!"

class MySubClass(MyClass):
    def display_protected_member(self):
        print(self._protected_member)

obj = MySubClass()
obj.display_protected_member()  # Accessing protected member in a subclass