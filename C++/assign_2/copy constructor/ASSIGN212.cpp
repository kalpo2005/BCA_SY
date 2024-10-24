// program for the odd and even  calculation

#include<iostream>
#include<conio.h>
using namespace std;

class array
{
        public:
                int arr[10],b[10],i,sumodd,sumeven,n,index;

//                array()
//                {
//                        sumodd=0;
//                        sumeven=0;
//                }
        public:
                array(array &copy)
                {
                        for(i=0; i<index; i++)
                        {
                                b[i]=copy.arr[i];
                        }
                        n=copy.index;
                        sumodd=0;
                        sumeven=0;
                }
                void input()
                {
                        cout<<"enter a index element :";
                        cin>>index;
                        for(i=0; i<index; i++)
                        {
                                cout<<"enter a element of array["<<i<<"]:";
                                cin>>arr[i];
                        }

                }

                void display()
                {
                        cout<<"the total of a even is a :"<<sumeven<<endl;
                        cout<<"the total of a odd is a :"<<sumodd<<endl;
                }
                void process()
                {
                        for(i=0; i<n; i++)
                        {
                                if(b[i]%2==1)
                                {
//                                        cout<<b[i]<<endl;
                                        sumodd=sumodd+b[i];
                                }
                                else
                                {
                                        {
//                                        cout<<b[i]<<endl;
                                                sumeven=sumeven+b[i];
                                        }
                                }
                        }

//                        for(i=0; i<n; i++)
//                        {
//                                if(b[i]%2==0)
//                                {
//                                        cout<<b[i]<<endl;
//                                        sumeven=sumeven+b[i];
//                                }
//                        }
                }

};

int main()
{
        array a;
        a.input();
        array b(a);
        b.process();
        b.display();

        return 0;
}
