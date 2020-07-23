#include<iostream>
#include<cstring>
using namespace std;

string makeFrame(string str)
{
	int i,n=str.length(),count=0;
	for(i=0;i<n;i++)
	{
		if(count==5) //insert 0 after 5 1s 
		{
			str.insert(i,"0");
			count=0;
		}
		if(str[i]=='0') count=0;
		if(str[i]=='1') count++;
	}
	return str;
}

string deFrame(string str)
{
	cout<<"String to deFrame: "<<str<<endl;
	int i,n=str.length(),count=0;
	for(i=0;i<n;i++)
	{
		if(count==5 && str[i]=='0') //remove 0 after 5 1s 
		{
			str.erase(str.begin()+i);
			count=0;
		}
		if(str[i]=='0') count=0;
		if(str[i]=='1') count++;
	}
	cout<<"String after deFraming: "<<str<<endl;
	return str;	
}

void receiver(string str)
{
	// receiver deFrames
	string receivedData = deFrame(str);
	cout<<"Received string: "<<receivedData<<endl;
}

void sender(string str)
{
	// sender makes frame
	string frame = makeFrame(str);
	// send the frame
	receiver(frame);
	cout<<"Transmitted string: "<<frame<<endl;
}

int main()
{
	string str; 
	getline(cin,str);
	int n=str.length();
	int i,j,count;
	cout<<"Original string: "<<str<<endl;
	sender(str);
//	cout<<str;
	return 0;
}
