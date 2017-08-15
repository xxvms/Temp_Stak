#include <iostream>
const int MAX = 100;            // size of array
template<class Type>
class Stack{
private:
    Type st[MAX];               // stack array of any type
    int top;                    // number of top of stack
public:
    Stack(){               // constructor
     top = -1;
    }
    void push(Type var){        // put number on stack
        st[++top] = var;
    }
    Type pop(){                 // takes numbers off the stack (pop's number)
        return st[top--];
    }
};

int main() {
    Stack<double>s1;            // s1 is object of class Stack<double>

    // pushing 3 doubles and poping 3 doubles
    s1.push(1111.11);
    s1.push(2222.22);
    s1.push(3333.33);

    std::cout << "1: " << s1.pop() << '\n';
    std::cout << "2: " << s1.pop() << '\n';
    std::cout << "3: " << s1.pop() << '\n';




    return 0;
}