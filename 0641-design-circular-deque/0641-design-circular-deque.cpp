class MyCircularDeque {
public:
    vector<int>deq;
    int K;
    int front;
    int rear;
    int currCount;
    MyCircularDeque(int k) {
        K=k;
        deq=vector<int>(K,0);
        front=0;
        rear=K-1;
        currCount=0;
    }
    
    bool insertFront(int value) {
        if(currCount==K){
            return false;
        }
        front = (front-1+K)%K;
        deq[front]=value;
        currCount++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()){
            return false;
        }
        rear=(rear+1)%K;
        deq[rear]=value;
        currCount++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
        {
            return false;
        }
        front = (front+1)%K;
        currCount--;
        return true;
    }
    
    bool deleteLast() {
    if(isEmpty()) {
        return false;
    }
    rear = (rear - 1 + K) % K; // Ensure rear wraps around correctly
    currCount--;
    return true;
}

    
    int getFront() {
        if(currCount==0)
        {
            return -1;
        }
        else{
            return deq[front];
        }
    }
    
    int getRear() {
        if(currCount==0)
        {
            return -1;
        }
        else{
            return deq[rear];
        }
    }
    
    bool isEmpty() {
        return currCount == 0;
    }
    
    bool isFull() {
        return currCount==K;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */