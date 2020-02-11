using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }
// } Driver Code Ends
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
        // Your Code
    QueueNode* newnode=new QueueNode(x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;                                             //only front(head) gets deleted in queue
        rear=newnode;                                               //and new nodes are added at rear 
        return;
    }                                                  
    rear->next=newnode;
    rear=newnode;
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code  
        if(front==NULL)               //this means no nodes are present
      return -1;
        if(front==rear)     //this condition means there are only one node left
        {
            int num=front->data;
             delete(front);
              front=NULL;
              rear=NULL;
             return num;
        }
        QueueNode* temp=front;
        int num=front->data;
        front=front->next;           //simply assign next node of front to front as front is going to be popped
        delete(temp);
        return num;
}
