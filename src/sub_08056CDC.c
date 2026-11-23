extern u8 D_03002AB0[];
extern u16 D_0202DBD0[][2];
extern s32 (*D_080FEC80[])(s32,s32);
extern void sub_08056B70(void *);
extern s32 sub_0805E044(u16);
extern s32 sub_08055DD0(s32,s32,u8 *,u16);

void sub_08056C60(void){u8 *b=D_03002AB0;u8 *p=b+0xf1;u8 v=*p;u8 t;if(!(v&0x80)){if((v&0x50)==0x50)*p=((t=0xef+(v>>8)),t&v);*p=((t=0x20+(*p>>8)),t|*p);}}
s32 sub_08056C8C(s32 a,s32 b){u32 v=D_0202DBD0[0x81][a];if((v&0xf00)&&!sub_0805E044(v))return D_080FEC80[v&0x7f](a,b);return 6;}
u8 sub_08056CDC(s32 a,s32 b,u8 *p,u16 d,s32 e){u8 r;if(!e){r=sub_08055DD0(a,b,p,d);}else{*p=0xff;r=1;}return r;}
