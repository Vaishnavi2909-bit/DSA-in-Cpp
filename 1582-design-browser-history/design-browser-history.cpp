class Node {
public:
    string url;
    Node* prev;
    Node* next;

    Node(string u){
        url = u;
        prev = NULL;
        next = NULL;
    }
};
class BrowserHistory {
    Node* currentPage;
public:
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        currentPage->next = newNode;
        newNode->prev = currentPage;
        currentPage = newNode;
    }
    
    string back(int steps) {
        while(steps-- && currentPage->prev != NULL){
            currentPage = currentPage->prev;
        }
        return currentPage->url;
    }
    
    string forward(int steps) {
        while(steps-- && currentPage->next != NULL){
            currentPage = currentPage->next;
        }
        return currentPage->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */