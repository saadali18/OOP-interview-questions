#include <iostream>

class WritingTool {
public:
    virtual void write() {
        std::cout << "Using a generic writing tool" << std::endl;
    }
};

class Pen : public WritingTool {
public:
    void write() {
        std::cout << "Using a pen to write" << std::endl;
    }
};

class Marker : public WritingTool {
public:
    void write() {
        std::cout << "Using a marker to write" << std::endl;
    }
};

void useWritingTool(WritingTool* tool) {
    tool->write(); // This is polymorphism in action
}

int main() {
    Pen myPen;
    Marker myMarker;
    WritingTool genericTool;

    useWritingTool(&myPen);     // Calls write() of the Pen class
    useWritingTool(&myMarker);  // Calls write() of the Marker class
    useWritingTool(&genericTool); // Calls write() of the base WritingTool class

    return 0;
}
