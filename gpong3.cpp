#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
int main(int argc,char* argv[])
{
	string s0="g++ pong3.cpp -c -w -std=c++11 ";
	system(s0.c_str()); 
	string s="g++ pong3.o ";
		// string s="g++ ";
	for(int i=0;i<argc-1;i++)
	{
		s+=argv[i+1];
		s+=" ";
	}
	s+="-lmingw32 -lSDL2main -lSDL2 -lSDL_mixer -lSDL2_ttf -lSDL_image -mwindows  -std=c++11";
	system(s.c_str());
	// system("a");  
	return 0;
}