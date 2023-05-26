#include <iostream>

class Tree {
public:
    virtual void draw() const = 0;
};

class AsciiTree : public Tree {
public:
    void draw() const override {
        std::cout << " / \\\n"
            << "// \\\\\n";
    }
};

class StarTree : public Tree {
public:
    void draw() const override {
        std::cout << "  / \\\n"
            << "/ ** \\\n";
    }
};

class PlusTree : public Tree {
public:
    void draw() const override {
        std::cout << "   / \\\n"
            << "/ ++ \\\n";
    }
};

int main() {
    Tree* trees[3];  
    AsciiTree asciiTree;
    StarTree starTree;
    PlusTree plusTree;

    
    trees[0] = &asciiTree;
    trees[1] = &starTree;
    trees[2] = &plusTree;

   
    for (int i = 0; i < 3; i++) {
        trees[i]->draw();
        std::cout << std::endl;
    }

    return 0;
}
