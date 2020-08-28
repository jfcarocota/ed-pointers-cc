struct Node
{
    int value{};
    Node* nextNode{nullptr};

    Node(int value, Node* nextNode)
    {
        this->value = value;
        this->nextNode = nextNode;
    }
};