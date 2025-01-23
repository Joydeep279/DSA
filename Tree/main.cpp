#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
    }
};
int main()
{

    int data;
    cout << "Enter the Root Node: ";
    cin >> data;
    queue<Node *> que;
    // while (true)
    // {
    //     /* code */
    // }
    Node *root = new Node(data);                    // Creating the Root Node
    que.push(root);                                 // Pushing the Root Node to the Queue
    while (!que.empty())                            // While the Queue is not Empty
    {
        Node *temp = que.front();                   // Storing the Front Element of the Queue in a Temporary Node
        que.pop();                                  // Popping the Front Element of the Queue
        cout << "Enter the Left Child of " << temp->data << " : ";
        cin >> data;
        if (data != -1)                             // If the Data is not -1
        {
            temp->left = new Node(data);            // Creating a New Node and Assigning it to the Left Child of the Current Node
            que.push(temp->left);                   // Pushing the Left Child to the Queue
        }
        cout << "Enter the Right Child of " << temp->data << " : ";
        cin >> data;
        if (data != -1)                             // If the Data is not -1
        {
            temp->right = new Node(data);           // Creating a New Node and Assigning it to the Right Child of the Current Node
            que.push(temp->right);                  // Pushing the Right Child to the Queue
        }
    }
    return 0;
}