#include <iostream>
#include <queue>

using namespace std;

void showQ(queue <int> gq){

    queue <int> g = gq;
    
    while(!g.empty()){
        cout << "\t" << g.front();
        g.pop();
    }
    cout << endl;
}

int main(){
    queue <int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "The queue q is: " << endl;
    showQ(q);

    cout << "q.size() : " << q.size()<< endl;
    cout << "q.front() : " << q.front()<< endl;
    cout << "q.back() : " << q.back()<< endl;
    cout << "q.pop() : "<< endl;
    q.pop();
    showQ(q);
    
    return 0;
}