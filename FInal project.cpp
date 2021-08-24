#include <stdio.h>
#include<fstream>
#include<string.h>
#include<iostream>

using namespace std;


void encrypt(){
	cout<<"encrypt\n";
	// cout<<"enter the sentence";
	//cin>>
};
void decrypt(){
	cout<<"decrypt\n";
	// cout<<"enter the sentence";
	//cin>>
};





int main(){
	int key;
cout<<"This program encrypt and decrypt a string ";
	for(; ;) 
{
		cout<<"\n please choose from the MENU" ;
	
	
		cout<<"\n press 1 to encrypt ";
		cout<< "\n press 2 to decrypt";
		cout<<"\n press 3 to exit \n";
			
	       cin>>key;
		
		
		if (key==1){
			encrypt();
		
	
		
		};
		if(key==2){
			decrypt();

		}
	
	if (key ==3 ){
	
		exit(1)	;

}

}
return 0;	
		
}
