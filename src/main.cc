#include<iostream>
#include "Node.hh"

void printValue(int& value)
{
    std::cout << "memmory of value: " << &value << " value inside value: " << value << std::endl;
}

/*struct Person
{
    const char* name;
    int age;
    float height;

    //constructor
    Person(const char* name, int age, float height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};*/

int main()
{
    Node* node0 = new Node(0, nullptr);//0
    node0->nextNode = new Node(1, nullptr);//1
    node0->nextNode->nextNode = new Node(2, nullptr);//2
    node0->nextNode->nextNode->nextNode = new Node(3, nullptr);//3
    node0->nextNode->nextNode->nextNode->nextNode = new Node(4, nullptr);

    //std::cout << node0->value << std::endl;
    //std::cout << node0->nextNode->value << std::endl;

    Node* currentNode = node0;

    while (currentNode)
    {
        std::cout << currentNode->value << " -> " << "\t";
        currentNode = currentNode->nextNode;
    }
    


    //int something{5};//stack

    //int& ref{something};//esto es una referencia (variable por referencia)

    //int something2{something};//esto es una copia (variable por valor)

    //ref++;

    //int* ptr1{&something};

    //++*ptr1;

    /*Person* arrPointer[]
    {
        new Person("Jose", 19, 1.60), 
        new Person("Miguel", 21, 1.73)
    };*/

    /*for(Person*& p : arrPointer)
    {
        std::cout << "value of person: " << p << std::endl;
        std::cout << "name of person: " << p->name << std::endl;
        std::cout << "age of person: " << p->age << std::endl;
        std::cout << "height of person: " << p->height << std::endl;
        std::cout << std::endl;
    }*/

    /*Person* person1{new Person("Jose", 19, 1.60)};
    Person* person2{new Person("Miguel", 21, 1.73)};

    std::cout << "memmory of person1: " << &person1 << std::endl;
    std::cout << "value of person1: " << person1 << std::endl;
    std::cout << "name of person1: " << person1->name << std::endl;
    std::cout << "age of person1: " << person1->age << std::endl;
    std::cout << "height of person1: " << person1->height << std::endl;*/


    /*std::cout << "memmory of something: " << &something << " value inside memmory: " << something << std::endl;
    std::cout << "memmory of ref: " << &ref << " value inside ref: " << ref << std::endl;
    std::cout << std::endl;

    std::cout << "memmory of something2: " << &something2 << " value inside something2: " << something2 << std::endl;
    std::cout << "memmory of something: " << &something << " value inside memmory: " << something << std::endl;
    std::cout << "memmory of ref: " << &ref << " value inside ref: " << ref << std::endl;
    std::cout << std::endl;

    std::cout << "memmory of pointer: " << &ptr1 << " value inside pointer: " << *ptr1 << " memmory of the value inside pointer " << ptr1 << std::endl;*/

    //printValue(something);

    std::cin.get();

    return 0;
}