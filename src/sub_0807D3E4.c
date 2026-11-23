extern u8 D_03004F30[]; void sub_0807CF2C(void*); void sub_0807CA34(void*);
void sub_0807D3E4(u8 *p) { u8 *q=*(u8**)(p+0x6c); u8 v=q[0x41]; p[0x41]=v; if(q[0xf1]&0x80) sub_0807CF2C(p); else if(!(D_03004F30[9]&0xa0) && !(p[0xf1]&0x80)) sub_0807CA34(p); }
