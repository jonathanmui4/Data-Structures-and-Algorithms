#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class Queue {
    private:
        stack<int> stack1;
        stack<int> stack2;
    
    public:
        void enqueue(int element) {
            stack1.push(element);
        }
        
        void dequeue() {
            if (stack2.empty()) {
                while (!stack1.empty()) {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }  
            stack2.pop();
        }
        
        void peek() {
            if (!stack2.empty()) {
                cout << stack2.top() << endl;
            }
            else {
                while (!stack1.empty()) {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
                cout << stack2.top() << endl;
            }
        }
        
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int queries;
    cin >> queries;
    
    Queue queue = Queue();
    
    for (int i = 0; i < queries; i++) {
        int fn, data;
        cin >> fn;
        cin.ignore();
        
        switch(fn) {
            case 1:
                cin >> data;
                queue.enqueue(data);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.peek();
                break;
            default:
                cout << "Invalid Function\n";
        }
    }
    
    return 0;
}
