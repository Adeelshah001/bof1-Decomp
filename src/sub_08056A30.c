extern u8 D_03002AB0[];
extern void sub_08056B9C(u8*);
void sub_08056A30(u8 *p){u8 v;{u16 x=*(volatile u16*)(p+0xf4);*(u16*)(p+0xf6)=x;}sub_08056B9C(p);{u16 x=*(volatile u16*)(p+0xf8);*(u16*)(p+0xfa)=x;}p[0xf1]=((v=0x7f+(p[0xf1]>>8)),v&p[0xf1]);}
u32 sub_08056A0C(u8 *p){u32 r=0;if(p[0x3a]){r=*(u16*)(p+0xf6)!=*(u16*)(p+0xf4);}return r;}
u8 sub_08056994(void){u8 count=0,i=0;do{u8 *p=D_03002AB0+i*0x124;u32 r=0;if(p[0x3a]){r=*(u16*)(p+0xf6)!=*(u16*)(p+0xf4);}if(r)count++;i++;}while(i<=7);return count;}
