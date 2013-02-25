/***************************************************************************//**
 *   @file   cf_hdmi.h
********************************************************************************
 * Copyright 2013(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
********************************************************************************
 *   SVN Revision: $WCREV$
*******************************************************************************/

#ifndef CF_HDMI_H_
#define CF_HDMI_H_

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/
#include "xparameters.h"

/******************************************************************************/
/************************** Macros Definitions ********************************/
/******************************************************************************/
#define CF_CLKGEN_BASEADDR  0x66000000
#define CFV_BASEADDR        0x6c000000
#define CFA_BASEADDR        0x75c00000
#define DDR_BASEADDR        0x00000000
#define UART_BASEADDR       0xe0001000
#define VDMA_BASEADDR       0x43000000
#define ADMA_BASEADDR       0x40400000
#define IIC_BASEADDR        0x41600000
#define H_STRIDE            1920
#define H_COUNT             2200
#define H_ACTIVE            1920
#define H_WIDTH             44
#define H_FP                88
#define H_BP                148
#define V_COUNT             1125
#define V_ACTIVE            1080
#define V_WIDTH             5
#define V_FP                4
#define V_BP                36
#define A_SAMPLE_FREQ       48000
#define A_FREQ              1400

#define H_DE_MIN (H_WIDTH+H_BP)
#define H_DE_MAX (H_WIDTH+H_BP+H_ACTIVE)
#define V_DE_MIN (V_WIDTH+V_BP)
#define V_DE_MAX (V_WIDTH+V_BP+V_ACTIVE)
#define VIDEO_LENGTH  (H_ACTIVE*V_ACTIVE)
#define AUDIO_LENGTH  (A_SAMPLE_FREQ/A_FREQ)
#define VIDEO_BASEADDR DDR_BASEADDR + 0x2000000
#define AUDIO_BASEADDR DDR_BASEADDR + 0x1000000

/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/
void InitHdmiVideoPcore(void);
void InitHdmiAudioPcore(void);
void AudioClick(void);

#endif /* CF_HDMI_H_ */