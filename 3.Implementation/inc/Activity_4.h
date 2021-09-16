/**
 * @file Activity_4.h
 * @author Satyajit Patil
 * @brief To display output temparature
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

void USARTInit(uint16_t ubrr_value);

void USARTWrite(char temp_value);

char temp_disp();
#endif 
