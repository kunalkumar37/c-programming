#include<iostream>
#include<string>
using namespace std;
class Area
{
    private:
        float radius;
    public:
        double getarea()
        {
            return 3.14*radius*radius;;

        }
        void setradius(float radius)

        {
            this->radius=radius;

        }

};
int main()
{
    Area circle;
    circle.setradius(4);
    double area=circle.getarea();
    cout<<"area"<<area;

    return 0;
}