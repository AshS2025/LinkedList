#include <iostream>
#include <cstring>
#include "Node.h"
#include "student.h"

using namespace std;

void add(int newvalue);
void print(Node* next);

Node* head = NULL;

int main(){
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);
}

void add(int newvalue) {
  Node* current = head;
  student* Stu = new student(newvalue);
  if (current == NULL){
    head = new Node();
    head->setStudent(Stu);
  }
  else{
    while (current->getNext()!= NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setStudent(Stu);
  }
}

void print(Node* next){
  if (next == head) {
    cout << "list: " << endl;
  }
  if (next != NULL){
    cout << next->getStudent()->id << " " << endl;
    print(next->getNext());
  }
}
