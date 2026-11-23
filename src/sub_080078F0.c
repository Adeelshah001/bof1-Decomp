extern u32 D_080F5C94[],D_080F5B3C[],D_080F5BC8[],D_080F5C14[];void sub_080A0770(u32);
void sub_08007264(s32 a){u32*t=D_080F5C94;u32 i=(0xff0000&(a<<16))>>17;sub_080A0770(t[i]);}
void sub_080078A8(void){u32*t=D_080F5B3C;u8*b=D_03004830;s32 i=*(s8*)(b+0x2b);sub_080A0770(t[i]);}
void sub_080078CC(void){u32*t=D_080F5BC8;u8*b=D_03004830;s32 i=*(s8*)(b+0x2b);sub_080A0770(t[i]);}
void sub_080078F0(void){u32*t=D_080F5C14;u8*b=D_03004830;s32 i=*(s8*)(b+0x2b);sub_080A0770(t[i]);}
