#include <iostream>

using namespace std;

struct Node
{
    char data;
    Node *left, *right;
} *root;
// Stack Node Class
class StackNode
{
    public:
        Node *tree_node;
        StackNode *next;

        StackNode(Node *tree_node)
        {
            this -> tree_node = tree_node;
            next = NULL;
        }
};
//Expression Tree Class
class ExpressionTree
    {
        private:
            StackNode *top;
        
        public:
            ExpressionTree()
            {
                top = NULL;
            }

            Node *createNode(char);
            void buildTree(string);
            void insert(char);

            void push(Node *);
            Node* pop();

            void display();
            void inorder(Node *);
            void inorderNonRecursive(Node *);
            void preorder(Node *);
            void preorderNonRecursive(Node *);
            void postorder(Node *);
    };

Node* ExpressionTree :: createNode(char ch)
{
    Node *temp_node = new Node;
    temp_node -> right = temp_node -> left = NULL;
    temp_node -> data = ch;

    return temp_node;
}

void ExpressionTree :: buildTree(string exp)
{
    for (int i = exp.length() - 1; i >= 0; i--)
    {
        insert(exp[i]);
    }

    root = top -> tree_node;
}

void ExpressionTree :: insert(char ch)
{
    Node *temp_node = new Node;
    temp_node = createNode(ch);

    if (ch >= '0' && ch <= '9')
        push(temp_node);
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        temp_node -> left = pop();
        temp_node -> right = pop();
        push(temp_node);
    }
    else
        cout << "Invalid Expression" << endl;
}

void ExpressionTree :: push(Node *ptr)
{
    if (top == NULL)
        top = new StackNode(ptr);
    else
    {
        StackNode *nptr = new StackNode(ptr);
        nptr -> next = top;
        top = nptr; 
    }
}

Node* ExpressionTree :: pop()
{
    if (top == NULL)
        cout << "Stack Empty" << endl;
    else
    {
        Node *ptr = top -> tree_node;
        top = top -> next;
        return ptr;
    }
}

void ExpressionTree :: inorder(Node *temp_node)
{
    if (temp_node != NULL)
    {
        inorder(temp_node -> left);
        cout << " " << temp_node -> data;
        inorder(temp_node -> right);
    }
}

void ExpressionTree :: inorderNonRecursive(Node *temp_node)
{
    top = NULL;

    while (temp_node != NULL || top != NULL)
    {
        while (temp_node != NULL)
        {
            push(temp_node);
            temp_node = temp_node -> left;
        }
        temp_node = pop();
        cout << " " << temp_node -> data;
        temp_node = temp_node -> right;
    }
}

void ExpressionTree :: preorder(Node *temp_node)
{
    if (temp_node != NULL)
    {
        cout << " " << temp_node -> data;
        preorder(temp_node -> left);
        preorder(temp_node -> right);
    }
}

void ExpressionTree :: postorder(Node *temp_node)
{
    if (temp_node != NULL)
    {
        postorder(temp_node -> left);
        postorder(temp_node -> right);
        cout << " " << temp_node -> data;
    }
}

void ExpressionTree :: display()
{
    cout << "\nInorder : ";
    inorder(root);

    cout << "\nInorder Non-Recursive : ";
    inorderNonRecursive(root);

    cout << "\nPreorder : ";
    preorder(root);

    cout << "\nPreorder Non-Recursive : ";
   // preorderNonRecursive(root);

    cout << "\nPostorder : ";
    postorder(root);
    cout << "\n";
}

int main()
{
    string s;
    ExpressionTree obj;

    cout << "\nEnter the equation in Prefix Form : ";
    cin >> s;
    obj.buildTree(s);

    cout << "Traversals :\n";
    obj.display();

    return 0;
}