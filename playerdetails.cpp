#include<iostream>
#include<string>
using namespace std;
class tests
{
public:
int matchestests;
int inningstests;
int notoutstests;
int runstests;
double avgtests;
void getTests()
{
cout<<"Test"<<endl;
cout<<"Enter no of matches played ";
cin>>matchestests;
cout<<"Innings ";
cin>>inningstests;
cout<<"Not outs ";
cin>>notoutstests;
cout<<"Runs scored ";
cin>>runstests;
avgtests=runstests/(inningstests-notoutstests);
cout<<"Average "<<avgtests<<endl;
}
};
class odis
{
public:
int matchesodis;
int inningsodis;
int notoutsodis;
int runsodis;
double avgodis;
void getOdis()
{
cout<<"ODI"<<endl;
cout<<"Enter no of matches played ";
cin>>matchesodis;
cout<<"Innings ";
cin>>inningsodis;
cout<<"Not outs ";
cin>>notoutsodis;
cout<<"Runs scored ";
cin>>runsodis;
avgodis=runsodis/(inningsodis-notoutsodis);
cout<<"Average "<<avgodis<<endl;
}
};
class t20is
{
public:
int matchest20is;
int inningst20is;
int notoutst20is;
int runst20is;
double avgt20is;
void getT20is()
{
cout<<"T20I"<<endl;
cout<<"Enter no of matches played ";
cin>>matchest20is;
cout<<"Innings ";
cin>>inningst20is;
cout<<"Not outs ";
cin>>notoutst20is;
cout<<"Runs scored ";
cin>>runst20is;
avgt20is=runst20is/(inningst20is-notoutst20is);
cout<<"Average "<<avgt20is<<endl;
}
};
class overall: public tests,public odis,public t20is
{
public:
void getoverall()
{
cout<<"Overall"<<endl;
int totalmatches;
totalmatches=matchestests+matchesodis+matchest20is;
cout<<"Matches played "<<totalmatches<<endl;
int totalinnings;
totalinnings=inningstests+inningsodis+inningst20is;
cout<<"Innings played "<<totalinnings<<endl;
int totalnotouts;
totalnotouts=notoutstests+notoutsodis+notoutst20is;
cout<<"Not Outs "<<totalnotouts<<endl;
int totalruns;
totalruns=runstests+runsodis+runst20is;
cout<<"Runs scored "<<totalruns<<endl;
double totalavg;
totalavg=totalruns/(totalinnings-totalnotouts);
cout<<"Average "<<totalavg<<endl;
}
};
int main()
{
string player;
cout<<"Enter Player's name ";
getline(cin,player);
overall o;
o.getTests();
o.getOdis();
o.getT20is();
o.getoverall();
return 0;
}
