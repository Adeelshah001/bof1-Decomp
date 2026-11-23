extern u8 D_03002AB0[];
extern u32 D_080F5908[],D_080F5A74[],D_080F5A98[];
void sub_080A0770(s32);
void sub_080077AC(void) { u32 *t=D_080F5908; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
void sub_080077F4(void) { u32 *t=D_080F5A74; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
void sub_08007818(void) { u32 *t=D_080F5A98; u8 *b=D_03004830; u8 *p=b+0x2B; s32 i=*(s8 *)p; sub_080A0770(t[i]); }
