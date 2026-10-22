class Node{
public:
    int key, val;
    Node* next;
    Node* prev;
    Node(int k, int v) {
        key = k;
        val = v;
        next = nullptr;
        prev = nullptr;
    }
};
class LRUCache {
public:
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    int cap;
    unordered_map<int, Node*> mp;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    void deleteNode(Node* node) {
        Node* before = node->prev;
        Node* after = node->next;
        before->next = after;
        after->prev = before;
    }
    void insertAfterHead(Node* node) {
        Node* nextNode = head->next;
        node->next = nextNode;
        node->prev = head;
        head->next = node;
        nextNode->prev = node;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;
        Node* node = mp[key];
        int value = node->val;
        deleteNode(node);
        insertAfterHead(node);
        return value;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
        }
        if(mp.size() == cap) {
            Node* lru = tail->prev;
            mp.erase(lru->key);
            deleteNode(lru);
            delete lru;
        }
        Node* node = new Node(key, value);
        insertAfterHead(node);
        mp[key] = node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */