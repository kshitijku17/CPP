/*#include <iostream>
using namespace std; 
int main(){
    return 0;
}*/
    // WAP to revesed the element inside an array
/*
        int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,temp;
    cout<<"Orgiginal array: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    cout<<"Revesed array: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    */
// WAP to sum 2 numbers using function
/*
 int sum(int x, int y){
    cout<<"the sum is "<<x+y<<endl;
    [int main]
    int a=1,b=2;
    sum(a,b);
    }
*/
// WAP to find the factroial of a number
/*
int fact (int n){
    if(n==1 || n==0){
    return 1;
    }
    return fact (n-1)*n;
}
    [int main]
int a=5;
cout<<"The factorial of "<<a<< " is "<<fact(a)<<endl;
*/
// WAP to find AVG of 3 number using function
/*
float avg(int x, int y, int z){
    return (x+y+z)/3.0;
}
    [int main]
int a,b,c;
cout<<"Enter 3 numbers: "<<endl;
cin>>a>>b>>c;
cout<<"Avg is "<<avg(a,b,c);
*/
// WAP to find fibonacci series
/*
int fib(int a){
    if(a==1|| a==2){
        return a-1;
    }
    return fib(a-1)+fib(a-2);
}
    [int main]
int x;
cout<<"Enter the number "<<endl;
cin>> x;
cout<<"Vlaue of fib is "<<fib(x);
*/
// WAP to swap 2 number using function 
/*
void swap(int &x,int &y){
    cout<<"before swapping "<< x <<" and "<< y <<endl;
    int temp = x;
    x=y;
    y=temp;
    cout <<"After swapping "<< x <<" and "<< y <<endl;
}
    [int main]
int a=5,b=10;
swap(a,b);
*/
// WAP to Find grade of a student
/*
int x;
cout<<"Enter the value of x"<<endl;
cin>> x;
if(x>90 && x<=100){
   cout<<"A grade "<<endl;
}
else if(x>80 && x<=90){
    cout<<"B grade "<<endl;
}
else if(x>70 && x<=80){
    cout<<"C grade "<<endl;
}
else if(x>60 && x<=70){
    cout<<"D grade "<<endl;
}
else if(x>50 && x<=60){
    cout<<"E grade "<<endl;
}
else if(x>40 && x<=50){
    cout<<"P grade "<<endl;
}
else if(x>30 && x<=40){
    cout<<"S grade "<<endl;
}
else{
    cout<<"F grade fail";
}
*/
// WAP to write reversed a table
/*
int n=10;
for(int i=5; i>=1; i--){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
}*/
// WAP to find a number is postive or zero or negative 
/*
int x;
cout<<"Enter any value: "<<endl;
cin>>x;
cout<<((x>=0)?((x==0)?"Zero":"positve"):"Negative");
*/
// WAP to find Leap year 
/*
int year;
cout<<"Enter year: "<<endl;
cin>>year;
if((year%4 ==0 && year%100 !=0) || year%400 == 0){
    cout<<"This is a leap year"<<endl;
}
else{
    cout<<"This isn't a leap year"<<endl;
}
*/
// WAP to print sum of 1st 5 natural number 
/*
int i=1;
int sum=0;
while (i<=5)
{
    sum += i;
    i++;
}
cout<<"the sum of 1st 5 natural number is "<< sum <<endl;
*/
// WAP to print to print partten in rightangle triangle partten
/* int a=3;
for(int i=1; i<=a; i++){
    for(int j=0; j<(2*i)-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
*/
// WAP to print element of array 
/* int CGPA[] = {8,7,9};
for (int i=0; i<3; i++){
    cout<<"The CGPA is " <<CGPA[i]<<endl;
}
*/
// WAP to print ASIIC value of any character
/* char ch;
cout<<"Enter a character : "<<endl;
cin>>ch;
cout<<"ASCII value is "<<int(ch)<<endl;
*/
