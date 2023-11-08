"""
You can access the private members of a class outside the class by using a friend
function.
"""


class Friend:
    __name = None

    def __init__(self, name):
        self.__name = name

    def get_name(self):
        return self.__name


friend = Friend("John")
print(friend.get_name())  # John
print(friend.__name)  # AttributeError: 'Friend' object has no attribute '__name'
