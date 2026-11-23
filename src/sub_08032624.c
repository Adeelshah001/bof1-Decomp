typedef void (*Fn)(u8*); extern Fn D_080FA5F8[];
extern u8 D_080A6394[],D_080A63BC[],D_080A63C4[];
void sub_080A0A68(void*,const void*,u32); void sub_080A0AC8(void*,s32,u32); void sub_08037FC4(void*,u8);
void sub_08032624(u8*p){D_080FA5F8[p[0x50]>>1](p);}
void sub_08032644(u8*p){u8 a[4],b[8]; sub_080A0AC8(a,0,4); a[1]=1; sub_080A0A68(b,D_080A63BC+1,8); p[0x40]=a[p[0x61]]; sub_08037FC4(p,b[p[0x61]]);}
void sub_080325DC(u8*p){u8 a[4],b[4]; sub_080A0A68(a,D_080A6394,4); sub_080A0AC8(b,0,4); b[1]=1; p[0x40]=b[p[0x61]]; sub_08037FC4(p,a[p[0x61]]);}
void sub_08032690(u8*p){u8 a[8],b[4]; sub_080A0A68(a,D_080A63C4+1,8); sub_080A0AC8(b,0,4); b[1]=1; p[0x40]=b[p[0x61]]; sub_08037FC4(p,a[p[0x61]]);}
