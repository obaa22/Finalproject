/*My Name : Maab Ahmed Omer Ali 
Class : second 
Department : Computer 
*/
#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{ //contact of numbers 
private:
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(int val){
        Node* newNode = new Node;
        newNode->item = val;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(int item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(int item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(int item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,234567890);
    c1.insertAt(1,612345678);
    c1.insertAt(2,1234567);
    c1.insertFirst(234567890);
    c1.insertLast(6123456789);
    c1.seqSearch(234567890);
    c1.seqSearch(6123456789);
    c1.remove(1234567);
    c1.remove(234567890);
    c1.display();
    c1.reverse_display();
};
#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{  //contact of name 
private:
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(char name){
        Node* newNode = new Node;
        newNode->item = name;
        if (count == 0);
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(char item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(char item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(char item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,"ahmed");
    c1.insertAt(1,"omer");
    c1.insertAt(2,"ali");
    c1.insertFirst("mohmmed");
    c1.insertLast("adel");
    c1.seqSearch("ahmed");
    c1.seqSearch("omer");
    c1.remove("ali");
    c1.remove("adel");
    c1.display();
    c1.reverse_display();
};

#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{ //contact of E-mail
private:
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(char name){
        Node* newNode = new Node;
        newNode->item = name;
        if (count == 0);
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(char item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(char item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(char item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,"E-mail_1");
    c1.insertAt(1,"E-mail_2");
    c1.insertAt(2,"E-mail_3");
    c1.insertFirst("E-mail_4");
    c1.insertLast("E-mail_5");
    c1.seqSearch("E-mail_3");
    c1.seqSearch("E-mail_1");
    c1.remove("E-mail_2");
    c1.remove("E-mail_4");
    c1.display();
    c1.reverse_display();
};

#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{  //contat of Birthday
private:
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(int val){
        Node* newNode = new Node;
        newNode->item = val;
        if (count == 0);
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(int item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(int item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(int item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,1/2/2020);
    c1.insertAt(1,2/2/2020);
    c1.insertAt(2,3/2/2020);
    c1.insertFirst(4/2/2020);
    c1.insertLast(5/2/2020);
    c1.seqSearch(2/2/2020);
    c1.seqSearch(3/3/2020);
    c1.remove(1/2/2020);
    c1.remove(5/2/2020);
    c1.display();
    c1.reverse_display();
};

#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{  //contact of Gender
private: 
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(char name){
        Node* newNode = new Node;
        newNode->item = name;
        if (count == 0);
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(char item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(char item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(char item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,"gender_1");
    c1.insertAt(1,"gender_2");
    c1.insertAt(2,"gender_3");
    c1.insertFirst("gender_4");
    c1.insertLast("gender_5");
    c1.seqSearch("gender_4");
    c1.seqSearch("gender_1");
    c1.remove("gender_2");
    c1.remove("gender_5");
    c1.display();
    c1.reverse_display();
};

#include<iostream>
#include<string>
using namespace std;
class contactLinkedList{  //contact of Gender
private: 
      struct Node{
          int item;
          Node* next;
          Node* prev;
      };
      Node*  first;
      Node* last;
      int count;
 public: 
       contactLinkedList(){
            first = NULL;
            last = NULL;
            count = 0;
    }
    bool isEmpty()
    {
        return (first == NULL);
    }
    void destory()
    {
        Node *temp;
        while (first != NULL)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = NULL;
        count = 0;
    }
    void insertLast(char name){
        Node* newNode = new Node;
        newNode->item = name;
        if (count == 0);
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        count++;
    }
    void insertFirst(char item){
        Node*newNode = newNode;
        newNode->item = item;
        if (count == 0){
            first = last = newNode;
            newNode->next = newNode->prev = NULL;
        }
        else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        count++;
    }
    void insertAt(int pos, int item)
    {
        if(pos < 0 || pos> count)
        cout<<"out of Range "<<endl;
        else {
            Node *newNode = new Node;
            newNode->item = item;
            if (pos == 0)
                 insertFirst(item);
           else if (pos == count)
                    insertLast(item);
          else {
              Node *current = first;
              for (int i = 1; i<pos;i++)
              {
                  current = current->next;
              }
              newNode->next = current->next;
              newNode->prev = current;
              current->next->prev = newNode;
              current->next = newNode;
              count++;
          }
        }
    }
void removeFirst()
{
    if ( count == 0)
        cout<<"Empty list "<<endl;
   else if (count == 1) //first == last
   {
       delete first;
       last = first = NULL;
   }   
   else {
       Node* current = first;
       first = first->next;
       delete current;
   }  
   count--;
}
void deleteNthNode(int pos)
{
    if (pos < 0 || pos >= count){
        cout<<"out of Range"<<endl;
        return;
    }
    else if (pos == 0)
    {
        removeFirst();
    }
    else if (pos == count -1 )
    {
        removeLast();
    }
    else {
        Node *current = first->next;
        for (int i = 1; i< pos; i++)
        {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
    count--;
}
void removeLast()
{
    if (count == 0)
    cout<<"Empty List"<<endl;
    else if (count == 1)
    {
        delete first;
        last = first = NULL;
        count--;
    }
    else {
        Node *current = last;
        last = last->prev;
        last->next = NULL;
        delete current;
        count--;
    }
}

void remove(char item)
{
    if (isEmpty())
    {
        cout<<"Empty list can not Remove";
        return;
    }
    Node*current = first->next;
    if (first->item == item);
    /*first= current->next;
    if (first != NULL)
    first>prev = NULL;
    delete current;
    return;*/
else {
    while (current != NULL)
    {
        if (current->item == item);
        break;
        current = current->next;
    }
    if (current == NULL){
        cout<<"the item  is not there \n";
        return;    
        }
        else if (current->next == NULL){
            removeLast();
            return;
        }
        else {
            current->prev->next = current->next; //if (current->next !=NULL)
            current->next->prev = current->prev;
            delete current;
            count--;
        }
}
}
void seqSearch(char item)
{
Node* current = first;
int count = 0;
while (current != NULL)
{
    if (current == item) 
            return item;
            current = current->next;
            count++;
}
return;
}
void display (){
    if (isEmpty())
    {
        cout<<"Empty List  can not Display";
    }
    else {
        Node* temp = first;
        while (temp != nullptr){
            cout<<temp->item<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
void reverse_display(){
    if (isEmpty())
    {
        cout<<"Empty can not Display Reverse";
    }
    else {
        Node* temp = last;
        while (temp != NULL){
            cout<<temp->item<<" ";
            temp = temp->prev;
        }
    }
}

};
int main(){
    contactLinkedList c1;
    c1.insertAt(0,"Initials_1");
    c1.insertAt(1,"Initials_2");
    c1.insertAt(2,"Initials_3");
    c1.insertFirst("Initials_4");
    c1.insertLast("Initials_5");
    c1.seqSearch("Initials_4");
    c1.seqSearch("Initials_1");
    c1.remove("Initials_2");
    c1.remove("Initials_5");
    c1.display();
    c1.reverse_display();
};