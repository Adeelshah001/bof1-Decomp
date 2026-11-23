extern void (*D_080FB8E8[])(u8 *);
extern void (*D_080FB984[])(u8 *);
extern u8 D_03002AB0[],D_0202DBD0[];
extern void sub_0803A8EC(u8 *);
extern s32 sub_0803E100(u8 *),sub_0803E11C(u8 *);
extern void sub_08037FC4(u8 *,s32);
void sub_0803DF20(u8 *p){D_080FB8E8[p[0x4c]>>1](p);}
void sub_0803DFA4(u8 *p){
u8 *b;
D_080FB984[p[0x4d]>>1](p);
b=D_03002AB0;
if(!(b[0xb8]&8)&&!(p[0xba]&4)){
b=D_0202DBD0;
if(!(b[0x2b8]&7))sub_0803A8EC(p);
}}
u8 sub_0803E004(u8 *p){
s32 r;
if(*(u32 *)(p+0x10)){r=sub_0803E100(p);goto done;}
if(!*(u32 *)(p+0x14))return 1;
r=sub_0803E11C(p);
done:return r;
}
void sub_0803E094(u8 *p){
s32 offset=(u8)(p[0x3b]<<4);
u8 *q=p+0x84;
u8 v;
*(u32 *)q=*(u32 *)(p+4);
{s32 y=*(u16 *)(p+6)-0x80; *(u16 *)(p+6)=y-offset;}
q-=0x43;
*(u16 *)(p+0x36)=*q;
*q=((v=0x30+(*q>>8)),v|*q);
sub_08037FC4(p,12);
p[0x4d]=2;
}
