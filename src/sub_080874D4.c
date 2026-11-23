extern u8 D_03004F50[];
extern void sub_0807B248(void *);
extern u8 sub_0807CAB8(void *, s32 *);
extern void sub_080877A4(void *);
extern void sub_080877B0(void *);
extern void sub_080877C4(void);
extern void sub_08087594(void *);
extern s32 sub_0807CE30(void *);
extern void sub_08087D34(void *);
extern void sub_08087D88(void *, s32);
void sub_08087758(void *arg0);
void sub_080877B0(void *arg0);
void sub_080874D4(void *arg0)
{
  int new_var;
  u8 *p = (u8 *) arg0;
  p[0x4D] = 4;
  p[0x54] = 0x28;
  new_var = 5;
  p[0xE1] = new_var;
  sub_08087594(arg0);
}

void sub_08087C50(void *arg0, s8 arg1);
