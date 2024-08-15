#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string v;
    std::cout<<"what do you want to do(arithmetic,trigonometric,quadratic, root, log, exp(x),linear equation)"<<endl;
    cin>>v;
    
    if ( v =="arithmetic"){
         double num1;
         double num2;
         std::cout<<"enter num1:"<<endl;
         cin>>num1;
         std::cout<<"enter num2:"<<endl;
         cin>>num2;
          char y;
          std::cout<<"what do you want to perform(+,-,*,/)"<<endl;
          cin>>y;
        if(y=='+'){
            
           std::cout<<"the sum is"<<num1+num2<<endl;
        } 
        if(y=='-'){
            
            std::cout<<"num1-num2="<<num1-num2<<endl;
        }
        if(y=='*'){
            
            std::cout<<"the product is"<<num1*num2<<endl;
        }
        if(y=='/'){
            
            std::cout<<"num1/num2 is"<<num1/num2<<endl;
        }
    }
   if(v=="trigonometric"){
        #include<cmath>
        string z;
        std::cout<<"which trigonometric function you want to perform?"<<endl;
        cin>>z;
        if(z=="sinx"){
            double a;
         std::cout<<"enter the value of x"<<endl;
         cin>>a;

         double product= a;
         double sign;
         double fact=1;
         double sum;
    
         for(int i=1; i<10; i++){
         product=product*a*a;
        
         sign=pow(-1, i);
         fact=fact*(2*i)*(2*i+1);
         double z= (sign*product)/fact;
         
         sum +=z;
         }
         std::cout<<"the value of sinx is"<<sum+a<<endl;

        }
        if(z=="cosx"){
            #include<cmath>
         double b;
         std::cout<<"enter the value of x:"<<endl;
          cin>>b;
          double product=1;
          double fact=1;
          double sign;
          double sum;
  
          for(int i=1; i<10; i++){
         product=product*b*b;

         sign= pow(-1 , i);
         fact=fact*(2*i-1)*(2*i);
         double c=(sign*product)/fact;
       
         sum +=c;
        
         }
         std::cout<<"the value of cosx is:"<<1+sum<<endl;
         }
        if(z=="tanx"){
          double x;
          cout<<"enter the value of x"<<endl;
         cin>>x;

          double product= x;
          double sign;
          double fact=1;
         double sum;
         double sinx=sum+x;
    
          for(int i=1; i<20; i++){
                product=product*x*x;
        
             sign=pow(-1, i);
             fact=fact*(2*i)*(2*i+1);
              double z= (sign*product)/fact;
         
             sum +=z;
            }
            /*cout<<"enter the value of x:"<<endl;
          cin>>x;*/

          double product1=1;
          double factorial=1;
          double sign1;
          double sum1;
          double y;
          double cosx=1+sum1;

           for(int i=1; i<20; i++){
               product1=product1*x*x;

              sign1= pow(-1 , i);
             factorial=factorial*(2*i-1)*(2*i);
              double y=(sign1*product1)/factorial;
       
             sum1 +=y;
            }
          cout<<"the value of tanx is:"<<(sum+x)/(1+sum1)<<endl;
        }
        if(z=="cotx"){
         double x;
          cout<<"enter the value of x"<<endl;
          cin>>x;

          double product= x;
         double sign;
          double fact=1;
         double sum=0;
         double sinx=sum+x;
    
          for(int i=1; i<20; i++){
                product=product*x*x;
        
              sign=pow(-1, i);
              fact=fact*(2*i)*(2*i+1);
              double z= (sign*product)/fact;
              sum +=z;
            }
         
         /*cout<<"enter the value of x:"<<endl;
          cin>>x;*/

         double product1=1;
          double factorial=1;
         double sign1;
         double sum1=0;
         double y;
         double cosx=1+sum1;

         for(int i=1; i<20; i++){
                product1=product1*x*x;

              sign1= pow(-1 , i);
               factorial=factorial*(2*i-1)*(2*i);
               double y=(sign1*product1)/factorial;
              sum1 +=y;
            }
         cout<<"the value of cotx is:"<<(1+sum1)/(sum+x)<<endl;
        }
        if (z=="cosecx"){
            
              double x;
              std::cout<<"enter the value of x"<<endl;
              cin>>x;

             double product= x;
             double sign;
             double fact=1;
             double sum=0;
    
              for(int i=1; i<10; i++){
                  product=product*x*x;
        
                   sign=pow(-1, i);
                   fact=fact*(2*i)*(2*i+1);
                   double z= (sign*product)/fact;
         
                  sum +=z;
                }
              std::cout<<"the value of cosecx is"<<1/(sum+x)<<endl;

        }
        if (z=="secx"){
          double o;
         std::cout<<"enter the value of x:"<<endl;
         cin>>o;

         double product=1;
         double fact=1;
         double sign;
         double sum=0;
  
         for(int i=1; i<10; i++){
          product=product*o*o;

          sign= pow(-1 , i);
          fact=fact*(2*i-1)*(2*i);
          double z=(sign*product)/fact;
       
          sum +=z;
        
         }
    
          std::cout<<"the value of secx is"<<1/(1+sum)<<endl;
         }
        }

   if (v=="quadratic"){
        double a;
       double b;
       double c;
       double x;
       cout<<"enter the coefficients of the quadratic expression ax^2+bx+c=0"<<endl;
       cout<<"enter a:"<<endl;
         cin>>a;
       cout<<"enter b:"<<endl;
         cin>>b;
       cout<<"enter c:"<<endl;   
         cin>>c;
       cout<<"let the roots be x1 and x2"<<endl;
       double D;
       D= b*b - 4*a*c;
       cout<<D<<endl;
      if (D=0);{
         double A= -b/(2*a);
         cout<<"the value of x1="<<A<<endl;
         cout<<"the value of x2="<<A<<endl;

      }
      if(D>0){
         double xi=1;
         while(((xi*xi-D)>0.001)||((xi*xi- D)<-0.001)){
         xi= (xi+D/xi)/2;
         }
         double A= -b/(2*a);
         double B= xi/2*a;
         cout<<"the value of x1 is:"<<A+B<<endl;
         cout<<"the value of x2 is:"<<A-B<<endl;
      }
      else if (D<0);{
          double xi=1;
          while(((xi*xi+D)>0.001)||((xi*xi+ D)<-0.001)){
         xi= (xi-D/xi)/2;
         }
         double A= -b/(2*a);
          double B= xi/(2*a);
         cout<<"the value of x1="<<A<<"+i"<<B<<endl;
         cout<<"the value of x2="<<A<<"-i"<<B<<endl;
      }
      
   }
    if (v=="root"){
        double y;
     std::cout<<"enter the value you want to find the root of"<<endl;
     cin>>y;
     double xi=1;
     while(((xi*xi-y)>0.001)||((xi*xi- y)<-0.001)){
      xi= (xi+y/xi)/2;
     }
     std::cout<<xi;
    }
    if(v=="exp(x)"){
       double x;
       double product=1;
       double fact=1;
       double z;
       double sum;
       cout<<"enter the value you want to find the exp of"<<endl;
       cin>>x;
       for (int i=1;i<10; i++){
         product=product*x;
         fact=fact*i;
         z= product/fact;
         sum +=z;
       }
      cout<<"the value of exp(x) is:"<<1+sum<<endl;
       

    }
    if (v=="logx"){
         #include<cmath>
         double x;
         double product;
          double sum;
          int sign;
          double z;
         std::cout<<"enter the value of which you want to find the ln of:"<<endl;
          cin>>x;
         double y=x-1;
         product=1;

         for ( int i = 1; i < 21; i++){
         
              product=product*y;
    

             sign=pow(-1, i+1);

             double z= (sign*product)/i;
             sum +=z;
            }



          std::cout<<"the value of lnx is:"<<sum<<endl;
    }
    
   if (v=="linear equation"){
        int l;
        cout<<"please specify the number of variables in your linear equation (1 or 2)"<<endl;
        cin>>l;
        if (l='1'){
            double a;
            double b;
            cout<<"enter the values of coefficients of eq of the form ax+b=0:"<<endl;
            cout<<"enter the value of a:"<<endl;
            cin>>a;
            cout<<"enter the value of b:"<<endl;
            cin>>b;
            cout<<"the value of x is:"<<-b/a<<endl;
        }
        if (l='2'){
            double a;
            double b;
            double c;
            double d;
            double e;
            double f;
            cout<<"enter the values of coefficients of the first equation ax+by=c"<<endl;
            cout<<"enter the value of a:"<<endl;
            cin>>a;
            cout<<"enter the value of b:"<<endl;
            cin>>b;
            cout<<"enter the value of c:"<<endl;
            cin>>c;
            cout<<"enter the values of coefficients of the second equation dx+ey=f"<<endl;
            cout<<"enter the value of d:"<<endl;
            cin>>d;
            cout<<"enter the value of e:"<<endl;
            cin>>e;
            cout<<"enter the value of f:"<<endl;
            cin>>f;
            double Dx,Dy,D;
            Dx=c*e-b*f;;
            Dy=a*f-c*d;
            D=a*e-d*b;
            cout<<"for the system of linear equations:"<<endl;
            cout<<a<<"x";
            if (b>0)
            cout<<"+";
            cout<<b<<"y="<<c<<endl;
            cout<<d<<"x";
            if (e>0)
            cout<<"+";
            cout<<e<<"y="<<f<<endl;
            cout<<"the solutions are:"<<endl;
            cout<<"the value of x is:"<<Dx/D<<endl;
            cout<<"the value of y is:"<<Dy/D<<endl;
        }
    }






    

 return 0;

}
