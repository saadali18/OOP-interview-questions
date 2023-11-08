// Abstraction is a fundamental concept in object-oriented programming that involves hiding the complex
// implementation details and showing only the necessary features of an object. It simplifies the complexity
// of a system, making it more understandable and manageable. A practical use case of abstraction is building
// a user interface (UI) library or framework where users interact with a simplified interface to create
// complex UI components.

// Abstract base class representing a UI component
class UIComponent {
  constructor() {
    if (new.target === UIComponent) {
      throw new Error(
        "UIComponent is an abstract class and cannot be instantiated directly."
      );
    }
  }

  // Abstract method to render the component
  render() {
    throw new Error("Render method must be implemented by concrete classes.");
  }

  // Common method for all UI components
  show() {
    console.log("UI component is shown.");
  }
}

// Concrete class representing a Button component
class Button extends UIComponent {
  constructor(label) {
    super();
    this.label = label;
  }

  // Implement the render method for the Button component
  render() {
    console.log(`Button with label: ${this.label} is rendered.`);
  }
}

// Concrete class representing a Textbox component
class Textbox extends UIComponent {
  constructor(value) {
    super();
    this.value = value;
  }

  // Implement the render method for the Textbox component
  render() {
    console.log(`Textbox with value: ${this.value} is rendered.`);
  }
}

// Usage of the UI library
const button = new Button("Submit");
button.render(); // Output: "Button with label: Submit is rendered."
button.show(); // Output: "UI component is shown."

const textbox = new Textbox("Type here");
textbox.render(); // Output: "Textbox with value: Type here is rendered."
textbox.show(); // Output: "UI component is shown."
