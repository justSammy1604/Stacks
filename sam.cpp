#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
}*top;

void push()
{
    struct node *temp;
    int num;
    cout<<"Enter the data item onto the stack "<<endl;
    cin>>num;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = top;
    top = temp;
}

void pop()
{
    struct node *temp;
    if (top==NULL)
    cout<<"Stack Underflow "<<endl;
    else
    {
        temp = top;
        cout<<"The data item popped from the stack is "<<top->data<<endl;
        top = top->link;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if (top==NULL)
    cout<<"Stack Underflow "<<endl;
    else
    {
        temp = top;
        while(temp!=NULL)
        {
            cout<<temp->data<<"--->";
            temp = temp->link;
        }
    }
}

int main()
{
    top = NULL;
    push();
    push();
    push();
    push();
    pop();
    display();
    return 0;
}