* bC compiler version bC-Su23
* File compiled:  test1.bC
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION input
  1:     ST  3,-1(1)	Store return address 
  2:     IN  2,2,2	Grab int input 
  3:     LD  3,-1(1)	Load return address 
  4:     LD  1,0(1)	Adjust fp 
  5:    JMP  7,0(3)	Return 
* END FUNCTION input
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION output
  6:     ST  3,-1(1)	Store return address 
  7:     LD  3,-2(1)	Load parameter 
  8:    OUT  3,3,3	Output integer 
  9:     LD  3,-1(1)	Load return address 
 10:     LD  1,0(1)	Adjust fp 
 11:    JMP  7,0(3)	Return 
* END FUNCTION output
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION inputb
 12:     ST  3,-1(1)	Store return address 
 13:    INB  2,2,2	Grab bool input 
 14:     LD  3,-1(1)	Load return address 
 15:     LD  1,0(1)	Adjust fp 
 16:    JMP  7,0(3)	Return 
* END FUNCTION inputb
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION outputb
 17:     ST  3,-1(1)	Store return address 
 18:     LD  3,-2(1)	Load parameter 
 19:   OUTB  3,3,3	Output bool 
 20:     LD  3,-1(1)	Load return address 
 21:     LD  1,0(1)	Adjust fp 
 22:    JMP  7,0(3)	Return 
* END FUNCTION outputb
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION inputc
 23:     ST  3,-1(1)	Store return address 
 24:    INC  2,2,2	Grab char input 
 25:     LD  3,-1(1)	Load return address 
 26:     LD  1,0(1)	Adjust fp 
 27:    JMP  7,0(3)	Return 
* END FUNCTION inputc
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION outputc
 28:     ST  3,-1(1)	Store return address 
 29:     LD  3,-2(1)	Load parameter 
 30:   OUTC  3,3,3	Output char 
 31:     LD  3,-1(1)	Load return address 
 32:     LD  1,0(1)	Adjust fp 
 33:    JMP  7,0(3)	Return 
* END FUNCTION outputc
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION outnl
 34:     ST  3,-1(1)	Store return address 
 35:  OUTNL  3,3,3	Output a newline 
 36:     LD  3,-1(1)	Load return address 
 37:     LD  1,0(1)	Adjust fp 
 38:    JMP  7,0(3)	Return 
* END FUNCTION outnl
* 
* ** ** ** ** ** ** ** ** ** ** ** **
* FUNCTION main
* TOFF set: -2
 39:     ST  3,-1(1)	Store return address 
* COMPOUND
* TOFF set: -2
* Compound Body
* EXPRESSION
* CALL outnl
 40:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
 41:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 42:    LDA  3,1(7)	Return address in ac 
 43:    JMP  7,-10(7)	CALL outnl
 44:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
* CALL outnl
 45:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
 46:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 47:    LDA  3,1(7)	Return address in ac 
 48:    JMP  7,-15(7)	CALL outnl
 49:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
* CALL outnl
 50:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
 51:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 52:    LDA  3,1(7)	Return address in ac 
 53:    JMP  7,-20(7)	CALL outnl
 54:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
* CALL outnl
 55:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
 56:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 57:    LDA  3,1(7)	Return address in ac 
 58:    JMP  7,-25(7)	CALL outnl
 59:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
 60:    LDC  3,9(6)	Load integer constant 
 61:     ST  3,-2(1)	Push index 
* TOFF dec: -3
 62:    LDC  3,113(6)	Load char constant 
* TOFF inc: -2
 63:     LD  4,-2(1)	Pop index 
 64:    LDA  5,-1(0)	Load address of base of array zev
 65:    SUB  5,5,4	Compute offset of value 
 66:     ST  3,0(5)	Store variable zev
* EXPRESSION
 67:    LDC  3,42(6)	Load integer constant 
 68:     ST  3,-11(0)	Store variable x
* EXPRESSION
* CALL outputc
 69:     ST  1,-2(1)	Store fp in ghost frame for outputc
* TOFF dec: -3
* TOFF dec: -4
* Param 1
 70:    LDA  3,-1(0)	Load address of base of array zev
 71:     ST  3,-4(1)	Push left side 
* TOFF dec: -5
 72:    LDC  3,0(6)	Load integer constant 
* TOFF inc: -4
 73:     LD  4,-4(1)	Pop left into ac1 
 74:    SUB  3,4,3	compute location from index 
 75:     LD  3,0(3)	Load array element 
 76:     ST  3,-4(1)	Push parameter 
* TOFF dec: -5
* Param end outputc
 77:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 78:    LDA  3,1(7)	Return address in ac 
 79:    JMP  7,-52(7)	CALL outputc
 80:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -2
* EXPRESSION
* CALL outputc
 81:     ST  1,-2(1)	Store fp in ghost frame for outputc
* TOFF dec: -3
* TOFF dec: -4
* Param 1
 82:    LDA  3,-1(0)	Load address of base of array zev
 83:     ST  3,-4(1)	Push left side 
* TOFF dec: -5
 84:    LDC  3,1(6)	Load integer constant 
