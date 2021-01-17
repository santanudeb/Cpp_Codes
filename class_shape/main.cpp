#include <iostream>
using namespace std;

class shape {
    public:
        int label,height,width,area,r;
    void volume()
     {
     }
    void whole_surface_area()
    {
    }
    };
 class box:public shape{
     public:
        box(int label,int height,int width)
        {
            this->label = label;
            this->height = height;
            this->width = width;
        }
      void volume()
     {
        int val=label*height*width;
        cout<<"BOX::volume_result "<<val<<endl;
     }
     void whole_surface_area()
    {
        int total5 = 2*label*width + 2*label*height + 2*width*height;
        cout<<"BOX::whole-surface-area_result "<<total5<<endl;
    }
 };
 class cube:public shape{
        public:
            cube(int area)
            {
                this->area = area;
            }
      void volume()
     {
        float total4= area*area*area;
        cout<<"CUBE::volume_result "<<total4<<endl;
     }
      void whole_surface_area()
    {
        float total3= 6*area*area;
        cout<<"CUBE::whole-surface-area_result "<<total3<<endl;
    }
 };
 class cylinder:public shape{
        public:
            cylinder(int height, int r)
            {
                this->height= height;
                this->r= r;
            }
      void volume()
     {
        float total1= 3.14*r*r*height;
        cout<<"CYLINDER::volume_result "<<total1<<endl;
     }
     void whole_surface_area()
    {
        float total2= (2*3.14*r*(r+height));
        cout<<"CYLINDER::whole-surface-area_result "<<total2<<endl;
    }
 };

int main()
{
 box b1(2,2,2);
 b1.volume();
 b1.whole_surface_area();
 cube c1(2);
 c1.volume();
 c1.whole_surface_area();
 cylinder c2(2,2);
 c2.volume();
 c2.whole_surface_area();

 return 0;
}


/*

25. Create a class shape and derive the classes box, cube and cylinder from it. The class
shape has functions volume() and whole-surface-area(). Override these two functions in
each of the derived classes. The dimensions of the shapes (box,cube,cylinder) are to be
taken from the user. Write a main function to take the classes.

*/
