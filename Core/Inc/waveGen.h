/*
 * waveGen.h
 *
 */

#ifndef INC_WAVEGEN_H_
#define INC_WAVEGEN_H_
#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include "main.h"
#include "oscillators.h"



/* Exported functions ------------------------------------------------------- */
void make_sound(uint16_t *buf , uint16_t len);
void Synth_Init(void);

#endif /* INC_WAVEGEN_H_ */
