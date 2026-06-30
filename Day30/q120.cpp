#include<iostream>
#include<string>
using namespace std;
int arr[100], n=0;
string str;
void menu(){
cout<<"\n===== ARRAY & STRING LEARNING SYSTEM =====\n";
cout<<"1. Enter Array\n2. Display Array\n3. Insert Element\n4. Delete Element\n";
cout<<"5. Enter String\n6. Display String\n7. Reverse String\n8. Count Vowels\n9. Exit\nChoice: ";
}
void enterArray(){
cout<<"Enter size: ";cin>>n;
for(int i=0;i<n;i++){cout<<"arr["<<i<<"] = ";cin>>arr[i];}
}
void displayArray(){
if(n==0){cout<<"Array Empty\n";return;}
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
}
void insertElement(){
if(n>=100){cout<<"Full\n";return;}
int pos,val;
cout<<"Enter position(1-"<<n+1<<"): ";cin>>pos;
cout<<"Enter value: ";cin>>val;
if(pos<1||pos>n+1){cout<<"Invalid\n";return;}
for(int i=n;i>=pos;i--) arr[i]=arr[i-1];
arr[pos-1]=val;n++;
}
void deleteElement(){
if(n==0){cout<<"Empty\n";return;}
int pos;
cout<<"Enter position(1-"<<n<<"): ";cin>>pos;
if(pos<1||pos>n){cout<<"Invalid\n";return;}
for(int i=pos-1;i<n-1;i++) arr[i]=arr[i+1];
n--;
}
void enterString(){
cout<<"Enter string: ";
getline(cin>>ws,str);
}
void displayString(){
cout<<"String: "<<str<<endl;
}
void reverseString(){
string temp=str;
int i=0,j=temp.length()-1;
while(i<j){char c=temp[i];temp[i]=temp[j];temp[j]=c;i++;j--;}
cout<<"Reversed: "<<temp<<endl;
}
void countVowels(){
int c=0;
for(char ch: str){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') c++;
}
cout<<"Vowels = "<<c<<endl;
}
int main(){
int ch;
do{
menu();
cin>>ch;
switch(ch){
case 1: enterArray(); break;
case 2: displayArray(); break;
case 3: insertElement(); break;
case 4: deleteElement(); break;
case 5: enterString(); break;
case 6: displayString(); break;
case 7: reverseString(); break;
case 8: countVowels(); break;
case 9: cout<<"Thank You\n"; break;
default: cout<<"Invalid Choice\n";
}
}while(ch!=9);
return 0;
}
