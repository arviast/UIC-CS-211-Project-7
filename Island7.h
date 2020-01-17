// CS 211 2019 FALL
// Project 7
// Arvinbayar Jamsranjav

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

//----------------------------------------------------
// node class for the mylist
class MyNode
{
 private:
  int elem;
  MyNode* next;
  
 public:
  MyNode (int v1);
  MyNode (int v1, MyNode* n);
  
  void setElem (int e);
  int getElem ();
  void setNext (MyNode* n);
  MyNode* getNext();
};

//----------------------------------------------------
//myList class for adjancencies
class MyList
{
 private:
  MyNode* head;
 public:
  MyList();
  ~MyList();
  //MyNode* head;
  void show();
  virtual void insert(int v1);
  virtual void remove(int v1);
  bool isEmpty();
  int getListLength();
  int getNthElem(int v1);
  void removeAll();
  int search(int v1);
  MyNode* getHead();
  void setHead(MyNode* temp);
};


//----------------------------------------------------
// node for file names
class FileNode
{
  private:
      char* name;
      FileNode* next;
      
  public:
      FileNode (char* fileName);
      char* getName();
      void setNext(FileNode* n);
      FileNode* getNext();
};

//----------------------------------------------------
// list that contains nodes with file names
class FileList
{
  private:
      FileNode* head;
  
  public:
      FileList();
      ~FileList();
      void removeAll();
      void addName(char* fileName);
      bool isOpen(char* fileName);
      void removeOneFile(char* fileName);
};

//----------------------------------------------------
// island class that contains the list of islands with their adjancencies

class Island
{
  private:
    bool visited;
    int previousLocation;
    MyList listStart;
    
  public:
    Island();
    ~Island();
    
    void addedge(int v1);
    bool existingEdge(int v1);
    void deleteEdge(int v1);
    void showIslands();
    bool isNoConnection();
    void markVisited();
    void markUnvisited();
    bool isVisited();
    MyNode* _getHead();
    int getPosition();
    void changePosition(int v1);
};

//----------------------------------------------------
// class for queue
class MyQueue : public MyList {
    public:
        MyQueue() : MyList() 
        { }
        // insert at the end
        void insert(int v1);
        // get front
        int atTheFront();
        // remove from front
        void remove();
};


//----------------------------------------------------
// class for stack
class MyStack : public MyList {
    public:
        MyStack() : MyList() 
        { }
        // insert at the front
        void insert(int v1);
        // get front
        int atTheFront();
        // remove from front
        void remove();
};