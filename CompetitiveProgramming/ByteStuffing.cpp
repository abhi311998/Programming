#include<iostream>
#include<cstring>
using namespace std;

string start="dlestx",end="dleetx",mid="dle";

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
	string deFramed;
	str.erase(0,6);
	str.erase(str.length()-6,6);
	return str;
	/*cout<<"String to deFrame: "<<str<<endl;
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
	return str;	*/
}

void receiver(string str)
{
	// receiver deFrames
	string receivedData = deFrame(str);
	cout<<"Received string: "<<receivedData<<endl;
}

void sender(string str)
{
	string ch;
	int pos;
	cout<<"Enter the char to be inserted & the correspoding position: ";
	getline(cin,ch);
	cin>>pos;
	
	str.insert(pos-1,ch);
	
	string frame=start;
	str.append(end);
	frame.append(str);
	
	cout<<frame<<endl;
//	receiver(frame);
}


int main()
{
	string str; 
	getline(cin,str);
	int n=str.length();
	int i,j,count;
	cout<<"Original string: "<<str<<endl;
	sender(str);
	return 0;
}
