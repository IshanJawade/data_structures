# include <iostream>
using namespace std;

class copyRights{
    public: 
        void Intro(){
            system("clear");
            cout<<"\t\tPair.Inc"<<endl;
            cout<<"\n\nProgram: Stack"<<endl<<"Coder: Ishan Jawade"<<endl;
            cout<<"\n\n© Pair.Inc. All rights reserved. ";
            getchar();                    // wait for user input
            system("clear");
        }

        void outro(){
            cout<<"\n\n© Pair.Inc. All rights reserved.\nUnauthorised use of this product is strictly Prohibited.\n";
            cout<<"\nPress any key to exit...";
            getchar();
            system("clear");
        }
};

int main(){
    copyRights obj;
    obj.Intro();
    obj.outro();
    return 0;
}