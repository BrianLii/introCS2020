#include<bits/stdc++.h>
using namespace std;
string sokoban[]
{
R"(   _____  ____  _  ______  ____          _   _ )",
R"(  / ____|/ __ \| |/ / __ \|  _ \   /\   | \ | |)",
R"( | (___ | |  | | ' / |  | | |_) | /  \  |  \| |)",
R"(  \___ \| |  | |  <| |  | |  _ < / /\ \ | . ` |)",
R"(  ____) | |__| | . \ |__| | |_) / ____ \| |\  |)",
R"( |_____/ \____/|_|\_\____/|____/_/    \_\_| \_|)",                                            
};
string adventure[]
{
R"(              _                 _                  )",
R"(     /\      | |               | |                 )",
R"(    /  \   __| |_   _____ _ __ | |_ _   _ _ __ ___ )",
R"(   / /\ \ / _` \ \ / / _ \ '_ \| __| | | | '__/ _ \)",
R"(  / ____ \ (_| |\ V /  __/ | | | |_| |_| | | |  __/)",
R"( /_/    \_\__,_| \_/ \___|_| |_|\__|\__,_|_|  \___|)",                                                                                   
};
int main()
{
    for(int i=0;i<6;i++)
    {
        cout<<"do Output.printString(\"";
        for(auto j:sokoban[i])
        {
            if(j=='\\')cout<<"\\\\";
            else cout<<j;
        }
        cout<<"\");"<<endl;
        cout<<"do Output.println();"<<endl;
    }
    for(int i=0;i<6;i++)
    {
        cout<<"do Output.printString(\"";
        for(auto j:adventure[i])
        {
            if(j=='\\')cout<<"\\\\";
            else cout<<j;
        }
        cout<<"\");"<<endl;
        cout<<"do Output.println();"<<endl;
    }
    return 0;
}