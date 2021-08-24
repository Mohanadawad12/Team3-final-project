#include <stdio.h>
#include<fstream>
#include<string.h>
#include<iostream>

using namespace std;


int encrypt(){
	char message[100],s;
	int i,key;
	cout<<"enter the sentence you want to encrypt\n";
	cin>>message;
	cout<<"\nenter key";
	cin>>key;
	for(i = 0;message[i] !='\0';++i){
		s = message[i];
		if(s>='a'&&s<='z'){
			s = s+ key;
		
		if(s> 'z'){
			s = s- 'z'+'a' -1 ;
			
		}
		
		message[i]=s;
}
	else if (s>='A'&& s <='z'){
		s =s +key;
		if(s>'Z'){
			s=s -'Z' +'A'-1;
			
		}
		message[i] =s;
		
	}
	
}
	
cout<<"Encrypted message: " << message;
	
	return 0;
	
};
int  decrypt(){
	char message[100], s;
int i, key;
cout << "Enter a message to decrypt: ";
cin>> message ;
cout << "\nEnter key: ";
cin >> key;
for(i = 0; message[i] != '\0'; ++i){

s = message[i];
if(s >= 'a' && s <= 'z'){
s = s - key;
if(s < 'a'){
s = s + 'z' - 'a' + 1;
}
message[i] = s;
}
else if(s >= 'A' && s <= 'Z'){
s = s - key;
if(s > 'a'){
s = s + 'Z' - 'A' + 1;
}
message[i] =s ;
}
}
cout << "Decrypted message: " << message;
return 0;
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
