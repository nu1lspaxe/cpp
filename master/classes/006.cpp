/* Nested classes
Good for hiding implementation details.

cppreference: https://en.cppreference.com/w/cpp/language/nested_types
*/

class List
{
public:
    List() : head(nullptr), tail(nullptr){};

private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node *prev;
    };

private:
    Node *head;
    Node *tail;
};