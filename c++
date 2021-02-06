#include<iostream>
using namespace std;


void diamond(int s=5, char c= '*')
{
   int space = s - 1;

   for (int i = 0; i < s; i++){
       for (int b = 0; b<space; b++){
            cout << " ";}
       for (int d = 0; d <= i; d++){
            cout << c;}
       for(int e=0; e<i; e++){
    	   cout << c;}

        cout << endl;
        space=space-1;
    }
    space = 0;

    for (int i = s; i > 0; i--){
        for (int b = 0; b <= space; b++){
            cout << " ";}
        for (int d = 1; d<i-1; d++){
            cout << c;}
        for(int e=1; e<=i-1; e++){
        	cout << c;}

        cout << endl;
        space=space+1;
    }
}

int main()
{
	char response;
	int n;
	char v;


	cout << "Do you want to use default values(y/n)?";
	cin >> response;

	if (response=='y'){
		diamond();
	}
	if(response == 'n'){
		cout << "Enter an integer for the side of the diamond: ";
		cin >> n;
		cout << "Enter a char value for the character printed: ";
		cin >> v;
		cout << endl;
		diamond(n,v);


	}


    return 0;
}
