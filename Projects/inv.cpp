// Inventory System
#include <iostream>
using namespace std;
class inventory{
    int item[100];
    int size,capacity;
    bool isVaildIndex(int index){
        return index>=0 && index<size;
    }
    public:
    inventory(int cap = 100){
        capacity = cap;
        size = 0;
    }
void add(int value){
    if(size>=capacity){
        cout<<"Full"<<endl;
        return;
    }
    item[size] = value;
    size++;
}
void insert(int value){
    if(size>=capacity){
        cout<<"Full"<<endl;
        return;
    }
    item[size++] = value;
    cout<<"Value insert sucessfully"<<endl;
}
void insertAt(int index, int value){
    if(size>=capacity){
        cout<<"Full"<<endl;
        return;
    }
    for(int i=size; i>index; i--){
        item[i] = item[i-1];
    }
    item[index] = value;
    size++;
}
void deleteAt(int index){
    if(!isVaildIndex(index)){
        cout<<"Invaild position"<<endl;
        return;
    }
    for(int i=index; i<size; i++){
        item[i] = item[i+1];
    }
    size--;
}
void search(int value){
    bool found = false;
    for(int i=0; i<size; i++){
        if(item[i] == value){
            cout<<"Here is your item "<<value<<" at and index of "<<i<<endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout<<"Item"<<value<< "Not found"<<endl;
    }
}
void update(int index, int value){
    if(!isVaildIndex(index)){
        cout<<"Invaild position"<<endl;
        return;
    }
    item[index] = value;
    cout<<"Update success"<<endl;
}
void display(){
    for(int i=0; i<size; i++){
        cout<<"Items are: "<<item[i]<<endl;
    }
}
void max_min(){
    int max = item[0];
    int min = item[0];
    for(int i=0; i<size; i++){
        if(max<=item[i]){
            max = item[i];
        }
        if(min>=item[i]){
               min = item[i];
        }
    }
    cout<<"Max item is "<<max<<endl;
    cout<<"Min item is "<<min<<endl;
}

void count(){
        cout<<"Total items are: "<<size<<endl;
    }
};

int main(){
    int value,n,index,choice;
    inventory inv;
    cout<<"Enter size of items "<<endl;
    cin>>n;
    cout<<"Enter items "<<endl;
    for(int i=0; i<n; i++){
        cin>>value;
        inv.add(value);
    }
        cout << "\n----- Inventory System -----\n";
        cout << "1.Insert at end \n";
        cout << "2.Insert at position \n";
        cout << "3. Delete \n";
        cout << "4. Update \n";
        cout << "5. Search \n";
        cout << "6. Max & Min \n";
        cout << "7. Count \n";
        cout << "Enter choice: ";
        cin >> choice;
         switch (choice)
        {
            case 1:
            cout<<"Enter value "<<endl;
            cin>>value;
            inv.insert(value);
            inv.display();
            break;

            case 2:
            cout<<"Enter index and value "<<endl;
            cin>>index;
            cin>>value;
            inv.insertAt(index,value);
            inv.display();
            break;

            case 3:
            cout<<"Enter index "<<endl;
            cin>>index;
            inv.deleteAt(index);
            inv.display();
            break;

            case 4:
            cout<<"Enter index and value "<<endl;
            cin>>index;
            cin>>value;
            inv.update(index,value);
            inv.display();
            break;

            case 5:
            cout<<"Enter value "<<endl;
            cin>>value;
            inv.search(value);
            break;

            case 6:
            cout<<"Min and Max are "<<endl;
            inv.max_min();
            break;

            case 7:
            inv.count();
            break;

            default: cout<< "Invaild choice "<<endl;
            break;
        }
        
    } 