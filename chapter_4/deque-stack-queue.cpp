#include <iostream>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

namespace Deque {
    void print_forward(deque<int> &d) {
        deque<int>::iterator iter;
        for (iter = d.begin(); iter != d.end(); iter++) {
            cout << *iter << ' ';
        }
        cout << endl;
    }
}

namespace Stack {
    void pop_and_show(stack<char> &s) {
        while (s.size() != 0) {
            cout << s.top() << " going to be deleted" << endl;
            s.pop();
        }
    }
}

namespace Queue {
    void show_first(queue<int> &q) {
        cout << "current queue front: " << q.front() << endl;
    }

    void go_through(queue<int> &q) {
        while (q.size() != 0) {
            cout << q.front() << ' '; 
            q.pop();
        }
        cout << endl;
    }
}

int main() {
    deque<int> d;
    d.push_back(4);
    d.push_back(3);
    d.push_front(2);
    d.push_front(1);

    Deque::print_forward(d);

    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('e');
    s.push('f');

    Stack::pop_and_show(s);

    queue<int> q;
    q.push(6);
    q.push(4);
    q.push(2);
    q.push(3);
    q.push(9);
    Queue::show_first(q);
    Queue::go_through(q);
}
