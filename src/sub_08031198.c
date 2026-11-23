extern void (*D_080FA63C[])(u8 *),(*D_080FA4F8[])(u8 *);
extern void (*D_080FA498[])(u8 *,u8);
s32 sub_08031100(u8 *p){D_080FA63C[p[0x50]>>1](p);return 0;}
s32 sub_08031148(u8 *p){u8 v=**(u8 **)(p+0x88);D_080FA498[v>>4](p,v);return 0;}
s32 sub_0803116C(u8 *p){u8 v=p[0xc3];if(v==0 || (v--,p[0xc3]=v,v==0))p[0x4d]=0;return 0;}
s32 sub_08031198(u8 *p){D_080FA4F8[p[0x50]>>1](p);return 0;}
