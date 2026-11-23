extern u8 D_080A6394[];
void sub_08037FC4(void*,u8); void sub_080A0A68(void*,const void*,u32); void sub_080A0AC8(void*,s32,u32);
void sub_08032A2C(u8*p){u8 a[4],b[4],v; u8 *q=a; sub_080A0AC8(q,0,4); q[1]=1; sub_080A0A68(b,D_080A6394,4); v=a[p[0x61]]; p[0x40]=v; sub_08037FC4(p,b[p[0x61]]);}
