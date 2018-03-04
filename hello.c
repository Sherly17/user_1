{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl360\sa240\partightenfactor0

\f0\fs32 \cf2 \expnd0\expndtw0\kerning0
#include<stdio.h> 
\fs24 \

\fs32 void microkernel_sendmsg(char *); 
\fs24 \

\fs32 void main()\
\{\
 printf("Helloworld!\\n"); \
 microkernel_sendmsg("is more portable"); 
\fs24 \

\fs32 \} 
\fs24 \

\fs32 void microkernel_sendmsg(char *a)\
\{ \
 printf("microkernel: %s\\n", a); 
\fs24 \

\fs32 \}\uc0\u8232 
\fs24 \
}