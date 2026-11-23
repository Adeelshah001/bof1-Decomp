extern u16 D_03004114; extern u8 D_030016E0[],D_030023E0[];
void sub_080325B0(u8*p){u8 v=0x40+(p[0xb8]>>8); u8 z=0; p[0xb8]=v|p[0xb8];p[0x4d]=4;p[0x50]=z;D_03004114=1;}
s32 sub_080326D8(u8*p){if(D_030023D0[0]==0 && !(p[0xb8]&4)){u8*q=D_030016E0; if(*(u16*)(q+6)&4) p[0xbe]=1;} return 0;}
void sub_0803257C(u8*p){u16*state=&D_03004114; s32 z=0; u8*q; *state=z; q=D_030023E0; if(*(u16*)(q+0xa4)==0){p[0x4d]=4;p[0x50]=z;*state=1;}}
