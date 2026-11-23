extern u8 D_0202DBD0[], D_0300482C[];
void sub_0801DC00(s32); void sub_0802411C(s32,s32); void sub_0800764C(s32); void sub_080017EC(s32); void sub_080050B4(s32,s32,s32,s32); void sub_080030D4(void);
void sub_0801E96C(void){u8*p=D_03004830; s32 v; p[0x2b]=((v=-128+(p[0x2b]>>8)), v|p[0x2b]);}
void sub_0801E8A0(void){u8*p;u8*q;sub_0801DC00(14);sub_0802411C(0x48c0,0x1e0);sub_0800764C(0x13);sub_080017EC(0xdd);p=D_0202DBD0;p[0x484]=0xfc;q=D_03004830;q[0x2b]++;}
void sub_0801E86C(void){u8*p;D_0300482C[0]=2;sub_080050B4(1,0,0xb28,0x3cc);sub_080030D4();p=D_03004830;p[0x2b]++;}
void sub_0801EAA0(void){u8*p=D_03004830;p[0x2d]=0x80;p[0x2a]=0;p[0x2b]=0;}
