/*#include <iostream>
using namespace std;
int main(){
    return 0;
}*/
// WAP to write multiplication table 
/* 
int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int i=1;i<11;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    */
// WAP to find the sum of and interger value 
/*
 int num,ON,sum=0;
    cout<<"Enter an integer "<<endl;
    cin>>num;
    ON = num;
    while(num>0){
        int dig = num%10;
        sum += dig;
        num = num/10;
    }
    cout<<"Sum of digits of "<<ON<<" is "<<sum<<endl;
*/ 
//WAP to find a number is prime or not
/*
int n,i,is_prime = 1;
    cout<<"Enter a postive no.: "<<endl;
    cin>>n;
    if(n==1){
        cout<<"1 is nether prime nor compostie number"<<endl;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1){
        cout<<n<<" is a prime no."<<endl;
    }
    else{
        cout<<n<<" is not a prime no."<<endl;
    }
*/
// WAP to print factorial of a number
/*
int n,pro=1,i=1;
cout<<"Enter the number: "<<endl;
cin>>n;
while(i<=n){
    pro = pro*i;
    i++;
}cout<<"Factorial of given no. is "<<pro<<endl;
*/
// WAP to print arthematic operation 
/* 
   int x,y,add=0;
    cout<<"Enter the value of x and y"<<endl;
    cin>> x>> y;
    add = x+y;
    cout<<"The sum is = "<<add; 
*/
// WAP to print a number in reverse order
/*
int x,rev=0,rem;
cout<<'Enter value: '<<endl;
cin>>x;
while(x!=0) {
    rem=x%10;
    rev=rev*10+rem;
    x=x/10;
}
cout<<'reverse number is: '<< rev;
*/
// WAP to print number using loop
/*
int x=3;
for(int i=1;i<=x; i++){
    cout<<'The value is = '<<i<<endl;
}
*/
//WAP to find the charcter is vowel or not
/*
char x;
cout<<"Write an aplhabate"<<endl;
cin>>x;
if(x=='a'|| x=='A'|| x=='e'|| x=='E'|| x=='i'|| x=='I'|| x=='o'|| x=='O'|| x=='u'|| x=='U'){
    cout<<"This is a vowel";}
    else{
    cout<<"this is not vowel";
}
*/
//WAP to use while loop
/* 
int i=1;
while (i<=5)
{
    cout<<"number is "<<i<<endl;
    i++;
} 
*/
// WAP to use classes
/*
#include <iostream>
using namespace std;

class person
{
    char name[30];
    int age;

public:
    void getdata();
    void display();
};

void person::getdata()
{
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;
}

void person::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    person p;
    p.getdata();
    p.display();

    return 0;
}
*/
//  Use of pointers 
/*  
#include<iostream>
using namespace std;
int main(){
    int age = 21;
    int *pAge= &age;

    cout<<"address of age: "<<&age<<endl;
    cout<<"address of pAge: "<<&pAge<<endl;

    cout<<"size of age: "<<sizeof(age)<<endl;
    cout<<"size of pAge: "<<sizeof(pAge)<<endl;

    cout<<"Value of age: "<<age<<endl;
    cout<<"Value of pAge: "<<pAge<<endl;

    cout<<"Value at address stored at Page: "<<*pAge<<endl;
}
*/ 