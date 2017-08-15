#include <iostream>
#include <vector>

template<class Type>
class Stack{
private:
    std::vector<Type> vector;       // stack array of any type
public:
    Stack(){}                       // constructor

    void push(const Type& var){            // put number on stack
        vector.push_back(var);
    }

    Type pop(){                    // takes numbers off the stack (pop's number)

        Type tmp = vector.back();
        vector.pop_back();
        return tmp;
    }
};

int main() {
    Stack<double>s1;                // s1 is object of class Stack<double>

    // pushing 3 doubles and poping 3 doubles
    s1.push(1111.11);
    s1.push(2222.22);
    s1.push(3333.33);

    std::cout << "1: " << s1.pop() << '\n';
    std::cout << "2: " << s1.pop() << '\n';
    std::cout << "3: " << s1.pop() << '\n';
    return 0;
}