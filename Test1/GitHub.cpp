#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetGraphMode(1280, 720, 32);
	ChangeWindowMode(true);

	SetWindowText("2016207_���{�y�l");

	if (DxLib_Init()) {
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) {
		ScreenFlip();
	}
	return 0;
}