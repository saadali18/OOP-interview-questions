// Question Statement: Explain the difference between association and composition.

// Assossiation:-
// Answer: Association is a relationship where all object have their own lifecycle and there is no owner.
// Let’s take an example of Teacher and Student.
// Multiple students can associate with a single teacher and a single student can associate with multiple teachers but there is no ownership between the objects and both have their own lifecycle.
// Both can create and delete independently.


// Composition:-
// Composition is a relationship where child objects don’t have their lifecycle and if parent object deletes all child object will also be deleted.
// Let’s take an example of House and rooms.
// House can contain multiple rooms there is no independent life of room and any room can not belongs to two different houses if we delete the house room will automatically delete.


// Difference between Association and Composition:-
// So Assossiation is a weak relationship and Composition is a strong relationship.
// In Assossiation child objects can survive without parent object and in Composition child objects can not survive without parent object.



// Example of Association:-
class Teacher
{
    constructor(name, id)
    {
        this.name = name;
        this.id = id;
    }
}
class Student
{
    constructor(name, id)
    {
        this.name = name;
        this.id = id;
        this.teachers = [];
    }
}


// Example of Composition:-
class House
{
    constructor(address)
    {
        this.address = address;
        this.rooms = [];
    }
}
class Room
{
    constructor(name)
    {
        this.name = name;
    }
}