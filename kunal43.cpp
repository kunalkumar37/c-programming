#include<iostream>
using namespace std;
struct shape
{
    int type;
    union g_shape;
    {
    struct rect_share {int pt1,pt2;} r1;
    struct tri_shape {int pt1,pt2,pt3;} r2;
    };
    union g_shape s;
    cout<<"ths size of struct shape"<<sizeof(struct shape);
};
