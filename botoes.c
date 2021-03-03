/*
 * File:   botoes.c
 * Author: 20185076
 *
 * Created on 3 de Março de 2021, 16:06
 */

#include <xc.h>

#define S1 PORTDbits.RD1
#define S0 PORTDbits.RD0


void botoes_init (void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;        
}

char s1(void)
{
    return(S1);
}

char s0(void)
{
    return(S0);
}
