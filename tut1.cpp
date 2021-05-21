
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             break;
// continue; //breaks the current iteration and the functionalities after the continue statement and moves to the next iteration
//             //breaks the whole loop and doesnt iterates over it again
//         }
//         cout <<i << endl;
//     }
//     return 0;
// }
/*pointer:'
          datatype that holds the address of otherdata types*/
// #include <iostream>
// using namespace std;
// int main()
// {
// int a=10;
// // cout<<&a<<endl;//& amperand is the operator used to get the address
// int* bb=&a;// ||* is the dereference operator used to make pouinter variable
// // cout<<*bb<<endl;//||||||||||||||||||||||||||||||||
// // // when we use [* and address holding pointer variable]==[we get the value that is stored at that address]
// //pointer to pointer
// // cout<<bb<<endl;
// int** az =&bb;
// int*** azz=&az;
// cout<<**az<<endl;
// cout<<***azz;

//||   ARRAY i.e list
//     string db[4] = {"sql", "nosql", "fauna",};
//     //  cout<<db[0]<<endl;
//     // cout << db[1] << endl;
//     //  cout<<db[2]<<endl;
//     db[3] = "firebase";
//     // cout << db[3] << endl;
//     for(int i=0;i<=3;i+=1){
//         cout<<db[i]<<endl;
//     }
//     cout<<"this is while loop";
//     int ii=0;
//     while(ii<=3){
//         cout<<db[ii]<<endl;
//         ii++;

//     }
//     cout<<"using do while loop";
//     ii=0;
//     do{
//         cout<<db[ii]<<endl;
//         ii++;
//     }while(ii<=3);
//     return 0;
// }
//begining code at 12:12 arrays and pointers arithmetic
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={1,2,3,4,5};
//     int* p = marks;
//     cout<<*(p++);
//     // cout<<*(p++);
//     // cout<<*(p++);
//     cout<<*(p);
//     cout<<*(++p);
//     cout<<*(++p)<<endl;
//     cout<<*p;
//     // cout<<*p<<endl;

//     // cout<<*(p+1)<<endl;
//     // cout<<*(p+2)<<endl;
//     // cout<<*(p+3)<<endl;
//     // cout<<*(p+1);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// typedef struct employee
// {
//     /* data */
//     int apples;
//     float salary;
//     string passkey;
// }ep;

// int main() {
//     ep harish ;
//     harish.apples=9;
//     harish.salary=10.000;
//     harish.passkey="66cvb";
//     // cout<<harish.apples;
//     cout<<harish.passkey<<endl<<harish.salary;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// // union money
// // {
// //     /* data */
// //     char name;
// //     float price;// //     int weight;
// // };

// int main(){
//     enum meal{banana,milk,curd,shrikhand,fruits};
//     meal day1meal=fruits;
//     cout<<day1meal<<endl;
//     cout<<(day1meal==4);
//     // cout<<(day1meal==2);
//
// union money bag;
//     // bag.name='b';
//     // bag.weight=55;
//     // cout<<bag.weight<<endl;
//     // bag.price=66.5655;
//     // cout<<bag.weight;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sum(int,int);
// void g(void);
// // void g(){
// //     cout<<"okli";
// // }
// // int sum(int a,int b);
// int main(){
//     int aa, bxb;
//     g();
//     cout<<"enter the first number"<<endl;
//     cin>>aa;//giving arguement via user by taking
//     cout<<"enter the second number"<<endl;
//     cin>>bxb;
//     cout<<sum(aa,bxb)<<endl;
//     // cout<<sum(2,8);//giving arguements in code
//     return 0;
// }
// int sum(int a, int b){
//     int c=a+b;

//     return c;
// }
// void g(){
//     cout<<"okli";
// // }
// #include<iostream>
// using namespace std;
// int swapper(int* a,int* b){
//     int copya=*a;
//     *a=*b;
//     *b=copya;

//     // a=bcopy;
//     // b=acopy;

