/*
	Author: bitluni 2019
	License: 
	Creative Commons Attribution ShareAlike 4.0
	https://creativecommons.org/licenses/by-sa/4.0/
	
	For further details check out: 
		https://youtube.com/bitlunislab
		https://github.com/bitluni
		http://bitluni.net
*/
#ifndef __AudioOutput_H__
#define __AudioOutput_H__

#include "soc/i2s_reg.h"
#include "soc/timer_group_struct.h"
#include "driver/periph_ctrl.h"
#include "driver/timer.h"
#include "AudioSystem.h"

//class AudioOutput;
//void IRAM_ATTR timerInterrupt(AudioOutput *audioOutput);

class AudioOutput
{
  public:
  AudioSystem *audioSystem;
  AudioOutput();
  void init(AudioSystem &audioSystem);

};


#endif
