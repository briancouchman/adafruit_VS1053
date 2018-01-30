#include "mgos_adafruit_VS1053.h"
// #include "mongoose/mongoose.h"

Adafruit_VS1053_FilePlayer *mgos_adafruit_VS1053_create(){
  return new Adafruit_VS1053_FilePlayer(VS1053_RESET, VS1053_CS, VS1053_DCS, VS1053_DREQ, CARDCS);
}

int mgos_adafruit_VS1053_begin(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player->begin();
}

bool mgos_adafruit_VS1053_startPlayingFile(Adafruit_VS1053_FilePlayer *player, char *fileName){
  if (player == nullptr) return 0;
  return player->startPlayingFile(fileName);
}

void mgos_adafruit_VS1053_stopPlaying(Adafruit_VS1053_FilePlayer *player){
  if (player != nullptr){
    player->stopPlaying();
  }
}

void mgos_adafruit_VS1053_pausePlaying(Adafruit_VS1053_FilePlayer *player){
  if (player != nullptr){
    player->pausePlaying(true);
  }
}

bool mgos_adafruit_VS1053_paused(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player->paused();
}

bool mgos_adafruit_VS1053_stopped(Adafruit_VS1053_FilePlayer *player){
  if (player == nullptr) return 0;
  return player->stopped();
}

// void mgos_adafruit_VS1053_currentTrack(Adafruit_VS1053_FilePlayer *player){
//   if (player == nullptr) return "";
//   return player->currentTrack();
// }

void mgos_adafruit_VS1053_setVolume(Adafruit_VS1053_FilePlayer *player, int left, int right){
  if (player == nullptr) return;
  return player->setVolume(left, right);
}

// int mgos_adafruit_VS1053_playingMusic(Adafruit_VS1053_FilePlayer *player){
//   if (player == nullptr) return 0;
//   return player->playingMusic();
// }

void mgos_adafruit_VS1053_close(Adafruit_VS1053_FilePlayer *player) {
    if (player != nullptr) {
        delete player;
        player = nullptr;
    }
}