//     //  cout<<"value at a is"<<a<<endl;
//     // cout<<"value at b is"<<b<<endl;
//     return 0;
// }
// int main(){
//     int af=9;
//     int gh=78;
//     cout<<"value at af is"<<af<<endl;
//     cout<<"value at gf is"<<gh<<endl<<endl<<endl<<endl<<endl;
//     swapper(&af,&gh);
//     cout<<"value at af is"<<af<<endl;
//     cout<<"value at gf is"<<gh<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int swapreferencevar(int &a,int &b){
//      int tempa=a;
//      a=b;
//      b=tempa;
//      return 0;
// }
// int main(){
//     int aa=7;
//     int bb=90;
//     swapreferencevar(aa,bb);
//     cout<<"value at af is"<<aa<<endl;
//  cout<<"value at gf is"<<bb<<endl;
//     return 0;
// }
// //begin at inline functions

// #include <iostream>
// using namespace std;

// inline
// int product(int a, int b){
//     // Not recommended to use below lines with inline functions
//     static int c = 0; // This executes only once
//     c = c + 1;        // Next time this function is run, the value of c will be retained
//     //    return a*b
//     cout << c<<endl;
//     return 0;
// }

// float moneyReceived(int currentMoney, float factor=1.04){
//     return currentMoney * factor;
// }

// // // int strlen(const char *p){

// // // }
// int main()
// {
//     int a = 9, b = 7;
//     cout << product(a, b);
//     cout << product(a, b);
//     cout << product(a, b);
//     cout << product(a, b);
//     cout << product(a, b);
//     cout << product(a, b);
//     cout << product(a, b);

//     // cout<<"Enter the value of a and b"<<endl;
//     // cin>>a>>b;
//     // cout<<"The product of a and b is "<<product(a,b)<<endl;
//     int money = 100000;
//     // cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
//     // cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int factorialistic(int n){
//     if(n<=1){
//         return 1;
//     };
//     return n*factorialistic(n-1);
// }
// int fibannaci(int a)
// {
//     if (a < 2)
//     {
//         return 1;
//     }

//     else
//     {
//         return fibannaci(a - 2) + fibannaci(a - 1);
//     }
// }
// int square(int a,int b){
//     return a+a;
// }
// int square(int a){
//     return a*a;
// }
// int main()
// {int aa;
//     int a;
//     cin >> a;
//     cin>>aa;
//     cout <<

//      "fibonaci sequence of" << a << "is" << square(a,aa);
//     return 0;
// }

//     }
// }
// #include<iostream>
// using namespace std;
// class shop{
// private:
// int itemid[100];
// int itemprice[100];
// int counter;
// public:
// int  initcounter(){counter=0;}
// int setprice();
// int  display();
// };
// shop:: setprice(){
//     cout<<"enter the id of your item"<<endl;
//     cin>>itemid[counter];
//     cout<<"enter the price of your item"<<endl;
//     cin>>itemprice[counter];
//     counter++;
//     return 0;
// }
// shop:: display(){
//     for(int i=0;i<counter;i++){
//         cout<<"id is["<<itemid[i]<<"]"<<"price is"<<itemprice[i]<<endl;
//         // return 0;
//     }
// }
// //initcounter just inialze counters value to 0
// //set price
// ////displace price with
// int main(){
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.setprice();

//     dukaan.display();
//     return 0;
// }
/*
static data member*/
// #include<iostream>
// using namespace std;
// class employee{
// static int id;
// static int count;
// public:
// void setdata(void){
//     cout<<"enter the  id "<<endl;
//     cin>>id;
//     count++;
// }
// void getdata(void){
//     cout<<"this is id["<<id<<endl;
// }
// static void getcounts(void){//static member function is a function that can be accesed only by (classname::functionname)
//     cout<<"count is "<<count<<endl;
//     cout<<id<<":this is id"<<endl;
// }
// };
// int employee::count;//by this we initialze count as a static member
// int employee::id;//by this we initialze id as a static member
// int main(){
//     employee sde1,sde2,sde3;
//   sde1.setdata();
//   sde1.getdata();
//   employee::getcounts();
//    sde2.setdata();
//   sde2.getdata();
//     employee::getcounts();

