#include <iostream>
#include <cstring>
#include "Node.h"
#include "student.h"

using namespace std;

Node:: Node(){
  Student = new student();
  next = NULL;
}

Node :: Node(student* newstudent){
  next = NULL;
  Student = newstudent;  
}

Node :: ~Node(){
  delete Student;
  next = NULL;
}

void Node :: setNext(Node* newnext){
  next = newnext;
}

Node* Node:: getNext(){
  return next;
}

void Node :: setStudent(student* newstudent){
  Student = newstudent;
}

student* Node :: getStudent(){
  return Student;
}
