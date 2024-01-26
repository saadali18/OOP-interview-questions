//  In this room, can you give any practical example of polymorphism
// Base class
class Item {
  displayInfo() {
    return "Generic item information...";
  }
}

// Derived class - Wall
class Wall extends Item {
  displayInfo() {
    return "This is a wall.";
  }
}

// Derived class - Clock
class Clock extends Item {
  constructor(time) {
    super();
    this.time = time;
  }

  displayInfo() {
    return `This is a clock showing the time: ${this.time}`;
  }
}

// Function to display information about an item using polymorphism
function displayItemInfo(item) {
  return item.displayInfo();
}

// Creating instances of Wall and Clock
let myWall = new Wall();
let myClock = new Clock("12:30 PM");

// Displaying and logging information using the common interface (Item)
console.log(displayItemInfo(myWall)); // Output: This is a wall.
console.log(displayItemInfo(myClock)); // Output: This is a clock showing the time: 12:30 PM