//   sde3.setdata();
//   sde3.getdata();
//   employee::getcounts();

//     return 0;
// }
// // >> >> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->>  array of objects  ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->>
// #include<iostream>/                                                                                                                               |
// using namespace std;//                                                                                                                            |
// class employee{//                                                                                                                                 |
// int id;//
// int salary;//
// public://
// void setId(void){//
//     salary=122;//
//     cout<<"enter  the id of employee"<<endl;//
//     cin>>id;//
// }//
// void getid(void){//
//     cout<<"the id of this employee is"<<id<<endl;}//
//     };//
// int main(){//
//     employee fb[4];//array of objects 0th index 1st object upto its size
//     for (int i = 0; i < 4; i++)//
//     {//
//         fb[i].setId();//
//         //
//         fb[i].getid();//
//     }//
//     //
//     return 0;//
// }//
// // >> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->>  array of objects  ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->> ->>

//                                                  MAKING ARRAY OF OBJECTS AND PASSING THEM AS ARGUEMENT IN A FUNCTION

// #include <iostream>
// using namespace std;
// class complex
// {
//     static int index;
//     int a;
//     int b;

// public:
//     void setdata(void)
//     {

//         cout << "enter value of a for" << index << "index now" << endl;
//         cin >> a;
//         cout << "enter value of b for" << index << "index now" << endl;
//         cin >> b;
//         index += 1;
//     }
//     void displayouts(void)
//     {

//         cout << "display a///" << a << endl;
//         cout << "display b///" << b << endl;
//     }
//     void sumdataof_objects(complex cc, complex bb)
//     {
//         a = cc.a + bb.a;
//         b = bb.b + cc.b;
//         cout << "value has been assigned to third object successfully";
//     }
// };
// int complex::index;
// int main()
// {

//     complex arrobj[2];
//     arrobj[0].setdata();
//     arrobj[1].setdata();
//     arrobj[0].displayouts();
//     arrobj[1].displayouts();
//     arrobj[2].sumdataof_objects(arrobj[0], arrobj[1]);
//     arrobj[2].displayouts();
//     return 0;
// }

//                                                  MAKING ARRAY OF OBJECTS AND PASSING THEM AS ARGUEMENT IN A FUNCTION

//                                                  MAKING SIMPLE OBJECTS AND PASSING THEM AS ARGUEMENT IN A FUNCTION
// #include<iostream>
// using namespace std;
// class complex{
// int a;
// int b;
// public:
// void setdata(void){
//     cout<<"enter value of a now"<<endl;
//     cin>>a;
//         cout<<"enter value of b now"<<endl;
//     cin>>b;
// }
// void displayouts( void){

//     cout<<"display a///"<<a<<endl;
//     cout<<"display b///"<<b<<endl;
// }
// void sumdataof_objects(complex cc,complex bb){
//     a=cc.a+bb.a;
//     b=bb.b+cc.b;
//     cout<<"value has been assigned to third object successfully";
//     }
// };
// int main(){
//     complex uy,ui;
//     complex arrobj;
//     uy.setdata();
//     ui.setdata();
//  arrobj.sumdataof_objects(uy,ui);
//     arrobj.displayouts();
//     return 0;
// }

//                                                  MAKING SIMPLE OBJECTS AND PASSING THEM AS ARGUEMENT IN A FUNCTION
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;
//     public:
//     void setnum(int ax,int bx)
//     {
//        a=ax;
//        b=bx;
//     }
//     friend complex sumdata(complex o1, complex o2);

