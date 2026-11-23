/* identical to sub_08080570 (matched), with its names changed by decompdecomp */
u8 *sub_080801C0(s32,u8*);u8 *sub_0808025C(s32,u8*);void sub_0807FD0C(s32,u8*);void sub_080805C0(s32,u8*,u8*);
void sub_08080598(s32 a,u8*b){u8*p=sub_080801C0(a,b);if(!p)sub_0807FD0C(a,b);else sub_080805C0(a,b,p);}
void sub_08080518(s32 a,u8*b){u8*p=sub_0808025C(a,b);if(!p)sub_0807FD0C(a,b);else sub_080805C0(a,b,p);}
void sub_08080540(s32 a,u8*b){b[0x7D]=0xF0&b[0x7D];*(s8*)(b+0xE0)=8;b[0xE2]=(0xF0&b[0xE2])|b[0x3B];}
extern u8 D_03002AB0[],D_080A6884[],D_080A68A8[];void sub_080A0598(void*,s32,void*,s32);
void sub_080805C0(s32 a,u8*b,u8*p){u8*base=D_03002AB0;if(p<base||p>=base+0x490)sub_080A0598(D_080A6884,0x314,D_080A68A8,1);b[0xE2]=(0xF0&b[0xE2])+p[0x3B];}
