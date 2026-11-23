extern u8 D_080A6394[],D_080A63C4[];
void sub_080A0A68(void*,const void*,u32); void sub_080A0AC8(void*,s32,u32); void sub_08037FC4(void*,u8);
void sub_080325DC(u8*p){u8 a[4],b[4],v; sub_080A0A68(a,D_080A6394,4); sub_080A0AC8(b,0,4); b[1]=1; v=b[p[0x61]]; p[0x40]=v; sub_08037FC4(p,a[p[0x61]]);}
void sub_08032690(u8*p){u8 a[8],b[4],v; sub_080A0A68(a,D_080A63C4+1,8); sub_080A0AC8(b,0,4); b[1]=1; v=b[p[0x61]]; p[0x40]=v; sub_08037FC4(p,a[p[0x61]]);}
