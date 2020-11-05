#include<bits/stdc++.h>
using namespace std;

class Spell
{
    private:
        string scrollname;
    public:
        Spell():scrollname(""){}
        Spell(string name): scrollname(name)
        {

        }
        virtual ~Spell()
        {

        }
        string revealscrollname()
        {
            return scrollname;
        }
};


class Fireball: publc Spell
{
    private: int power;
    public:
        Fireball(int power):power(power){

        }
        void revealFireball()
        {
            cout<<"Fireball:"<<power<<endl;

        }

};
