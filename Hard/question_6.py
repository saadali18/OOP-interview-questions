# Abstraction explanation with an example:
# Abstraction is a fundamental concept in object-oriented programming that involves simplifying complex systems by modeling classes based on the essential properties and behaviors they share. It allows you to focus on the essential features of an object while hiding the unnecessary details.

# Practical Use Case of Abstraction: Database Interaction
# Consider a scenario where you are developing a web application that interacts with a database. Abstraction can be applied to create a generic database connection class that can be extended for specific database types (e.g., MySQL, PostgreSQL). Users of the application can then interact with the database without worrying about the underlying details.

from abc import ABC, abstractmethod

class DatabaseConnection(ABC):
    def __init__(self, connection_string):
        self._connection_string = connection_string

    @abstractmethod
    def connect(self):
        pass

    @abstractmethod
    def execute_query(self, query):
        pass

class MySQLConnection(DatabaseConnection):
    def connect(self):
        print(f"Connecting to MySQL database with {self._connection_string}")

    def execute_query(self, query):
        print(f"Executing MySQL query: {query}")

class PostgreSQLConnection(DatabaseConnection):
    def connect(self):
        print(f"Connecting to PostgreSQL database with {self._connection_string}")

    def execute_query(self, query):
        print(f"Executing PostgreSQL query: {query}")

# Example usage
mysql_db = MySQLConnection("mysql://user:password@localhost/mydatabase")
pgsql_db = PostgreSQLConnection("pgsql://user:password@localhost/mydatabase")

mysql_db.connect()
mysql_db.execute_query("SELECT * FROM users")

pgsql_db.connect()
pgsql_db.execute_query("SELECT * FROM employees")
