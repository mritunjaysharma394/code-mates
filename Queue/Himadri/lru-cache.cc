//solution by Shefali Sonker

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    int value;
    Node *next,*pre;
    Node(int key, int value)
    {
        this->key=key;
        this->value=value;
        next=pre=NULL;
    }

};


 // } Driver Code Ends



/*
struct Node
{
    int key;
    int value;
    Node *next,*pre;
    Node(int key, int value)
    {
        this->key=key;
        this->value=value;
        next=pre=NULL;
    }

};
*/

class LRUCache
{
    private:

    static unordered_map<int,Node *> hsmap;
    static int capacity,count;
    static Node *head,*tail;

    public:

    LRUCache(int cap);
    int get(int key);
    void set(int key, int value);


};

int cachesize = 0;
map <int, int> mp;
deque<int> dq;

LRUCache::LRUCache(int cap) {
    cachesize = cap;
    dq.clear();
    mp.clear();
}

void LRUCache::set(int key, int value){
    if(mp.find(key)==mp.end()){
        mp[key] = value;
        if(dq.size() < cachesize) dq.push_back(key);
        else {
            int temp = dq.front();
            dq.pop_front();
            mp.erase(temp);
            dq.push_back(key);
        }
    }
    else{
        mp[key] = value;
        for(deque<int>::iterator itr = dq.begin() ; itr!=dq.end(); itr++) {
            if(*itr==key){
                dq.erase(itr);
                break;
            }
        }
        dq.push_back(key);
    }
    return;
}

int LRUCache::get(int key){
    if(mp.find(key) == mp.end()) return -1;
    set(key, mp[key]);
    return mp[key];
}




// { Driver Code Starts.

//Initializing static members
unordered_map<int, Node*> temp;
int LRUCache::capacity=0;
Node * LRUCache::head= new Node(0,0);
Node *  LRUCache::tail= new Node(0,0);
int LRUCache::count= 0;
unordered_map<int, Node*> LRUCache::hsmap= temp;



int main() {
	int t;
	cin>>t;
	while(t--)
	{

	    int capacity;
	    cin>>capacity;
	    int queries;
	    cin>>queries;

	    LRUCache *cache = new LRUCache(capacity);
	    while(queries--)
	    {
	        string q;
	        cin>>q;
	        if(q=="SET")
	        {
	            int key;
	            cin>>key;
	            int value;
	            cin>>value;

	            cache->set(key,value);

	        }
	        else
	        {
	            int key;
	            cin>>key;

	            cout<<cache->get(key)<<" ";

	        }
	    }

	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
