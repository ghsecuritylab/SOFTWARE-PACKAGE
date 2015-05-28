/* ----------------------------------------------------------------------------
 *         SAM Software Package License 
 * ----------------------------------------------------------------------------
 * Copyright (c) 2013, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

/** \file */

/** \addtogroup isc_module
 * @{
 * \section isc_usage Usage
 * - isc_start_capture: Send Capture Input Stream Command to start a single 
 *						shot capture or a multiple frame
 */
/**@}*/

#ifndef ISC_H
#define ISC_H


/*------------------------------------------------------------------------------
 *         Exported functions
 *----------------------------------------------------------------------------*/
/*------------------------------------------
 *         ISC Control functions
 *----------------------------------------*/
extern void isc_start_capture(void);
extern void isc_stop_capture(void);
extern uint32_t isc_get_ctrl_status(void);
extern void isc_update_profile(void);
extern void isc_update_histogram_table(void);
extern void isc_clear_histogram_table(void);
extern void isc_software_reset(void);

/*------------------------------------------
 *      PFE(Parallel Front End) functions
 *----------------------------------------*/
extern void isc_pfe_set_cropping_area( 
			uint32_t Hstart, uint32_t Hend, uint32_t Vstart, uint32_t Vend)
/*------------------------------------------
 *         Clock configuration functions
 *----------------------------------------*/
 extern void isc_configure_isp_clock(
			uint32_t ispClockDiv, uint32_t ispClockSelection);
extern void isc_enable_isp_clock(void);
extern void isc_disable_isp_clock(void);
extern void isc_reset_isp_clock(void);
extern void isc_configure_master_clock(
			uint32_t masterClockDiv, uint32_t masterClockSelection);
extern void isc_enable_master_clock(void);
extern void isc_disable_master_clock(void);
extern void isc_reset_master_clock(void);
extern uint32_t isc_get_clock_status(void);
/*------------------------------------------
 *         Interrupt functions
 *----------------------------------------*/
extern void isc_enable_interrupt(uint32_t flag);
extern void isc_disable_interrupt(uint32_t flag);
extern uint32_t isc_interrupt_status(void);
/*------------------------------------------
 *         White Balance functions
 *----------------------------------------*/

#endif //#ifndef ISC_H

