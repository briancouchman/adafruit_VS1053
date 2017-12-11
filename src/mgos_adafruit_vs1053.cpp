#include "mgos_adafruit_vs1053.h"

Adafruit_VS1053_FilePlayer *mgos_adafruit_vs1053_create(){
  return new Adafruit_VS1053_FilePlayer(VS1053_RESET, VS1053_CS, VS1053_DCS, VS1053_DREQ, CARDCS);
}

int mgos_adafruit_vs1053_begin(Adafruit_VS1053_FilePlayer player){
  if (player == nullptr) return 0;
  return player.begin();
}

int mgos_adafruit_vs1053_startPlayingFile(Adafruit_VS1053_FilePlayer *player, char *fileName);
  if (player == nullptr) return 0;
  return player.startPlayingFile(fileName);
}

void mgos_adafruit_vs1053_stopPlaying(Adafruit_VS1053_FilePlayer *player){
  if (player != nullptr){
    player.stopPlaying();
  }
}

void mgos_adafruit_vs1053_pausePlaying(Adafruit_VS1053_FilePlayer *player){
  if (player != nullptr){
    player.pausePlaying();
  }
}

int mgos_adafruit_vs1053_paused(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player.paused();
}

int mgos_adafruit_vs1053_stopped(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player.stopped();
}

File mgos_adafruit_vs1053_currentTrack(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return "";
  return player.currentTrack();
}

void mgos_adafruit_vs1053_setVolume(Adafruit_VS1053_FilePlayer *player, uint8_t left, uint8_t right){
  if (player == nullptr) return "";
  return player.setVolume(left, right);
}

int mgos_adafruit_vs1053_playingMusic(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player.playingMusic();
}

void mgos_adafruit_vs1053_close(Adafruit_VS1053_FilePlayer *player) {
    if (player != nullptr) {
        delete player;
        player = nullptr;
    }
}
