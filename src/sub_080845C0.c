extern u16 D_03004F50[];
extern u8 D_08152036[];
void sub_08084088(void *arg0, u8 arg1);
void sub_080840F0(void);
void sub_08083B90(void *arg0);
extern u16 D_03001104[];
extern u16 D_03001106[];
extern void sub_080841D0(void *);
volatile int sub_080845C0(void *arg0)
{
  if (((((*((u32 *) (((u8 *) arg0) + 0x48))) << 8) >> 16) & 1) == 0)
  {
    D_03001104[0] -= 8;
    D_03001106[0] += 8;
  }
  sub_080841D0(arg0);
}

