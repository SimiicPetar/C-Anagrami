
#include <iostream>

using namespace std;

int main()
{
string a;
string b;
cin>>a>>b;
string c;
if(a.length()==b.length()){
for(int i=0;i<a.length();i++){
		for(int y=0;y<b.length();y++){
			if(a[i]==b[y]){
				c=c+a[i];
			}
}
}	
}
if(c.length()>=a.length()){
	cout<<"da";
	
}
if(c.length()<a.length()){
	cout<<"ne";
	
}
}
