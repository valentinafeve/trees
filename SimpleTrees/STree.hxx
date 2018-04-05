template<class T>
Node<T>::Node(Node<T>* parent, T data) : parent(parent) {
    this->data = new T(data);
}

template<class T>
Node<T>::~Node() {
    delete data;
    for(Node<T>* childNode : children)
        delete childNode;
}

template<class T>
T& Node<T>::getData() const {
    return *this->data;
}

template<class T>
void Node<T>::setData(const T& data) {
    *this->data = data;
}

template<class T>
void Node<T>::addChild(const T& data) {
    children.push_back(new Node<T>(this, data));
}

template<class T>
void Node<T>::removeChild(const size_t& indx) {
    children.erase(children.begin()+indx);
}

template<class T>
Node<T>* Node<T>::findChild(const T& data) const {
    for(int i=0; i<children.size(); i++)
        if(children[i]->getData() == data)
            return children[i];
    return NULL;
}

template<class T>
Node<T>* Node<T>::getChild(const size_t& indx) const {
    return children[indx];
}

template<class T>
Node<T>* Node<T>::getParent() const {
    return parent;
}

template<class T>
int Node<T>::getNumChildren() const {
    return children.size();
}