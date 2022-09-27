#include<iostream>
#include<fstream>
#include<string>
#include <list>
using namespace std;

list<string> inputSignals;
list<string>::iterator inputSignalsIt;

int checkIfAlreadyExist(string signal)
{
	int exists=0;

	for (inputSignalsIt=inputSignals.begin(); inputSignalsIt!=inputSignals.end(); ++inputSignalsIt)
	{
		if((*inputSignalsIt)==signal)
		{
			exists=1;
			break;
		}
		//cout<<(*inputSignalsIt)<<"test"<<endl;		

	}
	return exists;
}


int main(int argc, char *argv[])
{
	string line;
	string x;
	
	int n;	
	
	list<string> outputSignals;
	list<string>::iterator outputSignalsIt;
	
	cin>>n;
	
	cin.ignore();
	
	int i=0;
	
	while(i<n)
	{
		std::getline(std::cin, line);	
		
		checkIfAlreadyExist(line)==1?outputSignals.push_back("M"):outputSignals.push_back("O");			
		inputSignals.push_back(line);
		
		++i;
	}


	for (outputSignalsIt=outputSignals.begin(); outputSignalsIt!=outputSignals.end(); ++outputSignalsIt)
	{
		cout<<(*outputSignalsIt)<<endl;
		//cout<<(*inputSignalsIt)<<endl;
				
	}

	return 0;
}
