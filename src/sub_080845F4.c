extern u16 D_03004F50[];
extern u8 D_08152036[];
extern u16 D_03001104[];
extern u16 D_03001106[];
extern u16 D_08152068[];
extern void sub_080841D0(void *);
extern void sub_080831C4(void *, void *, u8, u16);
void sub_08084088(void *arg0, u8 arg1);
void sub_080840F0(void);
short sub_080845F4(void *arg0)
{
  u32 v = ((*((u32 *) (((u8 *) arg0) + 0x48))) << 8) >> 16;
  if ((v & 1) == 0)
  {
    D_03001104[0] += 1;
    D_03001106[0] -= 1;
  }
  sub_080841D0(arg0);
}

void sub_08083B04(void *arg0, u8 arg1);
