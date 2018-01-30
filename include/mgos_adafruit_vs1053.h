#ifdef __cplusplus
#include "Adafruit_VS1053.h"
#else
typedef struct Adafruit_VS1053tag Adafruit_VS1053;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#define SD_PIN         33

#define VS1053_RESET   -1     // VS1053 reset pin (not used!)
#define VS1053_CS      32     // VS1053 chip select pin (output)
#define VS1053_DCS     33     // VS1053 Data/command select pin (output)
#define CARDCS         14     // Card chip select pin
#define VS1053_DREQ    15     // VS1053 Data request, ideally an Interrupt pin

Adafruit_VS1053_FilePlayer *mgos_adafruit_VS1053_create();

int mgos_adafruit_VS1053_begin(Adafruit_VS1053_FilePlayer *player);

bool mgos_adafruit_VS1053_startPlayingFile(Adafruit_VS1053_FilePlayer *player, char *fileName);

void mgos_adafruit_VS1053_stopPlaying(Adafruit_VS1053_FilePlayer *player);

void mgos_adafruit_VS1053_pausePlaying(Adafruit_VS1053_FilePlayer *player);

bool mgos_adafruit_VS1053_paused(Adafruit_VS1053_FilePlayer *player);

bool mgos_adafruit_VS1053_stopped(Adafruit_VS1053_FilePlayer *player);

// void /*File*/ mgos_adafruit_VS1053_currentTrack(Adafruit_VS1053_FilePlayer *player);

// bool mgos_adafruit_VS1053_playingMusic(Adafruit_VS1053_FilePlayer *player);

void mgos_adafruit_VS1053_close(Adafruit_VS1053_FilePlayer *player);

void mgos_adafruit_VS1053_setVolume(Adafruit_VS1053_FilePlayer *player, int left, int right);

#ifdef __cplusplus
}
#endif