* TOFF inc: -4
 85:     LD  4,-4(1)	Pop left into ac1 
 86:    SUB  3,4,3	compute location from index 
 87:     LD  3,0(3)	Load array element 
 88:     ST  3,-4(1)	Push parameter 
* TOFF dec: -5
* Param end outputc
 89:    LDA  1,-2(1)	Ghost frame becomes new active frame 
 90:    LDA  3,1(7)	Return address in ac 
 91:    JMP  7,-64(7)	CALL outputc
 92:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -2
* EXPRESSION
* CALL outputc
 93:     ST  1,-2(1)	Store fp in ghost frame for outputc
* TOFF dec: -3
* TOFF dec: -4
* Param 1
 94:    LDA  3,-1(0)	Load address of base of array zev
 95:     ST  3,-4(1)	Push left side 
* TOFF dec: -5
 96:    LDC  3,2(6)	Load integer constant 
* TOFF inc: -4
 97:     LD  4,-4(1)	Pop left into ac1 
 98:    SUB  3,4,3	compute location from index 
 99:     LD  3,0(3)	Load array element 
100:     ST  3,-4(1)	Push parameter 
* TOFF dec: -5
* Param end outputc
101:    LDA  1,-2(1)	Ghost frame becomes new active frame 
102:    LDA  3,1(7)	Return address in ac 
103:    JMP  7,-76(7)	CALL outputc
104:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -2
* EXPRESSION
* CALL outputc
105:     ST  1,-2(1)	Store fp in ghost frame for outputc
* TOFF dec: -3
* TOFF dec: -4
* Param 1
106:    LDA  3,-1(0)	Load address of base of array zev
107:     ST  3,-4(1)	Push left side 
* TOFF dec: -5
108:    LDC  3,8(6)	Load integer constant 
* TOFF inc: -4
109:     LD  4,-4(1)	Pop left into ac1 
110:    SUB  3,4,3	compute location from index 
111:     LD  3,0(3)	Load array element 
112:     ST  3,-4(1)	Push parameter 
* TOFF dec: -5
* Param end outputc
113:    LDA  1,-2(1)	Ghost frame becomes new active frame 
114:    LDA  3,1(7)	Return address in ac 
115:    JMP  7,-88(7)	CALL outputc
116:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -2
* EXPRESSION
* CALL outputc
117:     ST  1,-2(1)	Store fp in ghost frame for outputc
* TOFF dec: -3
* TOFF dec: -4
* Param 1
118:    LDA  3,-1(0)	Load address of base of array zev
119:     ST  3,-4(1)	Push left side 
* TOFF dec: -5
120:    LDC  3,9(6)	Load integer constant 
* TOFF inc: -4
121:     LD  4,-4(1)	Pop left into ac1 
122:    SUB  3,4,3	compute location from index 
123:     LD  3,0(3)	Load array element 
124:     ST  3,-4(1)	Push parameter 
* TOFF dec: -5
* Param end outputc
125:    LDA  1,-2(1)	Ghost frame becomes new active frame 
126:    LDA  3,1(7)	Return address in ac 
127:    JMP  7,-100(7)	CALL outputc
128:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -2
* EXPRESSION
* CALL outnl
129:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
130:    LDA  1,-2(1)	Ghost frame becomes new active frame 
131:    LDA  3,1(7)	Return address in ac 
132:    JMP  7,-99(7)	CALL outnl
133:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
* CALL outnl
134:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
135:    LDA  1,-2(1)	Ghost frame becomes new active frame 
136:    LDA  3,1(7)	Return address in ac 
137:    JMP  7,-104(7)	CALL outnl
138:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* EXPRESSION
* CALL outnl
139:     ST  1,-2(1)	Store fp in ghost frame for outnl
* TOFF dec: -3
* TOFF dec: -4
* Param end outnl
140:    LDA  1,-2(1)	Ghost frame becomes new active frame 
141:    LDA  3,1(7)	Return address in ac 
142:    JMP  7,-109(7)	CALL outnl
143:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -2
* TOFF set: -2
* END COMPOUND
* Add standard closing in case there is no return statement
144:    LDC  2,0(6)	Set return value to 0 
145:     LD  3,-1(1)	Load return address 
146:     LD  1,0(1)	Adjust fp 
147:    JMP  7,0(3)	Return 
* END FUNCTION main
  0:    JMP  7,147(7)	Jump to init [backpatch] 
* INIT
148:    LDA  1,-13(0)	set first frame at end of globals 
149:     ST  1,0(1)	store old fp (point to self) 
* INIT GLOBALS AND STATICS
150:    LDC  3,625(6)	Load integer constant 
151:     ST  3,-11(0)	Store variable x
152:    LDC  3,666(6)	Load integer constant 
153:     ST  3,-12(0)	Store variable y
154:    LDC  3,10(6)	load size of array zev
155:     ST  3,0(0)	save size of array zev
* END INIT GLOBALS AND STATICS
156:    LDA  3,1(7)	Return address in ac 
157:    JMP  7,-119(7)	Jump to main 
158:   HALT  0,0,0	DONE! 
* END INIT
