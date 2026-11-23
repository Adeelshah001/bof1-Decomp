extern u8 D_03002AB0[];
extern u16 D_0202DBD0[][2];
extern u16 D_0300413C;
void sub_0801396C(void *);
s32 sub_0805CF40(u16, u16 *);
void sub_08013820(u32);
void sub_08013904(void) {
 u8 *p = D_03002AB0;
 sub_0801396C(p); sub_0801396C(p+0x124); sub_0801396C(p+0x248); sub_0801396C(p+0x36c);
}
void sub_080138CC(void) {
 u8 *p=D_03002AB0;
 (*(u32 *)(p+0x88))++; (*(u32 *)(p+0x1ac))++; (*(u32 *)(p+0x2d0))++; (*(u32 *)(p+0x3f4))++;
}
void sub_0801383C(u16 a,u16 b) {
 u16 i;
 if ((u8)sub_0805CF40(a,&i)==0) D_0202DBD0[0x81][i]=b;
}
void sub_0801380C(u32 a) {
 D_0300413C=0x38;
 sub_08013820(a);
}
