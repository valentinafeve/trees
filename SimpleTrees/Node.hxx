Node<T> STree::getroot(){
    return STree::root;
}
void STree::addNode(const T& data){
    STree::root->addChild(data);
}
void STree::removeNode(const size_t& indx){
    STree::root->removeChild(data);
}
