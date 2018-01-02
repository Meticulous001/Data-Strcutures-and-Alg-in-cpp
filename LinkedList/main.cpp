#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int number;
    node *next;
};

///bool isEmpty(node *head);
    bool isEmpty(node *head)
    {
        if(head==NULL)
            return true;
        else
            return false;
    }




char menu()
{
    char choice;
    cout<< "Menu " <<endl;
    cout<< "1. Add an item "<<endl;
    cout<< "2. Remove an item "<<endl;
    cout<< "3. Show the List "<<endl;
    cout <<"4. Exit " <<endl;

    cin>>choice;

    return choice;

}



///void inserAsFirstElement(node *&head, node *&last, int number);

void inserAsFirstElement(node *&head, node *&last, int number)
{
    node *temp  = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;

}



///void insert(node *&head, node *&last, int number);
void insert(node *&head, node *&last, int number)
{
    if(isEmpty(head))
        inserAsFirstElement(head, last, number);
    else
        {
            node *temp  = new node;
            temp->number = number;
            temp->next = NULL;
            last->next = temp;
            last = temp;

        }
}


void remove(node *&head, node *&last)
{
    if(isEmpty(head))
        cout<<"The list is empty " <<endl;
    else if(head == last)
    {
        delete head;
        head==NULL;
        last==NULL;
    }
    else
        {

    node *temp  = head;
    head = head->next;
    delete temp;
            }
}



void showList(node *current)
{
    if(isEmpty((current)))
        cout<<"The list is empty" <<endl;
    else
    {
        cout<<"The list contains: "<<endl;
        while(current != NULL)
        {
            cout<<current->number <<endl;
            current = current->next;
        }

    }
}







int main()
{
    node *head = NULL;
    node *last = NULL;

    char choice;
    int number;

    do
        {
            choice = menu();

            switch(choice)
            {
                case '1' : cout <<"Please enter a num" <<endl;;
                            cin>>number;
                            insert(head, last, number);
                            break;
                case '2' : remove(head, last);
                break;

                case '3' : showList(head);
                    break;

                default: cout<< "System exit" <<endl;

            }
        }
            while(choice != '4');



    return 0;
}
