# --------------ASSOCIATION--------------

# Definition: Association represents a bi-directional relationship between two classes. It's a more generic term and 
# doesn't imply a strong ownership or lifecycle dependency between the objects.

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

# Definition: Composition implies a strong relationship between two classes where one class contains the other, and the 
# contained class has no independent existence. If the container is destroyed, the contained class is also destroyed.

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