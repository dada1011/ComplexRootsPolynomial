#include<iostream>
#include<math.h>

double ddx(double,double,double,double,double,double);
double ddx1(double,double,double,double,double,double,double);
double f(double,double,double,double,double,double);
double f1(double,double,double,double,double,double,double);
double g(double,double,double,double,double);

using namespace std;

int main()
{

 int equal=9;
 double a1,b1,c1,b2,c2,dis1,dis2,h;
double q0,q,a5,b5,c5,d5,e5,f5;
 cout<<endl<<"  Method to find the real and complex roots of a quintic equation";
 cout<<endl<<"  Enter a,b,c,d,e,f as in ax^5+bx^4+cx^3+dx^2+ex+f=0" <<endl;
cout<<endl<<" a=       ";
cin>>a5;
cout<<endl<<" b=       ";
cin>>b5;
cout<<endl<<" c=       ";
cin>>c5;
cout<<endl<<" d=       ";
cin>>d5;
cout<<endl<<" e=       ";
cin>>e5;
cout<<endl<<" f=       ";
cin>>f5;
cout<<endl;




 int count=0,restart=65;
 q=-100;
restart:;

 do

{q0=q; count++;
 q=q-(f1(q,a5,b5,c5,d5,e5,f5) /ddx1(q,a5,b5,c5,d5,e5,f5));

  if(count>500)
 {q=100;
 goto restart;   }

 }while(fabs(q0-q)>0.0000000001);

double z,z0,a,b,c,d,e;

a=a5;
b=b5+(a*q);
c=c5+(b*q);
d=d5+(c*q);
e=e5+(d*q);






int start=6;
 z=10*(fabs(a)+fabs(b)+fabs(c)+fabs(d)+fabs(e));
start:;
 int p=0,l=0;

 do

{z0=z;
 z=z-(f(z,a,b,c,d,e) /ddx(z,a,b,c,d,e));


p++;
if(p>600)
{ a1=a;
b1=b/(1+a1);
b2=b1;
h=d/b1;
if(a1==1)
{c1=(h+sqrt(pow(h,2)-(4*e)))*0.5;
 c2=(h-sqrt(pow(h,2)-(4*e)))*0.5;
 }
 else
 {c2=(c-(b1*b1)-h)/(a-1);
 c1=h-c2;
 }
goto equal;

break;
}

 }while(fabs(z0-z)>0.0000000001);





 if(l==0)
{
a1=a;
b1=z;
b2=(b-b1)/a;
c2=((d/b2)-c+(b1*b2))/((b1/b2)-a1);
c1=e/c2;

equal:;
dis1=(b1*b1)-(4*a1*c1);



if(fabs(a1-a)<0.0001 && fabs((a1*b2)+b1-b)<0.0001 && fabs((a1*c2)+(b1*b2)+(c1)-c)<0.0001 && fabs((b1*c2)+(b2*c1)-d)<0.0001 && fabs((c1*c2)-e)<0.0001)
{cout<<endl<<"   The roots are:"<<endl<<endl<<" ROOT1:   "<<q<<endl;
if(dis1>0 || dis1==0)
{
cout<<endl<<" ROOT2:   "<<(b1/(-2*a1))+sqrt(dis1)/(2*a1)<<endl<<endl;
cout<<" ROOT3:   "<<(b1/(-2*a1))-sqrt(dis1)/(2*a1)<<endl;
 }

else
{dis1=fabs(dis1);
cout<<endl<<" ROOT2:   "<<(b1/(-2*a1))<<" + "<<sqrt(dis1)/(2*a1)<<"i"<<endl<<endl;
cout<<" ROOT3:   "<<(b1/(-2*a1))<<" - "<<sqrt(dis1)/(2*a1)<<"i"<<endl;
}

dis2=(b2*b2)-(4*c2);

if(dis2>0 || dis2==0)
{
cout<<endl<<" ROOT4:   "<<(b2/(-2))+sqrt(dis2)/(2)<<endl;
cout<<" ROOT5:   "<<(b2/(-2))-sqrt(dis2)/(2)<<endl;
 }

else
{dis2=fabs(dis2);
cout<<endl<<" ROOT4:   "<<(b2/(-2))<<" + "<<sqrt(dis2)/(2)<<"i"<<endl<<endl;
cout<<" ROOT5:   "<<(b2/(-2))<<" - "<<sqrt(dis2)/(2)<<"i"<<endl;
}

}
else
{z=-10*(fabs(a)+fabs(b)+fabs(c)+fabs(d)+fabs(e));;
goto start;
}
 }

return 0;

}


double ddx(double x,double a,double b,double c,double d,double e)
{ double ar[5],y[4];
 for(int k=-2;k<3;k++)
 {
 ar[2+k]=f((x+(0.1*k)),a,b,c,d,e);
 }

 for(int i=0;i<4;i++)
 { for(int j=0;j<4-i;j++)
    {ar[j]=ar[j+1]-ar[j];
    }
    y[i]=ar[0];

    }

double der;
int u=2;
der=y[0]+((y[1]*0.5)*((2*u)-1)) + ((y[2]/6)*((3*u*u)-(6*u)+2))+((y[3]/24)*((4*u*u*u)-(18*u*u)+(22*u)-6));
der=der/0.1;
return(der);


  }
 double f(double x,double a,double b,double c,double d,double e)
 {double funcval;
 funcval=((x*e)+((b-x)/a)*pow(g(x,a,b,c,d),2)-(d*g(x,a,b,c,d)))/x;

 return(funcval);
 }

 double g(double b1,double a,double b,double c,double d)
 {double c1;
 c1=(b1*(c-(b1*((b-b1)/a)))-(a*d))/((2*b1)-b);
 return(c1);
 }


 double ddx1(double x,double a,double b,double c,double d,double e,double f)
{ double ar[5],y[4];
 for(int k=-2;k<3;k++)
 {
 ar[2+k]=f1((x+(0.1*k)),a,b,c,d,e,f);
 }

 for(int i=0;i<4;i++)
 { for(int j=0;j<4-i;j++)
    {ar[j]=ar[j+1]-ar[j];
    }
    y[i]=ar[0];

    }

double der;
int u=2;
der=y[0]+((y[1]*0.5)*((2*u)-1)) + ((y[2]/6)*((3*u*u)-(6*u)+2))+((y[3]/24)*((4*u*u*u)-(18*u*u)+(22*u)-6));
der=der/0.1;
return(der);


  }

 double f1(double x,double a,double b,double c,double d,double e,double f)
 {double funcval;
 funcval=(a*pow(x,5))+(b*pow(x,4))+(c*pow(x,3))+(d*pow(x,2))+(e*x)+f;

 return(funcval);
 }
