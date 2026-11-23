extern u8 D_03002AB0[];
extern u32 D_080F5B08[],D_080F5B18[],D_080F5B2C[];
void sub_080A0770(s32);
void sub_0800783C(void) { u32 *t=D_080F5B08; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
void sub_08007860(void) { u32 *t=D_080F5B18; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
void sub_08007884(void) { u32 *t=D_080F5B2C; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
