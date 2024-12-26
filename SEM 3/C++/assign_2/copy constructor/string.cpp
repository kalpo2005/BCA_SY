// string upper case

#include<iostream>
#include<conio.h>
using namespace std;

class kal
{
        public:
                char name[100],copyname[100],i,lenght;
        public:
                kal()
                {
                        lenght=0;
                        i=0;
                }
                kal(kal &c)
                {
                        copyname[100]=c.name[100];
                }

                void input()
                {
                        cout<<"Enter a name or aany string:";
                        cin>>name;
                }

                void lenght()
                {
                        while(name[i]!=NULL)
                        {
                                i++;
                                lenght++;
                        }

                        for(i=0; i<lenght; i++)
                        {
                                if(copyname[i]>='a' && copyname[i]<='z')
                                {
                                        cout<<copyname;
                                }
                                else
                                {
                                        copyname[i]=copyname[i]+32;
                                        cout<<copyname;
                                }
                        }
                }
                void display()
                {
                        cout<<"your name is a :"<<copyname;
                }

};

int main()
{
        kal p;
        p.input();
        kal k(p);
        //  k.display();
        return 0;
}
