/* identical to sub_0807D590 (matched), with its names changed by decompdecomp */
void sub_0807D664(void*); void sub_0807C728(void*);
void sub_08037FC4(void*,s32); void sub_0807D838(void*);
void sub_0807C78C(void*,void*); void sub_0807D78C(void*,u32);
void sub_0807CF2C(void*); void sub_0807CA34(void*);
extern u8 D_03004F30[];
void sub_0807D644(u8 *p) { switch(p[0x4d]) {case 0: sub_0807D664(p); break; case 1: sub_0807C728(p); break;} }
void sub_0807D454(void *p) { sub_08037FC4(p,10); sub_0807D838(p); }
void sub_0807D6E4(u8 *p) { u8 *q=*(u8**)(p+0x6c); if(q[0x4d]!=12) sub_0807C78C(p,q); else sub_0807D78C(p,*(u32*)(p+0x78)); }
void sub_0807D3E4(u8 *p) { u8 *q=*(u8**)(p+0x6c); p[0x41]=q[0x41]; if(q[0xf1]&0x80) sub_0807CF2C(p); else if(!(D_03004F30[9]&0xa0) && !(p[0xf1]&0x80)) sub_0807CA34(p); }
