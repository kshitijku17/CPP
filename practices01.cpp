/*#include <iostream>
using namespace std; 
int main(){
    return 0;
}*/
// WAP to find a character is alphanumeric or not
/* 
char ch;
    cout<<"Enter a character "<<endl;
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='a')){
        cout<<ch<<" is alphanumeric character"<<endl;
    }
    else{
        cout<<ch<<" is not alphanumeric character (it's a symbol)"<<endl;
    }*/
// WAP to print the list of colors 
/*
 const char* colors[]={"Red","Green","Blue","Yellow","Pinks"};
    int n = sizeof(colors)/sizeof(colors[0]);
    cout<<"List of colors: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Color"<<i+1<<":"<<colors[i]<<endl;
    }
*/
// WAP to find the string length
/*
char str[]="OOPS using C++";
int len=0;
cout<<"String: "<<str<<endl;
for(int i=0; str[i]!='\0';i++){
    len++;
}
cout<<"Length of the string is "<<len<<endl;
*/
// WAP to find the element in array and also find the index of it
/*
        int arr[] = {10,4,5,15,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int traget,i,found=0;
    cout<<"Enter element to search: "<<endl;
    cin>>traget;
    for(i=0;i<n;i++){
        if(arr[i] == traget){
            found = 1;
            break;
        }
    }
    if(found){
    cout<<"Element " <<traget<< " found at index " <<i<<endl;
    }
    else{
        cout<<"Element " <<traget<< " not found in array"<<endl;
        }
    */
// WAP to find 1st and last digit of a number 
/*
    int x,y,z;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    z=x%10;
    y=x;
    while(y>=10){
        y = y/10;
    }
cout<<"1st digit is "<<y<<" & last digit is "<<z<<endl;
    */
// WAP to change the value using Pointers
/*
void change (int*i){
    *i = *i*10;
}
    [int main()]
    int a=6;
    int *b = &a;
    cout<<"The value of a is "<<a<<endl;
    change(&a);
    cout<<"The value of a is "<<a<<endl;
*/
// WAP to print sum of araay elements using pointers
/*
    int arr[]={5,10,15,20,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int*ptr = arr;
    cout<<"Array element: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0; i<n; i++){
        sum+=*(ptr+i);
    }
    cout<<"Sum of all element inside array: "<<sum<<endl;
    */
