#include <iostream>  
using namespace std;  

class stack {
    public:
        int top;
        int* arr;
        int size;
        
    public:
        stack(int capacity) {
            size = capacity;
            top = -1;
            arr = new int[capacity];
        }
        
        ~stack() {
            delete[] arr;  // Destructor to free allocated memory
        }
        
        void push(int value) {
            if (top == size-1) {
                cout << "stack is overflow";
            }
            else {
                arr[++top]=value;
                cout << "A " << arr[top] << "value got inserted \n"; 
            }
        }
        void Vdelete(){
            if(top==-1){
                cout << "stack is underflow ";
                return;
            }
            else{
                --top;
            }

        }
        void Display(){
            int current = top;
            while(current!=-1){
                cout << arr[top] << endl;
                --current;
            }
        }
};

int main() {
    cout << "hn ji " << endl;
    
    stack s(5); 
    s.push(2);
    s.push(3);
    s.push(4);

    s.Display();
    
    return 0;
}



