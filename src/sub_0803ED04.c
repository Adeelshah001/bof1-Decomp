extern u8 D_03001790[];
void sub_0803EE38(u8 *a) { u8 *p; s32 z8; s32 z32; p=a+0x4C; z8=0; z32=0; *(u16 *)p=z32; p+=4; *(u16 *)p=z32; *(u16 *)(a+0x22)=z32; p-=0x16; *p=z8; p+=6; *p=z8; *(u32 *)(a+0x64)=z32; }
void *sub_0803ED54(void) { u8 *r=NULL; u8 i; for(i=0;i<4;i++) { u8 *p=i*0x30+D_03001790; if(!p[0x29]) {r=p;break;} } return r; }
void *sub_0803ED04(u8 n) { u8 *r=NULL; u8 i; for(i=0;i<n;i++) { u8 *p=i*0x80+D_03003420; if(!(p[0x3A]&1)) {r=p;break;} } return r; }
