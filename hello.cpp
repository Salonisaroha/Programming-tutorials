#include<iostream>
using namespace std;
int main(){
   cout<<"hello world!";
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    cout<<"my age is"<<age;
    int x,y,z;
    cout<<"enter three no.";
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"first number is"<<x<<endl;
    cout<<"second number is"<<y<<endl;
    cout<<"third no. is"<<z<<endl;

    if(x>y && x>z){
        cout<<"x is greater than y and z";
    }
    else{
        cout<<"x is smaller than y and z";
        int marks;
        cout<<"enter your marks here : ";
        cin>>marks;
        cout<<"my marks is ";
         (marks>=90)? (cout<<"your grade is A+"): (cout<<"you are pass");// ternary or conditional operator.
         // LOOPS For loop;
         int i;
         for(i=0; i<=10; i++){
            cout<<i<<endl;
         }
         // While loop;
         int y = 1;
         
         
         while(y<=10){
            cout<<y*2<<endl;// table of two is prin by using while loop.
            y++;

         }
         int a = 0;
         do{
            cout<<a*5<<endl;
            a++;
         }
         while(a<=10); // table of 5 is print here.
         int a,b;
         cout<<" enter two numbers "<<endl;
         cin>>a>>b;
         for(a=1; a<b; a++){
            cout<<a&&b;
         }
         int button;
         //cin>>button;
         //cout<<"enter button ";
         switch(button){
            case 1:
            cout<<"hello saloni"<<endl;
            break;
            case 2 :
            cout<<"hello gayu"<<endl;
            break;
            case 3 :
            cout<<"hello tanu"<<endl;
            break;
            case 4:
            cout<<"hello riya" <<endl;
            break;
            default :
            cout<<"hello saroha's family";
            break;


         }

         
    }

    }




