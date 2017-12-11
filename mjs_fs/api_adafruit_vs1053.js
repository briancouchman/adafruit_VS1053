let Adafruit_VS1053 = {

    _create:        ffi('void *mgos_adafruit_vs1053_create()'),
    _bgn:           ffi('int mgos_adafruit_vs1053_begin(void *)'),
    _startPlaying:  ffi('int mgos_adafruit_vs1053_startPlayingFile(void *, char *)'),
    _stopPlaying:   ffi('void mgos_adafruit_vs1053_stopPlaying(void *)'),
    _pausePlaying:  ffi('void mgos_adafruit_vs1053_pausePlaying(void *)'),
    _isPaused:      ffi('int mgos_adafruit_vs1053_paused(void *)'),
    _isStopped:     ffi('int mgos_adafruit_vs1053_stopped(void *)'),
    _isPlaying:     ffi('int mgos_adafruit_vs1053_playingMusic(void *)'),
    _currentTrack:  ffi('void *mgos_adafruit_vs1053_currentTrack(void *)'),
    _close:         ffi('void mgos_adafruit_vs1053_close(void *)'),
    _setVolume:     ffi('void mgos_adafruit_vs1053_setVolume(void *, uint8_t left, uint8_t right)'),

    _proto: {

        // ## **`myVS1053.begin()`**
        // Initialize sensor and make it ready for use.
        // Return value: 1 if sensor is ready, 0 otherwise.
        begin: function () {
            return Adafruit_VS1053._bgn(this.player);
        },

        startPlaying: function(fileName){
          return Adafruit_VS1053._startPlaying(this.player, fileName);
        },

        stopPlaying: function(){
          Adafruit_VS1053._stopPlaying(this.player);
        },

        pausePlaying: function(){
          Adafruit_VS1053._pausePlaying(this.player);
        },

        isStopped: function(){
          return Adafruit_VS1053._isStopped(this.player);
        },

        isPaused: function(){
          return Adafruit_VS1053._isPaused(this.player);
        },

        isPlaying: function(){
          return Adafruit_VS1053._isPlaying(this.player);
        },

        getCurrentTrack: function(){
          return Adafruit_VS1053._currentTrack(this.player);
        },

        setVolume: function(left, right){
          left = left > 100? 100: left;
          left = left < 0? 0: left;
          right = right > 100 ? 100 : right;
          right = right < 0 ? 0 : right;
          return Adafruit_VS1053._setVolume(this.player, left, right);
        },

        close: function(){
          Adafruit_VS1053._close(this.player);
        }
    },

    // ## **`Adafruit_VS1053.create(  )`**
    // Create an Adafruit_VS1053_FilePlayer instance.
    // Return value: an object representing the VS1053 feather with the methods defined in _proto: {...} (above).
    create: function (addr) {
        let obj = null;

        obj = Object.create(Adafruit_VS1053._proto);
        obj.player = Adafruit_VS1053._create();

        return obj;
    }

};
