* bC compiler version bC-Su23
* File compiled:  io.bC
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
* TOFF set: -3
* Compound Body
* EXPRESSION
 40:    LDC  3,1(6)	Load integer constant 
 41:     ST  3,-2(1)	Store variable x
* WHILE
 42:     LD  3,-2(1)	Load variable x
 43:     ST  3,-3(1)	Push left side 
* TOFF dec: -4
 44:    LDC  3,2(6)	Load integer constant 
* TOFF inc: -3
 45:     LD  4,-3(1)	Pop left into ac1 
 46:    TNE  3,4,3	Op != 
 47:    JNZ  3,1(7)	Jump to while part 
* DO
* COMPOUND
* TOFF set: -3
* Compound Body
* EXPRESSION
* CALL outputc
 49:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 50:    LDC  3,68(6)	Load char constant 
 51:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 52:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 53:    LDA  3,1(7)	Return address in ac 
 54:    JMP  7,-27(7)	CALL outputc
 55:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 56:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 57:    LDC  3,111(6)	Load char constant 
 58:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 59:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 60:    LDA  3,1(7)	Return address in ac 
 61:    JMP  7,-34(7)	CALL outputc
 62:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 63:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 64:    LDC  3,32(6)	Load char constant 
 65:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 66:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 67:    LDA  3,1(7)	Return address in ac 
 68:    JMP  7,-41(7)	CALL outputc
 69:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 70:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 71:    LDC  3,121(6)	Load char constant 
 72:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 73:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 74:    LDA  3,1(7)	Return address in ac 
 75:    JMP  7,-48(7)	CALL outputc
 76:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 77:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 78:    LDC  3,111(6)	Load char constant 
 79:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 80:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 81:    LDA  3,1(7)	Return address in ac 
 82:    JMP  7,-55(7)	CALL outputc
 83:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 84:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 85:    LDC  3,117(6)	Load char constant 
 86:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 87:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 88:    LDA  3,1(7)	Return address in ac 
 89:    JMP  7,-62(7)	CALL outputc
 90:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 91:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 92:    LDC  3,32(6)	Load char constant 
 93:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
 94:    LDA  1,-3(1)	Ghost frame becomes new active frame 
 95:    LDA  3,1(7)	Return address in ac 
 96:    JMP  7,-69(7)	CALL outputc
 97:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
 98:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
 99:    LDC  3,119(6)	Load char constant 
100:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
101:    LDA  1,-3(1)	Ghost frame becomes new active frame 
102:    LDA  3,1(7)	Return address in ac 
103:    JMP  7,-76(7)	CALL outputc
104:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
105:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
106:    LDC  3,97(6)	Load char constant 
107:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
108:    LDA  1,-3(1)	Ghost frame becomes new active frame 
109:    LDA  3,1(7)	Return address in ac 
110:    JMP  7,-83(7)	CALL outputc
111:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
112:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
113:    LDC  3,110(6)	Load char constant 
114:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
115:    LDA  1,-3(1)	Ghost frame becomes new active frame 
116:    LDA  3,1(7)	Return address in ac 
117:    JMP  7,-90(7)	CALL outputc
118:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
119:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
120:    LDC  3,116(6)	Load char constant 
121:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
122:    LDA  1,-3(1)	Ghost frame becomes new active frame 
123:    LDA  3,1(7)	Return address in ac 
124:    JMP  7,-97(7)	CALL outputc
125:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outnl
126:     ST  1,-3(1)	Store fp in ghost frame for outnl
* TOFF dec: -4
* TOFF dec: -5
* Param end outnl
127:    LDA  1,-3(1)	Ghost frame becomes new active frame 
128:    LDA  3,1(7)	Return address in ac 
129:    JMP  7,-96(7)	CALL outnl
130:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -3
* EXPRESSION
* CALL outputc
131:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
132:    LDC  3,32(6)	Load char constant 
133:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
134:    LDA  1,-3(1)	Ghost frame becomes new active frame 
135:    LDA  3,1(7)	Return address in ac 
136:    JMP  7,-109(7)	CALL outputc
137:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
138:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
139:    LDC  3,32(6)	Load char constant 
140:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
141:    LDA  1,-3(1)	Ghost frame becomes new active frame 
142:    LDA  3,1(7)	Return address in ac 
143:    JMP  7,-116(7)	CALL outputc
144:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
145:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
146:    LDC  3,49(6)	Load char constant 
147:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
148:    LDA  1,-3(1)	Ghost frame becomes new active frame 
149:    LDA  3,1(7)	Return address in ac 
150:    JMP  7,-123(7)	CALL outputc
151:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
152:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
153:    LDC  3,46(6)	Load char constant 
154:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
155:    LDA  1,-3(1)	Ghost frame becomes new active frame 
156:    LDA  3,1(7)	Return address in ac 
157:    JMP  7,-130(7)	CALL outputc
158:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
159:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
160:    LDC  3,32(6)	Load char constant 
161:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
162:    LDA  1,-3(1)	Ghost frame becomes new active frame 
163:    LDA  3,1(7)	Return address in ac 
164:    JMP  7,-137(7)	CALL outputc
165:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
166:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
167:    LDC  3,67(6)	Load char constant 
168:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
169:    LDA  1,-3(1)	Ghost frame becomes new active frame 
170:    LDA  3,1(7)	Return address in ac 
171:    JMP  7,-144(7)	CALL outputc
172:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
173:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
174:    LDC  3,111(6)	Load char constant 
175:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
176:    LDA  1,-3(1)	Ghost frame becomes new active frame 
177:    LDA  3,1(7)	Return address in ac 
178:    JMP  7,-151(7)	CALL outputc
179:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
180:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
181:    LDC  3,110(6)	Load char constant 
182:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
183:    LDA  1,-3(1)	Ghost frame becomes new active frame 
184:    LDA  3,1(7)	Return address in ac 
185:    JMP  7,-158(7)	CALL outputc
186:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
187:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
188:    LDC  3,116(6)	Load char constant 
189:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
190:    LDA  1,-3(1)	Ghost frame becomes new active frame 
191:    LDA  3,1(7)	Return address in ac 
192:    JMP  7,-165(7)	CALL outputc
193:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
194:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
195:    LDC  3,105(6)	Load char constant 
196:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
197:    LDA  1,-3(1)	Ghost frame becomes new active frame 
198:    LDA  3,1(7)	Return address in ac 
199:    JMP  7,-172(7)	CALL outputc
200:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
201:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
202:    LDC  3,110(6)	Load char constant 
203:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
204:    LDA  1,-3(1)	Ghost frame becomes new active frame 
205:    LDA  3,1(7)	Return address in ac 
206:    JMP  7,-179(7)	CALL outputc
207:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
208:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
209:    LDC  3,117(6)	Load char constant 
210:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
211:    LDA  1,-3(1)	Ghost frame becomes new active frame 
212:    LDA  3,1(7)	Return address in ac 
213:    JMP  7,-186(7)	CALL outputc
214:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
215:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
216:    LDC  3,101(6)	Load char constant 
217:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
218:    LDA  1,-3(1)	Ghost frame becomes new active frame 
219:    LDA  3,1(7)	Return address in ac 
220:    JMP  7,-193(7)	CALL outputc
221:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outnl
222:     ST  1,-3(1)	Store fp in ghost frame for outnl
* TOFF dec: -4
* TOFF dec: -5
* Param end outnl
223:    LDA  1,-3(1)	Ghost frame becomes new active frame 
224:    LDA  3,1(7)	Return address in ac 
225:    JMP  7,-192(7)	CALL outnl
226:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -3
* EXPRESSION
* CALL outputc
227:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
228:    LDC  3,32(6)	Load char constant 
229:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
230:    LDA  1,-3(1)	Ghost frame becomes new active frame 
231:    LDA  3,1(7)	Return address in ac 
232:    JMP  7,-205(7)	CALL outputc
233:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
234:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
235:    LDC  3,32(6)	Load char constant 
236:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
237:    LDA  1,-3(1)	Ghost frame becomes new active frame 
238:    LDA  3,1(7)	Return address in ac 
239:    JMP  7,-212(7)	CALL outputc
240:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
241:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
242:    LDC  3,50(6)	Load char constant 
243:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
244:    LDA  1,-3(1)	Ghost frame becomes new active frame 
245:    LDA  3,1(7)	Return address in ac 
246:    JMP  7,-219(7)	CALL outputc
247:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
248:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
249:    LDC  3,46(6)	Load char constant 
250:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
251:    LDA  1,-3(1)	Ghost frame becomes new active frame 
252:    LDA  3,1(7)	Return address in ac 
253:    JMP  7,-226(7)	CALL outputc
254:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
255:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
256:    LDC  3,32(6)	Load char constant 
257:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
258:    LDA  1,-3(1)	Ghost frame becomes new active frame 
259:    LDA  3,1(7)	Return address in ac 
260:    JMP  7,-233(7)	CALL outputc
261:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
262:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
263:    LDC  3,83(6)	Load char constant 
264:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
265:    LDA  1,-3(1)	Ghost frame becomes new active frame 
266:    LDA  3,1(7)	Return address in ac 
267:    JMP  7,-240(7)	CALL outputc
268:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
269:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
270:    LDC  3,116(6)	Load char constant 
271:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
272:    LDA  1,-3(1)	Ghost frame becomes new active frame 
273:    LDA  3,1(7)	Return address in ac 
274:    JMP  7,-247(7)	CALL outputc
275:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
276:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
277:    LDC  3,111(6)	Load char constant 
278:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
279:    LDA  1,-3(1)	Ghost frame becomes new active frame 
280:    LDA  3,1(7)	Return address in ac 
281:    JMP  7,-254(7)	CALL outputc
282:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outputc
283:     ST  1,-3(1)	Store fp in ghost frame for outputc
* TOFF dec: -4
* TOFF dec: -5
* Param 1
284:    LDC  3,112(6)	Load char constant 
285:     ST  3,-5(1)	Push parameter 
* TOFF dec: -6
* Param end outputc
286:    LDA  1,-3(1)	Ghost frame becomes new active frame 
287:    LDA  3,1(7)	Return address in ac 
288:    JMP  7,-261(7)	CALL outputc
289:    LDA  3,0(2)	Save the result in ac 
* Call end outputc
* TOFF set: -3
* EXPRESSION
* CALL outnl
290:     ST  1,-3(1)	Store fp in ghost frame for outnl
* TOFF dec: -4
* TOFF dec: -5
* Param end outnl
291:    LDA  1,-3(1)	Ghost frame becomes new active frame 
292:    LDA  3,1(7)	Return address in ac 
293:    JMP  7,-260(7)	CALL outnl
294:    LDA  3,0(2)	Save the result in ac 
* Call end outnl
* TOFF set: -3
* EXPRESSION
* CALL input
295:     ST  1,-3(1)	Store fp in ghost frame for input
* TOFF dec: -4
* TOFF dec: -5
* Param end input
296:    LDA  1,-3(1)	Ghost frame becomes new active frame 
297:    LDA  3,1(7)	Return address in ac 
298:    JMP  7,-298(7)	CALL input
299:    LDA  3,0(2)	Save the result in ac 
* Call end input
* TOFF set: -3
300:     ST  3,-2(1)	Store variable x
* TOFF set: -3
* END COMPOUND
301:    JMP  7,-260(7)	go to beginning of loop 
 48:    JMP  7,253(7)	Jump past loop [backpatch] 
* END WHILE
* TOFF set: -2
* END COMPOUND
* Add standard closing in case there is no return statement
302:    LDC  2,0(6)	Set return value to 0 
303:     LD  3,-1(1)	Load return address 
304:     LD  1,0(1)	Adjust fp 
305:    JMP  7,0(3)	Return 
* END FUNCTION main
  0:    JMP  7,305(7)	Jump to init [backpatch] 
* INIT
306:    LDA  1,0(0)	set first frame at end of globals 
307:     ST  1,0(1)	store old fp (point to self) 
* INIT GLOBALS AND STATICS
* END INIT GLOBALS AND STATICS
308:    LDA  3,1(7)	Return address in ac 
309:    JMP  7,-271(7)	Jump to main 
310:   HALT  0,0,0	DONE! 
* END INIT
