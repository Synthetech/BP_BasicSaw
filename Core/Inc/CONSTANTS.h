/*
 * CONSTANTS.h
 *
 */

#ifndef INC_CONSTANTS_H_
#define INC_CONSTANTS_H_
/*--------------------------------------------------------------------------------------*/

#define SAMPLERATE              32000
//#define SAMPLERATE              44100

#define Ts						(1.f/SAMPLERATE)  // sample period
#define _2PI                    6.283185307f
#define _PI                    	3.14159265f

#define BUFF_LEN_DIV4           500 // number of samples in the audiobuffer for each channel <==> XX ms latency at 48kHz
#define BUFF_LEN_DIV2           (2*BUFF_LEN_DIV4)
#define BUFF_LEN                (4*BUFF_LEN_DIV4)  // Audio buffer length : count in 16bits half-words, must be a multiple of 4.
#define VOL                     70 // initial output DAC volume
#define MAXVOL                  100 // maximal output DAC volume

#define MIDI_MAX				127.f 	// floating max value

#if defined   (__GNUC__)        /* GNU Compiler */
    #define __ALIGN    __attribute__ ((aligned (4)))
#endif /* __GNUC__ */

/************************************************************************************/


#endif /* INC_CONSTANTS_H_ */
