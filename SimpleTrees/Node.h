#include <cstddef>
#include <vector>
using namespace std;

template<class T>
class Node {

private:

    T* data;
    Node<T>* parent;
    vector< Node<T>* > children;

public:

    Node(Node<T>* parent, T data);
    ~Node();

    T& getData() const;
    void setData(const T& data);
    void addChild(const T& data);
    void removeChild(const size_t& indx);
    Node<T>* findChild(const T& data) const;
    Node<T>* getChild(const size_t& indx) const;
    Node<T>* getParent() const;
    int getNumChildren() const;

};

#include "STree.hxx"