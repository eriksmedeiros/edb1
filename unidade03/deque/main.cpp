#include <iostream>
#include <deque>

using namespace std;

void showDq(deque<int> g){
    deque <int> :: iterator it;
    for (it=g.begin();it!=g.end();++it)
    cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque <int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(15);
    cout << "The deque d is : "<< endl;
    showDq(d);

    cout << "d.size() : " << d.size()<< endl;
    cout<<"d.max_size() : "<< d.max_size()<< endl;

    cout << "d.at(2) : " << d.at(2)<< endl;
    cout << "d.front() : " << d.front()<< endl;
    cout << "d.back() : " << d.back()<< endl;

    cout << "d.pop_front() : "<< endl;
    d.pop_front();
    showDq(d);

    cout << "d.pop_back() : "<< endl;
    d.pop_back();
    showDq(d);

    return 0;
}