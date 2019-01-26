//A Node class with functionality for the embeddable trees project
#ifndef Node_H
#define Node_H
#include <vector>

class Node {
private:
  Node *parent;
  std::vector<Node *> children;

public:
  Node() //default constructor

  bool hasChildren() { if (chilren.empty()) ? return false : return true; }

  int getNumChildren() { return children.size(); }

  void addChild(Node *child) {
    child->setParent(this);
    children.push_back(child);
  }

  void setParent(Node *_parent) { parent = _parent; }

  bool hasParent() { if parent != NULL ? return true : return false; }

  Node* getParent() { return parent; }

  Node* getChild(int pos) {
    if (getNumChildren() > pos) ? return children.at(pos) : return NULL;
}
