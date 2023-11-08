#include <iostream>
#include <vector>

// Association: It represents a more loosely coupled relationship between classes.
// Objects of one class are related to objects of another class, but they can exist
// independently. The association can be one-to-one, one-to-many, or many-to-many.
//
// Composition: It represents a strong, ownership-based relationship between classes.
// In a composition, one class is composed of another class, and the child class does not
// exist independently of the parent class.

// Association
class Teacher {
public:
    Teacher(std::string name) : name(name) {}

    std::string getName() {
        return name;
    }

private:
    std::string name;
};

class Student {
public:
    Student(std::string name) : name(name) {}

    std::string getName() {
        return name;
    }

private:
    std::string name;
};

// Composition
class Department {
public:
    Department(std::string name) : name(name) {}

    void addTeacher(Teacher* teacher) {
        teachers.push_back(teacher);
    }

    std::string getDepartmentName() {
        return name;
    }

private:
    std::string name;
    std::vector<Teacher*> teachers;
};

int main() {
    // Association: Students and teachers exist independently
    Student student("Alice");
    Teacher teacher("Mr. Smith");

    std::cout << student.getName() << " is taught by " << teacher.getName() << std::endl;

    // Composition: Teachers are part of the department
    Department mathDepartment("Math Department");
    Teacher teacher1("Mrs. Johnson");
    Teacher teacher2("Mr. Brown");

    mathDepartment.addTeacher(&teacher1);
    mathDepartment.addTeacher(&teacher2);

    std::cout << teacher1.getName() << " works in the " << mathDepartment.getDepartmentName() << " department." << std::endl;

    return 0;
}
