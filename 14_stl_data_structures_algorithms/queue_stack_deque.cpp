// Contoh queue, stack, dan deque
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int main() {
  queue<int> q;    // FIFO
  q.push(1); q.push(2); q.push(3); // tambahkan
  cout << q.front() << "\n";       // lihat depan

  stack<int> st;  // LIFO
  st.push(7); st.push(8);
  cout << st.top() << "\n";        // lihat puncak

  deque<int> d;   // double-ended queue
  d.push_front(5); d.push_back(6);
  cout << d.front() << " " << d.back() << "\n"; // ujung-ujung
  return 0;
}
