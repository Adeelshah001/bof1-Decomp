extern u32 D_080F8D44[]; extern u8 D_030023E0[];
void sub_080A0770(u32); s32 sub_08001770(s32); void sub_080017EC(s32); s32 sub_0805CF40(u16,u16*);
void sub_080243DC(void) {sub_080A0770(D_080F8D44[D_03004830[0x40]]);}
void sub_080244C0(void) {u16 i; u8*p; if((u8)sub_08001770(0xbf)==0) {p=D_030023E0; if(*(u16*)(p+0xa4)==0xfe && (u8)sub_0805CF40(0x160,&i)==0) sub_080017EC(0xbf);}}