//     void getnum()
//     {
//         cout << "value of a is [" << a << "] value of b is [" << b << "]" << endl;
//     };
// };
// complex sumdata(complex o1, complex o2)
// {complex o3;
// o3.setnum((o1.a+o2.a),(o1.b+o2.b));
// return o3;
// //this is a friend function and this function is able to access data or members of complex class even it is a non member with the help of friend;
// //so when a function is written outside  aclass it cn ccess class member or data only if it is friend of thta class therefore we have declard it as afriend function;
// //a friend function can only access members of a class but it cannot change members of that class;
// }
// int main()
// {
// complex one,two,three;
// one.setnum(22,33);
// one.getnum();
// two.setnum(44,66);
// one.getnum();
// three=sumdata(one,two);
// three.getnum();
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class a1{};

// class a2{
//     int a=22;
//     int b=55;
// };
// int main(){

//     return 0;
// }
// #include <iostream>
// using namespace std;
// //forward declaration
// class Complex;
// class Calculator
// {
// public:
//     int add(int a, int b) { return (a + b); }
//     int sumRealComplex(Complex, Complex);
//     int sumcompComplex(Complex, Complex);
// };
// class Complex
// {
//     int a, b;
//     //individuaaly declaringfunctions as friend
//     // friend int Calculator ::sumRealComplex(Complex,Complex);
//     // friend int Calculator ::sumcompComplex(Complex,Complex);
//     //Aliter:Declarinf the entire calculator classas friend
//     friend class Calculator;

// public:
//     void setnumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNum()
//     {
//         cout << "your number is" << a << "+" << b << "i" << endl;
//     }
// };
// int Calculator::sumRealComplex(Complex o1,Complex o2){
//     return (o1.b+o2.b);
// }
// int Calculator::sumcompComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }

// int main()
// {Complex a,b;
// a.setnumber(1,2);
// b.setnumber(3,4);
// Calculator cc;
// cout<<cc.sumcompComplex(a,b)<<endl;
// cout<<cc.sumRealComplex(a,b);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class c2;//initialization of class for compiling at line of code:: 570
// class c1
// {
//     int val1;
    

// public:
// friend void exchange(c1 &, c2 &);
//     void indata(int a)
//     {
//         val1 = a;
//     }
//     void display(void)
//     {
//         cout << val1 << endl;
//     }
// };
// class c2
// {
//     int val2;
//     friend void exchange(c1 &, c2 &);

// public:
//     void indata(int a)
//     {
//         val2 = a;
//     }
//     void display(void)
//     {
//         cout << val2 << endl;
//     }
// };
// /*trick to swap 2 num. a and b:
// temp =a;
// a=b;
// b=temp;*/
// void exchange(c1 &x, c2 &y)//&x and &y are used to access the address of that object and then get the data stored in that particular object::
// {
//     int tmp = x.val1;//x and y are objects
//     x.val1 = y.val2;
//     y.val2 = tmp;
// }
// int main()
// {
//     c1 oc1;
//     c2 oc2;
//     oc1.indata(11);
//     oc1.display();
    
//     cout<<"oc1"<<endl; 

//     oc2.indata(22);
//     cout<<"oc2"<<endl;
//     oc2.display();
//     exchange(oc1, oc2);
//     cout << "c1 after exchg" << endl;
//     oc1.display();
//     cout << "c2 after exchg" << endl;
//     oc2.display();
//     return 0;
// }
/*
//////////////////////////////////////////////////
///////////////////////////////////////////////// constructors in c++
*/
#include<iostream>
using namespace std;
class construc_or{
    int a,b;
    public:
    //constructors are always made in public
    construc_or(void){//this is one of two type of constructor which is named default constructor
        a=99;
        b=99;
        cout<<"after assigning values a is"<<a<<"b is"<<b<<endl;
    }
    void dis(void){
        cout<<a<<b<<endl;
    }
};
int main(){
    construc_or fg,hg;
    // fg.dis();
    // hg.dis();
    return 0;
}/*
//////////////////////////////////////////////////
///////////////////////////////////////////////// constructors in c++
*/