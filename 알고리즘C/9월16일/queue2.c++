#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
    priority_queue<int, vector<int>, greater<int>> q; //vector<int>, greater<int> 작은 수, 없으면 큰 수
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(10);
    q.push(5);
    cout << q.top();
}