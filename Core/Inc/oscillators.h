/*
 * oscillators.h
 *
 */

#ifndef INC_OSCILLATORS_H_
#define INC_OSCILLATORS_H_
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include "CONSTANTS.h"


/*----------------------------------------------------------------------------*/

typedef struct
{
	float_t 	amp;	// should be <= 1 for normal sound output
	float_t		last_amp;
	float_t 	freq;	// Hertz
	uint8_t 	syncin;//hardsync in
	uint8_t 	syncout;//hardsync out
	float_t 	phase;	// radians
	float_t		phi0;	// radians
	float_t		modInd;	// Modulation Index for FM
	float_t		mul;	// pitch frequency multiplier
	float_t 	out;	// output sample

} Oscillator_t;


/*-------------------------------------------------------*/
float waveCompute(float f0);
/*-------------------------------------------------------*/
void 	osc_init(Oscillator_t * op, float_t amp, float_t freq);




#endif /* INC_OSCILLATORS_H_ */
