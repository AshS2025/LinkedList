#include <iostream>
#include <cstring>
#include "Node.h"
#include "student.h"

using namespace std;

Node:: Node(){
  student = new student();
  next = NULL;
}

Node :: Node(student* newstudent){
  next = NULL;
  student = newstudent;
  
}

Node :: ~Node(){
  delete &student;
  next = NULL;
}

void Node :: setNext(newnext){
  next = newnext;
}

Node* Node:: getNext(){
  return next;
}

void Node :: setStudent(newstudent){
  student = newstudent;
}

student* Node :: getStudent(){
  return student;
}
