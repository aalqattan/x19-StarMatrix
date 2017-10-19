#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

        vector < vector < char > > star; 
        int r;
        int c;




        cout<<"Enter rows number: "<<endl;
        cin>>r;
        cout<<"Enter columns number: "<<endl;
        cin>>c;



        if (r > 0 && c > 0)
        {

                star.resize(r);

                for (int i = 0; i < star.size(); i++)

                { 
                        star[i].resize(c);

                        for (int y = 0; y < star[i].size(); y++)
                        {
                                star[i][y] = '*';

                                cout<<star[i][y]<<"  ";
                        }

                        cout<<endl;
                }




        }   




        return 0;
}

