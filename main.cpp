#include<iostream>

using namespace std;

int main()
{
   char txt[100],option;
   int key;
   cout<<"Enter plaintext : ";
   cin.getline(txt,100);
   cout<<"Enter key : ";
   cin>>key;
   reoptn:
   cout<<"Enter option ( e for encryption, d for decryption ) : ";
   cin>>option;

   if(option == 'e' || option == 'E')
    {
    for(int i = 0 ; txt[i] != '\0' ; i++)
    {
        txt[i] += key;
    }
    cout<<"Encrypted text : "<<txt;

    }
   else if ( option == 'd' || option == 'D')
    {
    for(int i = 0; txt[i] != '\0'; i++)
    {
        txt[i] -= key;
    }
    cout<<"Decrypted text : "<<txt;
    }
   else
    {cerr<<"Invalid option, exiting program ";}

   return 0;
}
