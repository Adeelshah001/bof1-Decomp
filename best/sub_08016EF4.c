extern u8 D_03002AB0[];
extern u8 D_03001850[];
extern void *D_03004154;
extern u8 D_03004584[];
extern u8 D_03003520[];
extern u8 D_030036A0[];
extern u8 D_03004830[];
void sub_08019720(void);
void *sub_0803ED98(void);
void sub_08072CC4(s32);
void sub_0803EE88();
void sub_08004EA0(s32);
void sub_08017214(void);
void sub_080170AC(void);
void sub_08016F44(void);
void sub_08016EF4(void)
{
  u8 *base;
  u8 *src;
  sub_08004EA0(0x842E);
  base = D_030036A0;
  src = base - 0x100;
  *((u16 *) (base + 6)) = *((u16 *) (src + 6));
  *((u16 *) (base + 2)) = *((u16 *) (src + 2));
  *((u16 *) (base + 0x2C)) = *((u16 *) (src + ((short) 6)));
  sub_0803EE88();
  sub_0803EE88(base - 0x80);
  D_03004830[0x2D]++;
  D_03004830[0x2B]++;
}

