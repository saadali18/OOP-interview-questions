# --------------ASSOCIATION--------------

# Definition: Association represents a bi-directional relationship between two classes. It's a more generic term and doesn't imply a strong ownership or lifecycle dependency between the objects. It can be a one-to-one, one-to-many, or many-to-many relationship.


# Let's take an example of two classes: 'Author' and 'Book'.
# An association exists between them because an author can write multiple books, and a book can be written by a single author. 
# This is a simple association without implying strong ownership or lifecycle dependency.

# +----------------+       +-----------------+
# |     Author     |       |      Book       |
# +----------------+       +-----------------+
# | - name: String |       | - title: String |
# +----------------+       | - author: Author|
#                          +-----------------+


# Code Example:
class Author
    attr_accessor :name

    def initialize(name)
        @name = name
    end
end

class Book
    attr_accessor :title, :author

    def initialize(title, author)
        @title = title
        @author = author
    end

author = Author.new("Robert Martin")
book = Book.new("Clean Code", author)
puts book.author.name


# --------------COMPOSITION--------------

# Definition: Composition implies a strong relationship between two classes where one class contains the other, and the contained class has no independent existence. If the container is destroyed, the contained class is also destroyed.

# Let's take an example of two classes: 'Car' and 'Engine'.
# A composition relationship exists because an engine is an integral part of a car. A car "has" an engine, and without the engine, the car cannot function.
# This implies a strong ownership, and the lifecycle of the engine is closely tied to the lifecycle of the car.

# +----------------+        +-----------------+
# |     Engine     |        |      Car        |
# +----------------+        +-----------------+
# | + start()      |        | - make: String  |
# +----------------+        | - engine: Engine|
#                           +-----------------+


# Code Example:
class Engine
    def start
        puts "Engine started"
    end
end

class Car
    attr_accessor :make, :engine

    def initialize(make)
        @make = make
        @engine = Engine.new
    end
    def start
        puts "Starting car"
        engine.start
    end
end

car = Car.new("Honda")
car.start
end