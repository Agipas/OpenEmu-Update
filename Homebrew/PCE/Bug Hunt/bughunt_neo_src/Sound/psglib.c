/************************************************************************************/
/* psgLib.c - HuC compatible functions for managing the MML Player.                 */
/*----------------------------------------------------------------------------------*/
/* NOT for direct sound output. See WaveLib.c for that.                             */
/*..................................................................................*/

#include "sound/sndDefs.h"

/*..................................................................................*/
/* variables used to communicate with assembler psg functions.                      */
/*..................................................................................*/

char   track;
char   mstat;
char   sstat;

/*--------------------------------------------------------------------------------------*/
/* psgInit() - wrapper for psg initialization.                                          */
/*--------------------------------------------------------------------------------------*/

psgInit( SysNumber )
int      SysNumber;
{
#asm
    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------
	
    lda		#PSGF_INIT
    sta		<_dh
	
    ;-----------------------------------------------------------------
	; get parameter off stack
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
			
    ;-----------------------------------------------------------------
	; save it, and call bios.
    ;-----------------------------------------------------------------

	sta 	<_al     	; _al is driver system number
    jsr		psg_bios

#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgOn() - wrapper for psg on function.                                               */
/*--------------------------------------------------------------------------------------*/

psgOn( Irq )
int    Irq;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_ON
    sta		<_dh
	
    ;-----------------------------------------------------------------
	; get parameter off stack
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
			
    ;-----------------------------------------------------------------
	; save it, and call bios.
    ;-----------------------------------------------------------------

    sta	<_al          ; irq to use. 1 = vsync
                      ;             0 = timer
    jsr	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgOff() - wrapper for psg off function.                                             */
/*--------------------------------------------------------------------------------------*/

psgOff()
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_OFF
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; no parameters: just call bios.
    ;-----------------------------------------------------------------

    jsr		psg_bios

#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterBank() - set bank values for psg mml player.                              */
/*--------------------------------------------------------------------------------------*/

psgRegisterBank( low, high )
int         low, high;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_BANK
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameters off stack and save them
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     <_ah
	
    ldy     #2	
	lda		[__stack],Y
    sta     <_al
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterTrack() - set track index table address for psg mml player.               */
/*--------------------------------------------------------------------------------------*/

psgRegisterTrack( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_TRACK
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     <_al

	iny
	lda		[__stack],Y
    sta     <_ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterWave() - set wave index table address for psg mml player.                 */
/*--------------------------------------------------------------------------------------*/

psgRegisterWave( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_WAVE
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

	iny
	lda		[__stack],Y
    sta     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterEnvelope() - set envelope index table address for psg mml player.         */
/*--------------------------------------------------------------------------------------*/

psgRegisterEnvelope( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_ENV
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

	iny
	lda		[__stack],Y
    sta     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterFM() - set Frequency Modulation index table address for psg mml player.   */
/*--------------------------------------------------------------------------------------*/

psgRegisterFM( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_FM
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

	iny
	lda		[__stack],Y
    sta     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterPE() - set Pitch Envelope index table address for psg mml player.         */
/*--------------------------------------------------------------------------------------*/

psgRegisterPE( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_PE
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

	iny
	lda		[__stack],Y
    sta     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgRegisterPC() - set PerCussion index table address for psg mml player.             */
/*--------------------------------------------------------------------------------------*/

psgRegisterPC( addr )
int         addr;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_PC
    sta		<_dh          ; save function
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

	iny
	lda		[__stack],Y
    sta     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm
}

/*--------------------------------------------------------------------------------------*/
/* psgPlay() - wrapper for psg play function.                                           */
/*--------------------------------------------------------------------------------------*/

psgPlay( track_no )
int      track_no;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------


	lda		#PSGF_PLAY
	sta		<_dh
	
	
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah
	
    ;-----------------------------------------------------------------
	; and call bios.
    ;-----------------------------------------------------------------

	jsr 	psg_bios
	
#endasm

}

/*======================================================================================*/
/* psgMStat() - wrapper for psg mStat function.                                         */
/*......................................................................................*/
/* PSG_MSTAT is main track status. we save it in global _mstat.                         */
/*--------------------------------------------------------------------------------------*/

psgMStat()
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

    lda		#PSGF_MSTAT
    sta		<_dh         ; set function number
            
    ;-----------------------------------------------------------------
	; read track status and return.
    ;-----------------------------------------------------------------

	jsr		psg_bios     ; get status
	tax
	lda		#0			 ; clear high byte of status

#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgSStat() - wrapper for psg sStat function.                                         */
/*......................................................................................*/
/* PSG_SSTAT is sub-track status. we save it in global _sstat.                         */
/*--------------------------------------------------------------------------------------*/

psgSStat()
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_SSTAT
	sta		<_dh          ; set function number
            
    ;-----------------------------------------------------------------
	; read track status and return.
    ;-----------------------------------------------------------------

	jsr		psg_bios      ; get status
	tax
	lda		#0            ; clear high byte
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgMStop() - wrapper for psg mStop function.                                         */
/*--------------------------------------------------------------------------------------*/

psgMStop( tracks )
int       tracks;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_MSTOP
    sta		<_dh          ; set function number
         
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah

    ;-----------------------------------------------------------------
	; read track status and return.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	lda		#$0
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgSStop() - wrapper for psg sStop function.                                         */
/*--------------------------------------------------------------------------------------*/

psgSStop( tracks )
int       tracks;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_SSTOP
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah

    ;-----------------------------------------------------------------
	; read track status and return.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	lda		#0
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgAllStop() - wrapper for psg aStop function.                                       */
/*--------------------------------------------------------------------------------------*/

psgAllStop()
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_ASTOP
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; and call bios to stop everything
    ;-----------------------------------------------------------------
	
    jsr		psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgMute() - wrapper for psg mVOff function.                                          */
/*--------------------------------------------------------------------------------------*/

psgMute( tracks )
int      tracks;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_MVOFF
    sta		<_dh          ; set function number
         
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah
		 
    ;-----------------------------------------------------------------
	; and call bios to mute tracks
    ;-----------------------------------------------------------------

    jsr		psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgCont() - wrapper for psg Cont function.                                           */
/*--------------------------------------------------------------------------------------*/
/* whom :  0 = Main   1 = Sub    2= All.                                                */
/*--------------------------------------------------------------------------------------*/

psgCont( whom )
int      whom;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_CONT
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah

    ;-----------------------------------------------------------------
	; ask bios to continue tracks.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgFadeOut() - wrapper for psg FadeOut function.                                     */
/*--------------------------------------------------------------------------------------*/

psgFadeOut( amount )
int         amount;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_FDOUT
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al
    stz     _ah

    ;-----------------------------------------------------------------
	; ask bios to fade tracks.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgDelay() - wrapper for psg SetDCnt (Delay Count) function.                         */
/*--------------------------------------------------------------------------------------*/

psgDelay( amount )
int         amount;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_DCNT
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

    ;-----------------------------------------------------------------
	; ask bios to fade tracks.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	
#endasm
}
/*--------------------------------------------------------------------------------------*/
/* psgTempo() - wrapper for psg SetTempo function.                                      */
/*--------------------------------------------------------------------------------------*/

psgTempo( amount )
int         amount;
{
#asm

    ;-----------------------------------------------------------------
	; Init function code.
	;-----------------------------------------------------------------

	lda		#PSGF_TEMPO
    sta		<_dh          ; set function number
 
    ;-----------------------------------------------------------------
	; get parameter off stack and save it
    ;-----------------------------------------------------------------
	
    ldy		#0
	lda		[__stack],Y
    sta     _al

    ;-----------------------------------------------------------------
	; ask bios to fade tracks.
    ;-----------------------------------------------------------------

    jsr		psg_bios
	
#endasm
}
