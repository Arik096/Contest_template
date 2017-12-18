include emu8086.inc
.MODEL SMALL 
.STACK 32H
.DATA 
X DW ?
Y DW ?
CALC DB   '> Calculator <$'
OPTI DB   'Options are:$' 
SUMM DB   '1.Summation$'
SUBT DB   '2.Subtraction$'
MULT DB   '3.Multiplication$'
DIVI DB   '4.Division$'
FACT DB   '5.Factorial$'
EXIT DB   '6.Exit$'
FNUM DB   'Enter your 1st number= $'
SNUM DB   'Enter your 2nd number= $'
RES1 DB   'Result= $'
RES2 DB   'Result=1$'
ENTR DB   'Enter your option= $'
THAN DB   'Thank you for using the Calcultor$'
SORR DB   'Sorry,we can not divide anything with zero, try again$'
ENT2 DB   'Enter your number= $'
N_LI DB   0AH,0DH,'$'
.CODE
MAIN PROC
JMP shuru    
HLT 
   DEFINE_SCAN_NUM              
   DEFINE_PRINT_NUM
   DEFINE_PRINT_NUM_UNS      
shuru:
     MOV AX, @DATA
     MOV DS, AX 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, CALC 
     MOV AH, 9            
     INT 21H
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, OPTI 
     MOV AH, 9            
     INT 21H  
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, SUMM 
     MOV AH, 9            
     INT 21H  
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, SUBT 
     MOV AH, 9            
     INT 21H 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, MULT 
     MOV AH, 9            
     INT 21H  
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, DIVI 
     MOV AH, 9            
     INT 21H 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, FACT 
     MOV AH, 9            
     INT 21H 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, EXIT 
     MOV AH, 9            
     INT 21H 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
shuru1:
     LEA DX, ENTR 
     MOV AH, 9            
     INT 21H 
     CALL SCAN_NUM 
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     CMP CX,1
     JE jug
     CMP CX,2
     JE biyug
     CMP CX,3
     JE ghun
     CMP CX,4
     JE vhag
     CMP CX,5
     JE facto 
     CMP CX,6
     JE sesh           
jug:
   LEA DX, FNUM 
   MOV AH, 9            
   INT 21H 
   CALL SCAN_NUM
   MOV X,CX  
   LEA DX, N_LI 
   MOV AH, 9            
   INT 21H
   LEA DX, SNUM 
   MOV AH, 9            
   INT 21H 
   CALL SCAN_NUM
   MOV Y,CX
   LEA DX, N_LI 
   MOV AH, 9            
   INT 21H 
   MOV AX,X
   ADD AX,Y
   MOV [0204H],AX 
   CALL PRINT_NUM 
   LEA DX, N_LI 
   MOV AH, 9            
   INT 21H 
   JMP shuru1
biyug:   
     LEA DX, FNUM 
     MOV AH, 9            
     INT 21H
     CALL SCAN_NUM
     MOV X,CX  
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     LEA DX, SNUM 
     MOV AH, 9            
     INT 21H 
     CALL SCAN_NUM
     MOV Y,CX
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     MOV AX,X
     SUB AX,Y
     MOV [0204H],AX
     CALL PRINT_NUM
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H 
     JMP shuru1 
ghun:   
    LEA DX, FNUM 
    MOV AH, 9            
    INT 21H
    CALL SCAN_NUM
    MOV X,CX  
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H
    LEA DX, SNUM 
    MOV AH, 9            
    INT 21H 
    CALL SCAN_NUM
    MOV Y,CX
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H
    MOV AX,X
    IMUL Y
    MOV [0204H],AX 
    CALL PRINT_NUM
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H 
    JMP shuru1 
vhag:   
    LEA DX, FNUM 
    MOV AH, 9            
    INT 21H
    CALL SCAN_NUM
    MOV X,CX  
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H
    LEA DX, SNUM 
    MOV AH, 9            
    INT 21H 
    CALL SCAN_NUM
    MOV Y,CX
    CMP Y,0
    JE ajaira
    MOV AX,X
    IDIV Y
    MOV [0204H],AX
    CALL PRINT_NUM
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H
    JMP shuru1   
facto:   
     LEA DX, SNUM 
     MOV AH, 9            
     INT 21H
     CALL SCAN_NUM
     MOV X,CX  
     LEA DX, N_LI 
     MOV AH, 9            
     INT 21H
     CMP X,0
     JE ajaira1
     MOV AX,01H
     MOV BX,01H
     LOOP1:
          IMUL BX
          INC BX
          CMP BX,X
          JLE LOOP1
          MOV [0204H],AX
          CALL PRINT_NUM
          LEA DX, N_LI 
          MOV AH, 9            
          INT 21H
          JMP shuru1            
ajaira: 
      LEA DX, N_LI 
      MOV AH, 9            
      INT 21H
      LEA DX, SORR
      MOV AH, 9            
      INT 21H
      LEA DX, N_LI 
      MOV AH, 9            
      INT 21H
      JMP shuru1  
ajaira1: 
       LEA DX, N_LI 
       MOV AH, 9            
       INT 21H
       LEA DX, RES2 
       MOV AH, 9            
       INT 21H
       LEA DX, N_LI 
       MOV AH, 9            
       INT 21H
       JMP shuru1         
sesh:
    LEA DX, THAN 
    MOV AH, 9            
    INT 21H
    LEA DX, N_LI 
    MOV AH, 9            
    INT 21H
END MAIN
ENDP MAIN