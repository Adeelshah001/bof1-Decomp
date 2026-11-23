extern u16 D_03004114; extern u8 D_030016E0[],D_030023E0[],D_080A63BC[];
void sub_08037FC4(void*,u8); void sub_080A0A68(void*,const void*,u32); void sub_080A0AC8(void*,s32,u32);
void sub_08032644(u8*p){u8 a[4],b[8],v; u8 *q=a; sub_080A0AC8(q,0,4); q[1]=1; sub_080A0A68(b,D_080A63BC+1,8); v=a[p[0x61]]; p[0x40]=v; sub_08037FC4(p,b[p[0x61]]);}
void sub_080325B0(u8*p){u8 v; u8 z=0; p[0xb8]=((v=0x40+(p[0xb8]>>8)),v|p[0xb8]);p[0x4d]=4;p[0x50]=z;D_03004114=1;}
s32 sub_080326D8(u8*p){u8*q=D_030016E0; if(D_030023D0[0]==0 && !(p[0xb8]&4) && (*(u16*)(q+6)&4)) p[0xbe]=1; return 0;}
void sub_0803257C(u8*p){u8*q=D_030023E0; u8 z=0; D_03004114=z; if(*(u16*)(q+0xa4)==0){p[0x4d]=4;p[0x50]=z;D_03004114=1;}}
