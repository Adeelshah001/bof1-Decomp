extern u8 D_04000016[];
extern u8 D_0200BE80[];
extern u8 D_020213C0[];
void sub_08051540(void *);
void sub_080532CC(void *);
void sub_08000C68(void *, s32);
void sub_08050DB0(void *);
void sub_080A0210(void *, void *, s32);
void sub_0802B39C(u8);
inline u8 *inline_fn(void *arg0, int arg1)
{
  return ((u8 *) arg0) + arg1;
}

void sub_08052F0C(void *arg0)
{
  u8 *p;
  u16 val;
  sub_08051540(arg0);
  p = inline_fn(arg0, 0x54);
  val = *p;
  p += 8;
  *((u16 *) p) = val;
  *((u32 *) inline_fn(arg0, 0x64)) = (u32) (&sub_080532CC);
}

void sub_08052E0C(void *arg0);
