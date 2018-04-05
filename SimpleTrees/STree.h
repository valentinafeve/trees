class STree{
private:
	Node<T>* root;
public:
	Node<T>* getroot();
	void addNode(const T& data);
    void removeNode(const size_t& indx);

}