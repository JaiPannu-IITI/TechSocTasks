#include <iostream>
using namespace std;

int main()
{   int i;
     i=1;
     while (i==1){

    cout<<"Which calculation do you want to perform?"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exponentation"<<endl;
    cout<<"6. Trigonometric (first quadrant)"<<endl;
    int a;
    cin>>a;
    if (a==1){
        double n1;
        double n2;
        cout<<"Enter First Number?"<<endl;
        cin>>n1;
        cout<<"Enter Second Number?"<<endl;
        cin>>n2;
        cout<<"The Sum is\n"<<n1+n2<<endl;
    }

    else {
        //nothing
    }

    if (a==2){
        double n1;
        double n2;
        cout<<"Enter First Number?"<<endl;
        cin>>n1;
        cout<<"Enter Second Number?"<<endl;
        cin>>n2;
        cout<<"The Difference is\n"<<n1-n2<<endl;
    }

    else {
        //nothing
    }

    if (a==3){
        double n1;
        double n2;
        cout<<"Enter First Number?"<<endl;
        cin>>n1;
        cout<<"Enter Second Number?"<<endl;
        cin>>n2;
        cout<<"The Product is\n"<<n1*n2<<endl;
    }

    else {
        //nothing
    }

    if (a==4){
        double n1;
        double n2;
        cout<<"Enter First Number?"<<endl;
        cin>>n1;
        cout<<"Enter Second Number?"<<endl;
        cin>>n2;
        cout<<"The Division is\n"<<n1/n2<<endl;
    }

    else {
        //nothing
    }

    if (a==5){
        cout<<"Enter the number?"<<endl;
        double n;
        cin>>n;
        cout<<"Enter the exponent of the number?"<<endl;
        int exp;
        cin>>exp;

        double x;
        x=n;

        for (int i=2; i<=exp;i++){
             x=x*n;

        }
        cout<<"The number raised to the following exponent equals\n"<<x<<endl;
       
        }
    if (a==6){
        cout<<"Which function do you want to perform?"<<endl;
        cout<<"1. Sin"<<endl;
        cout<<"2. Cos"<<endl;
        cout<<"3. Tan"<<endl;
        cout<<"4. Sec"<<endl;
        cout<<"5. Cosec"<<endl;
        cout<<"6. Cot"<<endl;

        int b;
        cin>>b;

        if (b==1){
        cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=1;
        double x1;
        x1=theta;

        for (int i=2; i<=exp;i++){
             x1=x1*theta;

        }

        exp=3;
        double x3;
        x3=theta;

        for (int i=2; i<=exp;i++){
             x3=x3*theta;

        }

        exp=5;
        double x5;
        x5=theta;

        for (int i=2; i<=exp;i++){
             x5=x5*theta;

        }

        double sintheta;
        sintheta = x1 - x3/6 + x5/120;

        cout<<"Sin of required angle is\n"<<sintheta<<endl;

    
        
        }
        else {
        //nothing
        }

        if (b==2){
        cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=2;
        double x2;
        x2=theta;

        for (int i=2; i<=exp;i++){
             x2=x2*theta;

        }

       
        exp=4;
        double x4;
        x4=theta;

        for (int i=2; i<=exp;i++){
             x4=x4*theta;

        }


        double costheta;
        costheta = 1 - x2/2 +x4/24;

        cout<<" Cos of required angle is\n"<<costheta<<endl;



    
        
        }
        else {
        //nothing
        }

        if (b==3){
        cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=1;
        double x1;
        x1=theta;

        for (int i=2; i<=exp;i++){
             x1=x1*theta;

        }

        exp=3;
        double x3;
        x3=theta;

        for (int i=2; i<=exp;i++){
             x3=x3*theta;

        }

        exp=5;
        double x5;
        x5=theta;

        for (int i=2; i<=exp;i++){
             x5=x5*theta;

        }

        double tantheta;
        tantheta = x1 + x3/3 + x5/15+ x5/15;

        cout<<"Tan of required angle is\n"<<tantheta<<endl;
        
    
        
        }
        else {
        //nothing
        }


        if (b==4){

             cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=2;
        double x2;
        x2=theta;

        for (int i=2; i<=exp;i++){
             x2=x2*theta;

        }

       
        exp=4;
        double x4;
        x4=theta;

        for (int i=2; i<=exp;i++){
             x4=x4*theta;

        }


        double costheta;
        costheta = 1 - x2/2 +x4/24;

        double sectheta;
        sectheta= 1/costheta;

         cout<<"Sec of required angle is\n"<<sectheta<<endl;
        }



        if (b==5){
        cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=1;
        double x1;
        x1=theta;

        for (int i=2; i<=exp;i++){
             x1=x1*theta;

        }

        exp=3;
        double x3;
        x3=theta;

        for (int i=2; i<=exp;i++){
             x3=x3*theta;

        }

        exp=5;
        double x5;
        x5=theta;

        for (int i=2; i<=exp;i++){
             x5=x5*theta;

        }

        double sintheta;
        sintheta = x1 - x3/6 + x5/120;

        double cosectheta;
        cosectheta= 1/sintheta;

        cout<<"Cosec of required angle is\n"<<cosectheta<<endl;
    

        }
        
        

        if (b==6){

        cout<< "Enter angle in radians"<<endl;
        double theta;
        cin>>theta;

        //calculating all required exponents
        int exp;
        exp=1;
        double x1;
        x1=theta;

        for (int i=2; i<=exp;i++){
             x1=x1*theta;

        }

        exp=3;
        double x3;
        x3=theta;

        for (int i=2; i<=exp;i++){
             x3=x3*theta;

        }

        exp=5;
        double x5;
        x5=theta;

        for (int i=2; i<=exp;i++){
             x5=x5*theta;

        }

        double tantheta;
        tantheta = x1 + x3/3 + x5/15+ x5/15;
        
        double cottheta;
        cottheta=1/tantheta;

        cout<<"Cot of required angle is\n"<<cottheta<<endl;

        }
        else {
        //nothing
        }
     


    }



     cout<<"Press 1 to use calculator again"<<endl;
     cin>>i;



     }

    return 0;

}




