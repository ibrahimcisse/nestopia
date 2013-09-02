#ifndef _MAIN_H_
#define _MAIN_H_

#define VERSION "1.46-WIP"

#define TV_WIDTH 292

void NstPlayGame();
void NstScheduleQuit();
void NstStopPlaying();
void NstSoftReset();
void NstHardReset();
bool NstIsPlaying();
bool NstIsLoaded();
void NstLoadGame(const char* filename);
void NstLaunchConfig();

void SetupVideo();
void SetupSound();
void SetupInput();

void get_screen_res();
void ToggleFullscreen();
void FlipFDSDisk();
void SwitchFDSDisk();
void print_fds_info();
void print_message(char* message);
void main_set_framerate();
void main_init_video();

void QuickLoad(int isvst);
void QuickSave(int isvst);
void NstScheduleQuit();

#endif
