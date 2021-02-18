/*
 * oscillators.c
 *
 */

#include "oscillators.h"



Oscillator_t 		op1;

/*===============================================================================================================*/

void
osc_init(Oscillator_t * op, float_t amp, float_t freq)
{
	op->amp = amp;
	op->last_amp = amp;
	op->syncin = 0;  //hardsync in
	op->syncout = 0;  //hardsync out
	op->freq = freq;
	op->phase = 0;
	op->out = 0;
	op->modInd = 0;
	op->mul = 1;
}
/*-------------------------------------------------------*/

void
OpSetFreq(Oscillator_t * op, float_t f)
{
	op->freq = f;
}

/*-------------------------------------------------------*/
float_t BasicSaw(Oscillator_t * op)
{
	while (op->phase < 0) // keep phase in [0, 2pi]
		op->phase += _2PI;
	while (op->phase >= _2PI)
		op->phase -= _2PI;

	if (op->phase < _PI) op->out = 0.5f*op->amp * (op->phase / _PI);
	else op->out =  .5f*op->amp * (op->phase / _PI - 2);

	op->phase += _2PI * Ts * op->freq; // increment phase
	return op->out;
}
/*-------------------------------------------------------*/

/*---------------------------------------------------------------*/

/*-------------------------------------------------------*/


float waveCompute(float frq)
{
	float y;

	OpSetFreq(&op1, frq);

	y = 0.8f * BasicSaw(&op1);

	return y;
}
