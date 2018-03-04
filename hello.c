{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl360\sa240\partightenfactor0

\f0\fs34 \cf2 \expnd0\expndtw0\kerning0
#include<stdio.h>\
void microkernel_sendmsg(char *);\
void main()\
\{\
 printf("Hello world!\\n");\
 printf("This must be a monolithic design\\n");\
 microkernel_sendmsg("is more portable");\
\}\
void microkernel_sendmsg(char *a)\
\{\
 printf("microkernel: %s\\n", a);\
\}
\fs32 \cf2 \
}