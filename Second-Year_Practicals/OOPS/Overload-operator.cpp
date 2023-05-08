#include <iostream>
using namespace std;
 
class vector
{
   private:
      int x,y,z;
   public:
      vector()
      {
         x=0;
         y=0;
         z=0;
      }

      friend ostream &operator<<(ostream &, const vector & );
      friend istream &operator>>(istream &, vector &);
      friend vector operator *(vector, vector);
};

ostream &operator<<( ostream &out, const vector &D )
{ 
    out<<"\nX : "<<D.x<< "\nY : "<<D.y<<"\nZ : "<<D.z;
    return out;            
}

istream &operator>>( istream  &in, vector &D )
{ 
    in>>D.x>>D.y>>D.z;
    return in;            
}

vector operator *(vector a,vector b)
{
    vector temp;
    temp.x=b.x*a.x;
    temp.y=b.y*a.y;
    temp.z=b.z*a.z;
    return temp;
}

int main()
{
   vector v1,v2,result;
   int t;
   while(1)
   {
       cout<<"\nEnter choice:";
       cout<<"\n1.Enter Values\n2.Multiplication\n3.Exit\n ";
       cin>>t;
       switch(t)
       {
            case 1: cout << "\n\nEnter the value of Vector in order of X, Y, Z :\n";
                    cin >>v1;
                    cout << "\n\nEnter the value of Vector in order of X, Y, Z :\n";
                    cin >>v2;
                    cout<<"\n\nValues of V1:"<<v1<<"\nValues of V2:"<<v2;
                    break;
            
            case 2: result=v1*v2;
                    cout<<"\n\nThe result of the dot product is : "<<result;
                    break;

            case 3:
              exit(0);
              break;
       }
   }
   return 0;
}
