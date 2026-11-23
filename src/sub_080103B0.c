extern u32 D_080F6660[]; void sub_080A0770(u32);
void sub_080101C0(s32 a){u32 x=a<<16;u32 mask=0xff0000;u32*t=D_080F6660;mask &= x;mask>>=17;sub_080A0770(t[mask]);}
extern void (*D_080F63E8[])(void);
void sub_0801013C(void){void (**t)(void)=D_080F63E8;u8*p=D_03004830;t[(s8)p[0x2A]]();}
extern u16 D_0202DBD0[][2]; extern u16 D_03004114,D_0300413C;
void sub_08010384(u8 a){D_0202DBD0[0x81][a]+=0x100;D_03004114=1;}
u8 sub_0805D704(u16);void sub_08004EA0(s32);
s32 sub_080103B0(u16 a){u8 v=sub_0805D704(a);s32 r;if(v==0){D_03004114=v;sub_08004EA0(0x8735);r=0;}else{D_0300413C=a;D_03004114=1;r=1;}return r;}
