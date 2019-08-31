#include <iostream>
using namespace std;
int main(){
	char word[100],temp;
	cout<<"Please give me the word that I will convert it!"<<endl;
	cout<<"It will write the words from backwards."<<endl;
	cin>>word;
	int length;
	for(length=0;word[length]!='\0';length++);
	for(int i=0;i<(length/2);i++){
		temp=word[i];
		word[i]=word[length-i-1];
		word[length-i-1]=temp;
	}
	cout<<endl;
	cout<<"Here is your word from backwards:"<<endl;
	cout<<word;
	cout<<endl;
	system("PAUSE");
	return 0;
}
