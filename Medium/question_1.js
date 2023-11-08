// Polymorphism is a key concept in object-oriented programming that allows objects of different types to be
// treated as objects of a common base type. In statically-typed languages like TypeScript, polymorphism is
// enforced through type inheritance and method signatures. In JavaScript, which is dynamically typed, you can
// achieve polymorphism through duck typing, where objects are treated based on their behavior rather than their
// types.

class Bird {
  fly() {
    console.log("A bird can fly.");
  }
}

class Dog {
  bark() {
    console.log("A dog can bark.");
  }
}

function makeNoise(animal) {
  // The makeNoise function expects an object with a "makeNoise" method
  if (animal && typeof animal.makeNoise === "function") {
    animal.makeNoise();
  } else {
    console.log("This animal doesn't make a noise.");
  }
}

const bird = new Bird();
const dog = new Dog();

makeNoise(bird); // Output: This animal doesn't make a noise.
makeNoise(dog); // Output: A dog can bark.
