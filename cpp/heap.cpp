#include <iostream>
using namespace std;

class Heap{
    int *a;
    int n;
    int n_max;

public:
    Heap(int capacity);
    void heapify(int i);
    int getMin(){ return a[0]; }
    int extractMin();
    void decreaseKey(int i,int x_new);
    void del(int i);
    void ins(int x);
};

Heap::Heap(int capacity){
    n = 0; n_max = capacity;
    a = new int[capacity];
};

void Heap::heapify(int i){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int smallest = i;
    if (l<n && a[l]<a[i]) smallest = l;
    if (r<n && a[r]<a[smallest]) smallest = r;
    if (smallest!=i){
        swap(a[i],a[smallest]);
        heapify(smallest);
    }
}

void Heap::decreaseKey(int i,int x_new){
    a[i] = x_new;
    while(i != 0 && a[i]<a[(i-1)/2]){
       swap(a[i], a[(i-1)/2]);
       i = (i-1)/2;
    }
}

int Heap::extractMin(){
    if (n<=0) return 9999999;
    if (n==1){ n--; return a[0]; }

    int root = a[0];
    a[0] = a[n-1];
    n--; heapify(0);

    return root;
}

void Heap::ins(int x){
    if(n==n_max) return;
    n++; a[n-1] = x;

    int i = n-1;
    while (i != 0 && a[i]<a[(i-1)/2]){
       swap(a[i],a[(i-1)/2]);
       i = (i-1)/2;
    }
}

void Heap::del(int i){
    decreaseKey(i,-999999);
    extractMin();
}

int main(){
    Heap heap(11);
    heap.ins(3);
    heap.ins(2);
    heap.del(1);
    heap.ins(15);
    heap.ins(5);
    heap.ins(4);
    heap.ins(45);

    cout<<heap.extractMin()<<endl;
    cout<<heap.getMin()<<endl;
    return 0;
}
