#include <iostream>
#include <conio.h>
#include <cstring>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>

using namespace std;
int main(){
#pragma comment(lib, "winmm.lib")
	//PlaySound(TEXT("Lac-Troi-Vuong-The-Ngoc.wav"), NULL, SND_SYNC);
	char x = ' ';
	while (true){
		x = _getch();
		if (toupper(x) == 'A') {
			mciSendString("open \"Lac-Troi-Vuong-The-Ngoc.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
			mciSendString("play mp3", NULL, 0, NULL);
		}
		else {
			mciSendString("open \"DiDeTroVe-SoobinHoangSon-4726882.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
			mciSendString("play mp3", NULL, 0, NULL);
		}
		if (x == ' ') break;
	}
	_getch();
}