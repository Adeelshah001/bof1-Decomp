extern u8 D_03001790[];
void sub_0803EE38(u8 *a) { s32 z8; s32 z32; u8 *p; p=a+0x4C; z8=0; z32=0; *(u16 *)p=z32; *(u16 *)(p+4)=z32; *(u16 *)(a+0x22)=z32; *(u8 *)(p-0x12)=z8; *(u8 *)(p-0xC)=z8; *(u32 *)(a+0x64)=z32; }
void *sub_0803ED54(void) { u8 *r=NULL; u8 i=0; u8 *b=D_03001790; if(b[0x29]==0) r=b; else { do { i++; if(i>3) break; {u8 *p=b+i*0x30; if(!p[0x29]) {r=p;break;} } } while(1); } return r; }
void *sub_0803ED04(u8 n) { u8 *r=NULL; u8 i=0; u8 *b; if(n>0) { b=D_03003420; if(!(b[0x3A]&1)) r=b; else { do {i++; if(i>=n) break; {u8 *p=b+i*0x80; if(!(p[0x3A]&1)) {r=p;break;}} }while(1); }} return r; }
void sub_0803F764(void); void sub_0803F7B0(void);
s32 sub_0803EF98(u8 **a) { u8 *b=D_03004830; if(*(s8 *)(b+0x31)==(*a)[1]) sub_0803F764(); else sub_0803F7B0(); *a+=2; return 0; }
